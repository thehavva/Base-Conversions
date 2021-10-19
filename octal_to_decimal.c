#include <stdio.h>
#include <conio.h>
#include <math.h>

//convert octal to decimal

int main(){
    long int octal;
    int decimal=0,i=0;
    printf("octal : ");
    scanf("%ld",&octal);
    while(octal>0){
        int num=octal%10;
        decimal+=num*pow(8,i);
        i++;
        octal/=10;
    }
    printf("decimal : %d",decimal);
    getch();
    return 0;
}