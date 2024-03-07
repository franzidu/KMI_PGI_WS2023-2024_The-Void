#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define N 5050


//functions
unsigned string_length(char str[]){
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

bool palindrom(char str[]){
    int length = string_length(str);
    while (str[length] != '\0') {
        length++;
    }

    for(char i = 0; i < length/2; i++){
        //Vergleicht den String mit dem ersten und letzten Wert und loopt dann durch den String
        if(str[i] != str[length - i - 1]){
            return false;
        }else{
            return true;
        }
    }
}

void entferne(char str[], char c){
    int i = 0;
    while(str[i] != '\0' && str[i] != c){
        i++;}
    if(str[i] == c){
        for (int j = i; str[j] != '\0'; j++) {
            str[j] = str[j + 1];
        }
    }
}

void dreieck(char art[], int numLines){
    int k = 0;
    for(int i = 0; i < numLines; i++){
        for(int j = 0; j <= i; j++){
            art[k] = 'X';
            k++;
        }
        art[k] = '\n';
        k++;
    }
    art[k] = '\0';
}

int main()
{
    //Variables
    char emptyString[] = "";
    char unevenString[] = "Radar";
    char evenString[] = "nennen";
    char oneString[] = "W";

    char string[] = "Moinnnn";
    char valueToBeDeleted = 'n';

    char arr[N];


    int task;

    while(1){
        printf("Gib eine Zahl ein, um eine Aufgabe auszuführen!\n");
            printf("Aufgabe a: 1\n");
        printf("Aufgabe b: 2\n");
        printf("Aufgabe c: 3\n");
        printf("Aufgabe d: 4\n");
        scanf("%d", &task);

        switch(task){
        case 1:
            printf("Die Länge des Strings ist: %d \n", string_length("Hello World"));
                break;
        case 2:
            //Testfälle
            printf("%s ist ein Palindrom: %s \n",emptyString, palindrom(emptyString) ? "Ja" : "Nein");
            printf("%s ist ein Palindrom: %s \n",unevenString, palindrom(unevenString) ? "Ja" : "Nein");
            printf("%s ist ein Palindrom: %s \n",evenString, palindrom(evenString) ? "Ja" : "Nein");
            printf("%s ist ein Palindrom: %s \n",oneString, palindrom(oneString) ? "Ja" : "Nein");
            break;
        case 3:
            printf("Vorher: %s \n", string);
            entferne(string, valueToBeDeleted);
            printf("Nacher: %s \n", string);
            break;
        case 4:
            dreieck(arr, 100);
            printf("%s", arr);
            break;
        }
    }
    return 0;
}
