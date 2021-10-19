#include <stdio.h>
#include <conio.h>

//convert decimal to octal
int main(){
    int decimal,octal[8],i,j;
    printf("decimal : ");
    scanf("%d",&decimal);
    i=0;
    while(decimal>0){
        octal[i]=decimal%8;
        decimal/=8;
        i++;
    }
    printf("octal : ");
    for(j=i-1; j>=0; j--){
        printf("%d",octal[j]);
    }
    getch();
    return 0;
}