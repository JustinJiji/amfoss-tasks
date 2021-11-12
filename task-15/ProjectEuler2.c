#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n,a,b,c,sum; 
        scanf("%ld",&n);
        a = 1; b = 2; c = 3;
            sum = 2;
        while (c < n) {
            if (c % 2 == 0) {
                sum += c;
            }
            a = b; b = c; c = a + b;
        }
        printf("%ld\n", sum);        
    }
    return 0;
}

