#include <stdio.h>

int ceiling(double num) {
    int intPart = (int)num;  
    if (num > intPart)     
        return intPart + 1;
    else
        return intPart;     
}

int floor(double num) {
    int intPart = (int)num; 
    if (num < intPart)      
        return intPart - 1;    
    else
        return intPart;     
}

int main() {

    double num;
    printf("Enter a real number: ");
    scanf("%lf", &num);

    printf("Ceiling: %d\n", ceiling(num));
    printf("Floor: %d\n", floor(num));

    return 0;
}

