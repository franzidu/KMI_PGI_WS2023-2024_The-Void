#include <stdio.h>
#define SIZE 1000


void readFile(){
    FILE* fptr;

    fptr = fopen("input.txt", "r");

    int countChars = 0;
    char chars;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    if(fptr != NULL){
        printf("File opened successfully! \n");
        while ((chars = fgetc(fptr)) != EOF){
            if(chars != '\0' && chars != '\n'){
                countChars++;
                printf("%c", chars);
            }
            switch(chars){
            case 'A':
            case 'a':
                a++;
                break;
            case 'E':
            case 'e':
                e++;
                break;
            case 'I':
            case 'i':
                i++;
                break;
            case 'O':
            case 'o':
                o++;
                break;
            case 'U':
            case 'u':
                u++;
                break;
            }
        }
    }else{
        printf("Failed opening file! \n");
    }
    printf("\nNumber of vocals: \n");
    printf("A: %d \n", a);
    printf("E: %d \n", e);
    printf("I: %d \n", i);
    printf("O: %d \n", o);
    printf("U: %d \n", u);
    printf("%d", countChars);

    fclose(fptr);
}

int main()
{
    readFile();
    return 0;
}
