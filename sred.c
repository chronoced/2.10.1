#include <stdio.h>

int main(void) {
    float a[256];
    int i;
	int j = 0;
    float av = 0;
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] > 0)
        {
			j+=1;
             av += a[i];
        }
    }
    if (j)
        av/=n;
    printf("Среднее арифметическое положительных чисел %f\n", av);
    return 0;
}