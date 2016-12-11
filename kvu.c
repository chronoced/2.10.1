#include <stdio.h>
#include <math.h>
int main(){

    float a,b,c;
    
	printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
	if(a == 0){
        
		if(b == 0){

            if(c == 0){

                printf("x - luboy");
            
			}
			else{

                printf("kornei net");
            
			}
        }
        else{

            printf ("x = %g", -c/b);
        
		}
    }
    else
    {
        float d;
        d = b * b - 4 * a * c;
        if(d < 0)
        {
            printf("kornei net");
        }
        else
        {
            if(d == 0)
            {
                printf("x1= %g", -b/(2*a));
            }
            else
            {
                printf("x2= %g, x2= %g",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
            }
        }
    }
    return 0;
}