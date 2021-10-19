#include <stdio.h>
#include <conio.h>

//convert decimal to binary
int main(){
    int decimal,binary[10],i,j;
    printf("decimal : ");
    scanf("%d",&decimal);
    i=0;
    while(decimal>0){
        binary[i]=decimal%2;
        decimal/=2;
        i++;
    }
    printf("Binary : ");
    for(j=i-1; j>=0; j--){
        printf("%d",binary[j]);
    }
    getch();
    return 0;
}