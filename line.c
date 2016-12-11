#include<stdio.h>
int ctoi(char c){
	return (int)c-48;
}
int main(){
	char g;
	int h=0;
	g = getchar(); 
	while(g!='\n'){
		if(g>='0' && g<='9'){
			h=h*10+ctoi(g);
		}
		g = getchar();
	}
	printf("%d", h);
return 0;
}