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
     printf("Введите единицы измерения температуры\n");
     printf("C - Цельсий\n");
     printf("F - Фаренгейт\n");
     printf("K - Кельвин\n");
     s = getchar();
     printf("Введите значение температуры\n");
     scanf("%f", &v);
     switch (s) {
         case k:
         {
             printf("Градусы по Цельсию: %f\n", C(k, v));
             printf("Градусы по Фаренгейту: %f\n", F(k, v));
             break;
         }
         case c:
         {
             printf("Градусы по Кельвину: %f\n", K(c, v));
             printf("Градусы по Фаренгейту: %f\n", F(c, v));
             break;
         }
         case f:
         {
             printf("Градусы по Цельсию: %f\n", C(f, v));
             printf("Градусы по Кельвину: %f\n",K(f, v));
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