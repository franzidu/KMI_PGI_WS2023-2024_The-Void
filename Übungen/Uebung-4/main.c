#include <stdio.h>
#include <stdbool.h>
typedef int Datatype;



float calcVoltage(float r, float i){
    return r * i;
}

float calcResistence(float u, float i){
    return u / i;
}

float calcCurrent(float u, float r){
    return u / r;
}

int getChoice(){
    int choice;
    printf("Was möchtest du berechnen?\n");
    printf("Spannung: 1\n");
    printf("Widerstand: 2\n");
    printf("Strom: 3\n");
    scanf("%d", &choice);
    return choice;
}

float getValue(char c){
    float value;
    printf("%c eingeben: \n", c);
    scanf("%f", &value);
    return value;
}

void getAnswer(char c, float x){
    printf("%c beträgt: %f\n", c, x);
}

int main(){

    int task;
    while(1){
        printf("Wähle eine Aufgabe, um sie auszuführen: \n");
        printf("A: 1 \n");
        printf("B: 2 \n");
        printf("C: 3 \n");
        printf("D: 4 \n");
        scanf("%d", &task);

        switch(task){
        case 1:
            printf("-----1-----\n");
            printf("Fakultät\n");

            printf("Bitte gebe eine natürliche Zahl n ein, bei welcher die Fakultät berechnet werden soll: \n");
            Datatype n;
            Datatype faculty = 1;
            scanf("%lld", &n);
            if (n < 0) {
                printf("Error: Die Fakultät ist nur für natürliche Zahlen definiert.\n");
            } else {
                for (Datatype i = 1; i <= n; ++i) {
                    faculty = faculty * i;
                }
                printf("Die Fakultät von %d ist %lld\n", n, faculty );
            }
            break;

        case 2:
            printf("-----2-----\n");
            printf("Berechnung der Kreiszahl Pi\n");
            printf("-----1. mit der Leibniz-Reihe-----\n");

            int m = 1000000;
            double pi = 0.0;

            for (int i = 0; i < m; ++i) {
                // Die Leibniz-Reihe: π = 4 * (1 - 1/3 + 1/5 - 1/7 + ...)
                pi += (i % 2 == 0 ? 1.0 : -1) / (2.0 * i + 1);
            }

            // Multiplizieren mit 4, um π zu erhalten
            pi *= 4.0;
            printf("Die Näherung von π nach der Leibniz-Reihe mit %d Summanden: %.15f\n", m, pi);

            printf("-----2 mit dem Wallis´schen Produkt.-----\n");

            double pi2 = 1.0;
            for (int j = 2; j < m; ++j){
                //Das Wallis´sche Produkt: π = 2 * (2/3) * (4/3) * (4/5) * ...)
                if(j % 2 == 0 ){
                    pi2 *= (j/(j-1.0));
                }else {
                    pi2 *= ((j-1.0)/j);
                }
            }
            pi2 *= 2.0;
            printf("Die Näherung von π nach dem Wallis´schen Produkt mit %d Summanden: %.15f\n", m, pi2);
            break;
        case 3:
            printf("-----3-----\n");
            printf("Zusatzaufgabe: Addition der Summanden der harmonischen Reihe\n");

            break;
        case 4:
            printf("-----4-----\n");

            switch(getChoice()){
            case 1:
                getAnswer('U', calcVoltage(getValue('r'), getValue('i')));
                break;
            case 2:
                getAnswer('R', calcResistence(getValue('u'), getValue('i')));
                break;
            case 3:
                getAnswer('I', calcCurrent(getValue('u'), getValue('r')));
                break;
            }

            break;
        }
    }
    return 0;
}
