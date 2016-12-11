#include <stdio.h>
#include <tchar.h>
main()
{
	char a,b;
	int f=1;
	a=getchar();
	b=getchar();
	if(a == '0' && b == 'x'){
		while(f){
		    b=getchar();
			if(b=='\n')
				break;
			if (b >= '0' && b <= '9' || b >= 'a' && b <= 'f' ||b >= 'A' && b <= 'F')
				f=1;
			else
				f=0;
		}
	}
	else
		f=0;
    if(f==1)
		printf("It's hex\n");
	else
		printf("It's not hex\n");
	return 0;
}