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

    fclose(fptr);
}

int main()
{
    int isRunning = 1;
    int task;

    while(isRunning){

        printf("##### Hauptmenü #####\n\n");
        printf("1: Aufgabe A \n");
        printf("2: Aufgabe B (Zusatzaufgabe) \n");
        printf("3: Aufgabe C \n");
        printf("4: Aufgabe D (Zusatzaufgabe) \n");
        printf("0: Prozess beenden \n\n");

        printf("## Input: ## \n");
        scanf("%d", &task);

        switch(task){
        case 0:
            isRunning = 0;
            break;
        case 1:
            printf("## Aufgabe A ## \n");
            readFile();
            break;
        case 2:
            printf("## Aufgabe B (Zusatzaufgabe) ## \n");
            printf("crickets chirping... \n");
            break;
        case 3:
            printf("## Aufgabe C ##\n");

            break;
        case 4:
            printf("## Aufgabe D (Zusatzaufgabe) ##\n");
            printf("crickets chirping... \n");
            break;
        }
    }
    return 0;
}
