#include<stdio.h>
int main(void){
	float a,c=1;
	int b,i = 0;
	scanf("%f",&a);
	scanf("%d",&b);
	for(i = 0; i < b; i++){
		c*=a;
	}
	printf("%f", c);
}