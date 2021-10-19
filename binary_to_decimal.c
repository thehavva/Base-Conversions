#include <stdio.h>
#include <conio.h>
#include <math.h>

//convert binary to decimal.

int main(){
    long int binary;
    int sum=0,i=0,num;
    printf("binary: ");
    scanf("%ld",&binary);
    while(binary>0){
        num=binary%10;
        sum+=num*pow(2,i);
        binary/=10;
        i++;
    }
    printf("decimal : %d",sum);
    getch();
    return 0;
}