#include <stdio.h>
#include <conio.h>

//convert decimal to hexadecimal

int main(){
    int decimal,hexadecimal[16],i=0,j;
    printf("decimal : ");
    scanf("%d",&decimal);
    while(decimal>0){
        hexadecimal[i]=decimal%16;
        decimal/=16;
        i++;
    }
    printf("hexadecimal : ");
    for(j=i-1; j>=0; j--){
        printf("%d",hexadecimal[j]);
    }
    getch();
    return 0;
}