#include <stdio.h>
#include <conio.h>
#include <math.h>

//convert binary to hexadecimal

int main(){
    long int binary,hexadecimal=0,i=0;
    printf("binary : ");
    scanf("%ld",&binary);
    while(binary>0){
        int num=binary%10;
        hexadecimal+=num*pow(2,i);
        i++;
        binary/=10;
    }
    printf("hexadecimal : %lX",hexadecimal);
    getch();
    return 0;
}