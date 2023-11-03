#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 0...1000
long int calc_e(char order){
    double e = 0;
    long int k = 0;
    if(order == 1){
        while(e < 2.7){
            e = pow((1.0 + 1.0 / (double)k), (double)k);
            k++;
        }
    }
    if(order == 2){
        while(e < 2.71){
            e = pow((1.0 + 1.0 / (double)k), (double)k);
            k++;
        }
    }
    if(order == 3){
        while(e < 2.718){
            e = pow((1.0 + 1.0 / (double)k), (double)k);
            k++;
        }
    }
    if(order == 4){
        while(e < 2.7182){
            e = pow((1.0 + 1.0 / (double)k), (double)k);
            k++;
        }
    }
    if(order == 5){
        while(e < 2.71828){
            e = pow((1.0 + 1.0 / (double)k), (double)k);
            k++;
        }
    }
    return k;
}
void main() {
    char k = 1;
    printf("%ld", calc_e(k));
}