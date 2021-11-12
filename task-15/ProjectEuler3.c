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
        long n; 
        scanf("%ld",&n);
        long long div = 2LL;
        
        while(div<=floor(sqrt(n))){
            if(n%div==0LL){
                n  /= div;
            }else{
                div++;
            }
        }
        
        printf("%ld\n",n);      
    }
    return 0;
}
