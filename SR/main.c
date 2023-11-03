#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
// 0...1000
void main() {
    int x, y, n;
    scanf("%d %d", &x, &y);
    while(1 != 0){
        
        if (x > 0 && x < 1000 && y > 0 && y < 1000){
            while (1 != 0)
            {
            if (x % y == 0){
            printf("%d", n);
            break; 
            } 
            n = x % y;
            x = y;
            y = n;
            }
        break;    
            
    }else scanf("%d %d", &x, &y);
        }
        
    
}