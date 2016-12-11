#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int a, p, n = 20;
    srand(time(NULL));
    a = rand();
    while(n!=0)
    {
        scanf("%d", &p);
        if (a>p)
        {
            printf("more\n");
        }
        else if(a<p){
            printf("less\n");}
        if(a==p){
            printf("great\n");
        }
        n-=1;
    }
    if(n==0){
        printf("You lose.Try again\n")
    }

    return 0;
}
