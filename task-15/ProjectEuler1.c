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
        int n;
        long long int mult_3,mult_5,mult_15,sum_3,sum_5,sum_15; 
        scanf("%d",&n);
        mult_3=(n-1)/3;
        mult_5=(n-1)/5;
        mult_15=(n-1)/15;

        sum_3=3*(mult_3*(mult_3+1)/2);
        sum_5=5*(mult_5*(mult_5+1)/2);
        sum_15=15*(mult_15*(mult_15+1)/2);
        
        printf("%lld\n",sum_3+sum_5-sum_15);
    }
    return 0;
}

