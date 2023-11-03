#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
    setlocale(LC_ALL, "Rus");
    int num, sum = 0, c, left, right, d = 0;
    // scanf("%d %d", &left, &right);
    /*
    while (num > 0) //Цикл с предусловием
    {
        c = num % 10;
        sum += c;
        num = num / 10;
    }
    printf("%d", sum);
    */



    /*
    do //Цикл с постусловием
    {
        scanf("%d", &num);
        if (num < left) printf("Value should be more then left border\n");
        if (num > right) printf("Value should be more then right border\n");
    } while (num < left || num > right);
    
    printf("Correct value = %d \n", num);
    */



   for (; d < 100;)
   {
    sum += d;
    d++;
   }
   printf("%d", sum);
}