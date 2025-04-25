#include<stdio.h>
void main(){
    // factorials are not defined for negative numbers
    int num;
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    }while(num < 0);

    int factorial;
    for(int i=1; i<=num; i++)
        factorial *= i;
    printf("Factorial of %d = %d\n", num, factorial);
}