#include <stdio.h>
float calculateBill(int units) {
    float totalBill;

    if (units <= 50) {
        totalBill = units * 0.50;
    } 
    else if (units <= 150) {
        totalBill = 25 + (units - 50) * 0.75;
    } 
    else if (units <= 250) {
        totalBill = 100 + (units - 150) * 1.20;
    } 
    else {
        totalBill = 220 + (units - 250) * 1.50;
    }

    return totalBill;
}

int main() {
    int units;
    printf("Enter the total units consumed: ");
    scanf("%d", &units);

    float bill = calculateBill(units);

    printf("Electricity Bill: %.2f\n", bill);

    return 0;
}

