#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//definitions
#define N 10
#define M 200

int x, y;

int automat[M];


//functions
bool firstLast7(int arr[], int n){
    if(arr[0] == 7 || arr[n-1] == 7){
        return true;
    }else {
        return false;
    }
}

int countEvens(int f[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
        if(f[i] % 2 == 0 && i > 0)
            count++;
    return count;
}

void buildArray(int array[], int n){
    //horizontale Felder
    srand(time(NULL));
    for(int i = 0; i < n; i++ ){
        array[i] = rand() % 2;
    }
}

void printArray(int array[], int n){
    for(int i = 0; i < n; i++){
        if(array[i] == 0){
            printf(" ");
        }else{
            printf("█");
        }
    }
    printf("\n");
}

void switchArrayValues(int array[], int tmpArray[], int n){
    for(int i = 0; i < n; i++){
        array[i] = tmpArray[i];
    }
}

void simulateAutomat(int array[], int n, int repetitions){
    for(int i = 0; i < repetitions; i++){
        int tmpArray[n];
        for(int j = 0; j < n; j++){

   int neighborSum = array[(j-2+n)%n] + array[(j-1+n)%n] + array[j] + array[(j+1+n)%n] + array[(j+2+n)%n];
            if(neighborSum == 2 || neighborSum == 4){
                tmpArray[j] = 1;
            }else{
                tmpArray[j] = 0;
            }
        }
        switchArrayValues(automat, tmpArray, n);
        printArray(automat, n);
    }
}


//main
int main()
{
    int task;

    while(1){
        printf("Wähle eine Aufgabe, um sie auszuführen: \n");
        printf("A : 1\n");
        printf("B : 2\n");
        printf("C : 3\n");
        printf("D : 4\n");
        printf("E : 5\n");
        scanf("%d", &task);

        switch(task){
        case 1:
            printf("7 an erster oder letzter Stelle\n");
            int array[N]= {0,1,2,5,7,9,2,5,8,7};
            bool answer = firstLast7(array, N);
            if (answer == true){
                printf("Da is ne 7 drin!\n");
            }else
                printf("Nö, da ist keine 7.\n");
            break;
        case 2:
            //erstellt ein Array zwischen 5 und 10; zählt nicht die 0 mit
            for (int length = 5; length <= 10; length += 2) {
                int array[length];

                int evenCount = countEvens(array, length);
                printf("Anzahl gerader Zahlen im Feld: %d\n", evenCount);
             }
            break;
        case 3:
            printf("Zusatzaufgabe\n");

            break;
        case 4:
            printf("Zusatzaufgabe\n");

            break;
        case 5:
            printf("Zellulärer Automat: Modell Universum\n");
            buildArray(automat, M);
            printArray(automat, M);
            simulateAutomat(automat, M, 200);
            break;
        }
    }
    return 0;
}
