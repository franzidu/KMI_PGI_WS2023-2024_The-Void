#include <stdio.h>
#include <stdbool.h>

int main()
{
    int task;
    while(1){
        printf("Wähle eine Aufgabe, um sie zu öffnen: \n");
        printf("A: 1 \n");
        printf("B: 2 \n");
        printf("C: 3 \n");
        printf("D: 4 \n");
        printf("E: 5 \n");
        scanf("%d", &task);

        switch(task){
        case 1:
            printf("-----1-----\n");
            printf("Alle Zahlen von 100 bis 200\n");
            for(int a = 100; a <= 200; a++){
                printf("%d\n", a);
            }

            printf("-----2-----\n");
            printf("Alle geraden Zahlen von 111 bis 222\n");
            for(int b = 112; b <= 222; b += 2){
                    printf("%d\n", b);
            }

            printf("-----3-----\n");
            printf("Alle Zahlen von 333 bis 222, die durch 3 teilbar sind\n");
            for(int c = 333;c > 222; c -=3 ){
                    printf("%d\n", c);
            }
            break;
        case 2:
            printf("Aufgabe: x^3 - 73x^2 + 1655x - 11951 = 0\n");
            for (int x = 1; x < 100; x++){
                    int y = x * x;
                    int a = x * y;
                    int b = 73 * y;
                    int c = 1655 * x;
                    int d = 11951;

                    int result = a - b + c - d;

                if (result == 0){
                    printf("Lösung gefunden: x = %d\n", x);
                }
            }
            break;
        case 3:
            printf("-----1-----\n");
            printf("Summe aller durch 3 teilbaren ganzen Zahlen zwischen 1 und 1000\n");
            int sum = 0;
            for (int a = 1; a <= 1000; a++){
                if(a % 3 == 0){
                    sum += a;
                }
            }
            printf("Summe: %d\n", sum);


            printf("-----2-----\n");
            printf("Gib eine Ganzzahl n ein: \n");
            int n;
            scanf("%d", &n);

            bool hasSeven = false;

            //Prüfung, ob die Zahl 7 in der Dezimaldarstellung von n vorkommt:

            while (n > 0) {
                if (n % 10 == 7){
                    hasSeven = 1;
                    break;
                }
                n /= 10;
            }
            if (hasSeven){
                printf("true\n");
            }else {
                printf("false\n");
            }


            printf("-----3-----\n");
            printf("Gib eine Ganzzahl m ein: \n");
            int m;
            scanf("%d", &m);

            int numberOfSeven = 0;

            while (m > 0){
                if (m % 10 ==7){
                    numberOfSeven ++;
                }
                m /= 10;
            }
            printf("Die Ziffer 7 kommt %d mal vor.\n", numberOfSeven);

            printf("-----4-----\n");

            printf("Gib den Wert von b ein: ");
            int g, h;
            scanf("%d", &g);

            printf("Gib den Wert von h ein: ");
            scanf("%d", &h);

            // Potenz berechnen und ausgeben
            int ergebnis = 1;
            for (int i = 0; i < h; i++) {
                ergebnis *= g;
            }

            printf("%d hoch %d ist %d\n", g, h, ergebnis);
                break;


        case 4:
            printf("-----i-----\n");
            int count = 0;
            int max = 0;
            int input;

            while(true){
                printf("Gib eine Zahl ein: \n");
                scanf("%d", &input);
                if(input < 0){
                    printf("Error\n");
                    break;
                }
                count ++;
                if (input > max){
                    max = input;
                }
                if (count == 10){
                    printf("Die größte Zahl ist %d\n", max);
                    break;
                }
            }

            //Zurücksetzen der Variablen für Aufgabe ii)
            max = 0;
            count = 0;


            printf("-----ii-----\n");

            while(true){
                printf("Gib eine Zahl ein: \n");
                scanf("%d", &input);
                if(input <= 0){
                    printf("Error\n");
                    continue;
                }
                count ++;
                if (input > max){
                    max = input;
                }
                if (count == 10){
                    printf("Die größte Zahl ist %d\n", max);
                    break;
                }
            }

            break;
        case 5:
            printf("Gib eine Zahl ein: ");
            int numLines = 0;
            scanf("%d", &numLines);

            for(int i = 0; i < numLines; i++){
                for(int j = 0; j <= i; j++){
                    printf("X");
                }
                printf("\n");
            }
            break;
        }
    }
   return 0;
}
