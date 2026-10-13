#include <stdio.h>
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    int x=a, y=b;
    int temp=0, bscnn=0, uscln=0; 
    while (y!=0){
        temp=x%y;
        x=y;
        uscln=x;
        y=temp; 
    }
    bscnn=(a*b)/uscln;
    printf("Boi so chung nho nhat la %d", bscnn);
}