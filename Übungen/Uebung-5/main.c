#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define PI 3.141592653589
#define EPS 1e-6

float factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial(n - 1);
    }
}

float power(float x, float y) {
    float result = 1.0;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

float sine(float x) {
    float result = 0.0;

    for (int n = 0;; n++) {
        int sign = (n % 2 == 0) ? 1: -1;

        float term = power(x, 2 * n + 1) / factorial(2 * n + 1);
        if (term < EPS) {
            break;
        }
        result += sign * term;
    }

    return result;
}

float cosine(float x) {
    return sine(x + (PI/2));
}

float exponential(float x) {
    float result = 0.0;

    for (int n = 0;; n++) {
        float term = power(x, n) / factorial(n);
        if (term < EPS) {
            break;
        }
        result += term;
    }
    return result;
}


int gewinn (int a, int b, int c){
    if (a == b && b == c){
        return 20;
    }else if (a == b || b == c || c == a){
        return 10;
    }else{
        return 0;
    }
}

int runde10(int n){
    int rest = n % 10;

    if (rest >= 5){
        return n + (10 -rest);
    } else {
        return n - rest;
    }
}

int rundeSumme(int a, int b, int c){
    return runde10(a) + runde10(b) + runde10(c);
}

int main()
{
    int task;

    while(1){
        printf("Wähle eine Aufgabe, um sie auszuführen: \n");
        printf(" A: 1 \n");
        printf(" B: 2 \n");
        printf("(C: 3) \n");
        printf(" D: 4 \n");
        scanf("%d", &task);

        int a, b, c;

        switch(task){
        case 1:
            printf("-----A-----\n");
            printf("Gib jeweils einen Wert für a, b und c ein: \n");

            scanf("%d %d %d", &a, &b, &c);
            printf("%d",gewinn(a, b, c));
            break;
        case 2:
            printf("-----B-----\n");
            printf("Gib jeweils einen Wert für a, b und c ein : \n");
            scanf("%d %d %d", &a, &b, &c);
            printf("%d",rundeSumme(a, b, c));
            break;
        case 3:
            printf("-----Zusatzaufgabe-----\n");
            break;
        case 4:
            printf("-----D-----\n");

            float x, y;

            printf("Gib einen Wert für x ein:");
            scanf("%f", &x);
            printf("Gib einen Wert für y ein:");
            scanf("%f", &y);
            printf("Sinus von %.2f Grad: %.6f\n", x, sine(x));
            printf("Kosinus von %.2f Grad: %.6f\n", x, cosine(x));
            printf("Exponential von %.2f: %.6f\n", x, exponential(x));
            printf("%.2f hoch %.2f: %.6f\n", x, y, power(x, y));

            return 0;
            break;
        }
        break;
    }
    return 0;
}

