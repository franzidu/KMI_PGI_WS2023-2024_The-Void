#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct konto{
    double kontostand; //Kontostand
    double limit; //Kreditlimit
} Konto;

void initialisieren(Konto *k);
void anzeigen(const Konto *k);
void einzahlen(Konto *k);
void auszahlen(Konto *k);
int menueAuswahl();


int main()
{
    Konto meinKonto;
    int auswahl;

    int task;
    int isrunning =1;

    while(isrunning){
        printf("Gib eine Zahl ein, um die Aufgabe auszuführen: \n");
        printf("Aufgabe A: 1\n");
        printf("Aufgabe B: 2\n");
        printf("Ende: 0\n");


        scanf("%d", &task);
        switch(task){
        case 0: isrunning = 0;
            break;
        case 1:{
            char name[80];

            printf("Gib deinen Namen ein: \n");
            scanf("%s", name);
            //fgets(name, sizeof(name), stdin);

            size_t len = strlen(name);
            if(len > 0 && name [len - 1] == '\n'){
                //printf("#%c#", name[len -1]);
                name [len - 1] = '\0';
            }

            size_t greeting_length = 8 + strlen(name);
            //+1 für das Nullzeichen
            char *greeting = (char *)malloc((greeting_length +1) * sizeof(char));

            if(greeting != NULL){
                sprintf(greeting, "Hallo %s!", name);
                printf("%s\n", greeting);

                free(greeting);
            }else{
                printf("Speicher konnte nicht allokiert werden. \n");
            }
            break;}
        case 2:
            initialisieren(&meinKonto);

            do{
                switch (auswahl = menueAuswahl()){
                case 0: break;
                case 1: anzeigen(&meinKonto); break;
                case 2: einzahlen(&meinKonto); break;
                case 3: auszahlen(&meinKonto); break;
                default:
                    printf("Ungueltige Eingabe\n");
                }
            }while(auswahl);
            break;
        }
    }
    return 0;
}


void initialisieren(Konto *k){
    k->kontostand = 2000;
    k->limit = 500;
}
void anzeigen(const Konto *k){
    printf("Der Kontostand ist: %.2lf Euro \n", k->kontostand);
}

void einzahlen(Konto *k){
    printf("Wie viel möchtest du einzahlen?\n");
    float Betrag;
    scanf("%f", &Betrag);
    k->kontostand += Betrag;
    anzeigen(k);
}

void auszahlen(Konto *k){
    printf("Wie viel möchtest du auszahlen?\n");
        float Auszahlung;
    scanf("%f", &Auszahlung);

    if (Auszahlung > k->limit){
        printf("Auszahlungslimit überschritten. Bitte geringeren Betrag eingeben.\n");
            return;
    }else if (k->kontostand < Auszahlung){
        printf("Kontand deckt Auszahlung nicht ab. Bitte geringeren Betrag wählen.\n");
            return;
    }else{
        k->kontostand -= Auszahlung;
        anzeigen(k);
    }
}

int menueAuswahl(){
    printf("Wähle eine Aktion:\n");
        printf("Kontostand anzeigen: 1\n");
    printf("Geld einzahlen: 2\n");
    printf("Geld auszahlen: 3\n");
    printf("Programm abbrechen: 0\n");

    int input;
    scanf("%d", &input);
    return input;
}
