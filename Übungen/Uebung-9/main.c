#include <stdio.h>

//Aufgabe A
int ackermann(int n, int m){
    if (n == 0) {
        return m + 1;
    } else if (m == 0) {
        return ackermann(n - 1, 1);
    } else {
        return ackermann(n - 1, ackermann(n, m - 1));
    }
}

//Aufgabe B
int triangle(int rows){
    if(rows == 0){
        return 0;
    }else{
        return rows + triangle(rows - 1);
    }
}

//Aufgabe C
int power(int b, int n){
    if (n == 0){
        return 1;
    }else if (b == 0){
        return 0;
    }
    return b * power(b, n - 1);
}

//Aufgabe D
int bunnyEars(int numBunnies){
    if(numBunnies == 0){
        return 0;
    }else if(numBunnies % 2 == 1){
        return 2 + bunnyEars(numBunnies - 1);
    }else{
        return 3 + bunnyEars(numBunnies - 1);
    }
}

int main()
{
    int isRunning = 1;
    int task;
    int result = ackermann(0, 1);
    int resultTriangle = triangle(5);
    int rowNumber = 5;
    int resultPower = power(3, 2);
    int resultBunnyEars = bunnyEars(2);

    while(isRunning){
        printf("############################\n\n");
        printf("Wähle eine Aufgabe, um sie auszuführen: \n");
        printf("1: Aufgabe A\n");
        printf("2: Aufgabe B\n");
        printf("3: Aufgabe C\n");
        printf("4: Aufgabe D\n");
        printf("0: Beenden\n");

        printf("input: ");
        scanf("%d", &task);

        printf("\n");

        switch (task) {
        case 0:
            isRunning = 0;
            break;
        case 1:
            printf("ackermann(0, 1) = %d\n\n", result);
            printf("############################\n");
            break;
        case 2:
            printf("Numer of Stars: %d\n\n", resultTriangle);
            printf("############################\n");
            break;
        case 3:
            printf("Power of used numbers: %d \n\n", resultPower);
            printf("############################\n");
            break;
        case 4:
            printf("Number of bunny ears: %d \n\n", resultBunnyEars);
            printf("############################\n");
            break;
        default:
            return -1;
        }
    }
    return 0;
}

