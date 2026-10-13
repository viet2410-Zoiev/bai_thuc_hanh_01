#include <stdio.h>
#include <math.h>
int main (){
    int n;
    scanf("%d", &n);
    if (n<2){
        printf("%d không phải số nguyên tố", n);
        return 0;
    }
    for (int i=2; i<sqrt(n);i++){
        if (n%i==0){
            printf("%d không phải số nguyên tố", n);
            return 0;
        }
    }
    printf("%d là số nguyên tố", n);
}