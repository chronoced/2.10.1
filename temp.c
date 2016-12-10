#define c 'C';
#define k 'K';
#define f 'F';
#define z 273
#include <stdio.h>

 float C(char fr, float v){
     if (fr == k)
         return v - z;
     if (fr == f)
         return (v - 32) / 1.8;
     return 0;
 }
 
 float K(char fr, float v)
 {
     if (fr == c)
         return v + z;
     if (fr == f)
         return K(c, C(f, v));
     return 0;
 }
 
 float F(char fr, float v)
 {
     if (fr == c)
         return (v * 1.8) + 32;
     if (fr == k)
         return F(c, C(k, v));
    return 0;
 }
 
 int main(int argc, const char * argv[]) {
     char s;
     float v;
     printf("������� ������� ��������� �����������\n");
     printf("C - �������\n");
     printf("F - ���������\n");
     printf("K - �������\n");
     s = getchar();
     printf("������� �������� �����������\n");
     scanf("%f", &v);
     switch (s) {
         case k:
         {
             printf("������� �� �������: %f\n", C(k, v));
             printf("������� �� ����������: %f\n", F(k, v));
             break;
         }
         case c:
         {
             printf("������� �� ��������: %f\n", K(c, v));
             printf("������� �� ����������: %f\n", F(c, v));
             break;
         }
         case f:
         {
             printf("������� �� �������: %f\n", C(f, v));
             printf("������� �� ��������: %f\n",K(f, v));
             break;
         }
         default:
         {
             printf("Rong scale\n");
             break;
         }
     }
     return 0;
 }