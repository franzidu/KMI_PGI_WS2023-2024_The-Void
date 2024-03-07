#include <stdio.h>

int main()
{
    printf("Übung 2\n");
    printf("Aufgabe A\n");
    printf("________________________\n");

    int ageInput;
    printf("Bitte gebe dein Alter ein: \n");

    scanf("%d", &ageInput);

    if (ageInput > 65){
        printf("Oldtimer\n");
    }else{
        printf("Jungspund\n");
    }
    printf("________________________\n");
    printf("________________________\n");

    printf("Aufgabe B\n");
    printf("________________________\n");

    int zahl1, zahl2;

    printf("Bitte gib zwei ganze Zahlen zwischen 1 und 6 ein: ");
    scanf("%d %d", &zahl1, &zahl2);

    if (zahl1 >= 1 && zahl1 <= 6 && zahl2 >= 1 && zahl2 <= 6) {
        if (zahl1 == zahl2) {
            printf("Pasch \n");
        } else if ((zahl1 == 1 && zahl2 == 2) || (zahl1 == 2 && zahl2 == 1)) {
            printf("Mäxchen\n");
        } else {
            int max_number = (zahl1 > zahl2) ? zahl1 : zahl2;
            int min_number = (zahl1 < zahl2) ? zahl1 : zahl2;
            printf("Die größte zweistellige Zahl ist: %d%d\n", max_number, min_number);
        }
    } else {
        printf("Fehler: Die eingegebenen Zahlen müssen zwischen 1 und 6 liegen.\n");
    }

    printf("________________________\n");
    printf("________________________\n");

    printf("Aufgabe C\n");
    printf("________________________\n");

    int n;

    printf("Gib eine ganze Zahl ein:");
    scanf("%d", &n);

    int remainingNumber = n % 23;

    if (remainingNumber == 0){
        printf("Scherzkeks\n");
    }

    printf("Der Rest der Division ist: %d \n", remainingNumber);

    printf("________________________\n");
    printf("________________________\n");

    printf("Aufgabe D\n");
    printf("________________________\n");

    int a, b;

    printf("Gib den Wert von a ein: ");
    scanf("%d", &a);
    printf("Gib den Wert von b ein: ");
    scanf("%d", &b);

    int lastNumberA = a % 10;
    int lastNumberB = b % 10;

    if (lastNumberA == lastNumberB){
        printf("Letzte Zahl ist gleich.\n");
    }else {
        printf("Letzte Zahl ist ungleich. \n");
    }

    printf("________________________\n");
    printf("________________________\n");

    printf("Zusatzaufgabe F \n");
    printf("________________________\n");

    printf("✅\n");

    printf("________________________\n");
    printf("________________________\n");

    printf("Zusatzaufgabe E \n");
    printf("________________________\n");

    int x,y,m;
    int restM = 0;

    printf("Wie viele 1kg Schokoriegel gibt es? \n");
    scanf("%d", &x);

    printf("Wie viele 5kg Schokoriegel gibt es? \n");
    scanf("%d", &y);

    printf("Wie viel Kilo Schokoriegel werden gebraucht? \n");
    scanf("%d", &m);

    restM = (m%(5*y));

    if(restM <= x){
        printf("Anzahl zu essenden kleinen Schokoriegel: %d \n", restM);
    }else if (restM < 1){
        printf("-1 Fehler \n");
    }


    return 0;
}
