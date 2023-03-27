#include <stdio.h> //введення бібліотек
#include <locale.h>
#include <math.h>
 int main() {
    float a=4 ,b=-2,c=20;
    float y=((a*b*c)/(a+b+c))-((a-b-c)/(a*b*c));//введення змінних
    printf("Обчислення=%.2f \n", y); //виведення обчислення з формули
   return 0;
     }
