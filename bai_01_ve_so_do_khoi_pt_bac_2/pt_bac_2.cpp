#include <stdio.h>
#include <math.h>
int main (){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a==0){
		if (b==0){
			if (c==0){
				printf("VSN");
			}
			else{
				printf("VN");
			}
		}
		else printf(" x = %d", -c/b);
	}
	else{
		int delta;
		delta=b*b-4*a*c;
		if (delta<0){
			printf("VN");
		}
		else if (delta==0){
			printf("x1 = x2 = %d", -b/(2*a));
		}
		else{
			printf("x1 = %d\n", (-b+sqrt(delta))/(2*a));
			printf("x2 = %d", (-b-sqrt(delta))/(2*a));
		}
	}
}
