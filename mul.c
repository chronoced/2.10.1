#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{  
	int n1, m1, n2, m2;
    int i, j, k;

    printf("Введите количество строк и столбцов 1-ой матрицы\n");
    scanf("%d %d", &n1, &m1);
    printf("Введите количество строк и столбцов 2-ой матрицы\n");
    scanf("%d %d", &n2, &m2);
    
	if (m1 != n2){
        printf("Матрицы нельзя уможить\n");
        return 0;
    }

    float **A = (float**)malloc(n1 * sizeof(float*));
    float **B = (float**)malloc(n2 * sizeof(float*));
    float **C = (float**)malloc(n1 * sizeof(float*));
    for (i = 0; i < n1; i++)
    {
        A[i] = (float*)malloc(m1 * sizeof(float));
        C[i] = (float*)malloc(m2 * sizeof(float));
    }
    for (i = 0; i < n2; i++)
        B[i] = (float*)malloc(m2 * sizeof(float));
    
	printf("Enter first matrix\n");
    
	for (i = 0; i < n1; i++){
        for (j = 0; j < m1; j++){

            scanf("%f", &A[i][j]);
        
		}
	}
    printf("Enter second matrix\n");
    for (i = 0; i < n2; i++){
        for (j = 0; j < m2; j++){

            scanf("%f", &B[i][j]);
        
		}
	}
    //Умножение матриц
    for(i = 0; i < n1; i++)
        for(j = 0; j < m2; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < m1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("\n Result \n");
    for (i = 0; i < n1; i++){

        for (j = 0; j < m2; j++){

            printf("%f ", C[i][j]);
		}
		
		printf("\n");
    }
    
    for (i = 0; i < n1; i++){
    
		free(A[i]);
        free(C[i]);
    
	}

    for (i = 0; i < n2; i++)
        free(B[i]);
    
	free(A);
    free(B);
    free(C);
    
    return 0;
}