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
        scanf("%d",&n);
        int max=0;
        for(int i=100;i<1000;i++)
        {
            for(int j=100;j<1000;j++)
            {
                int rev=0,rem=0,k=0;
                k=i*j;
                while(k>0)
                {
                    rem=k%10;
                    rev=rev*10+rem;
                    k/=10;
                }       
                if(i*j<n && rev==i*j)
                {                    
                    if(max<i*j)
                    max=i*j;
                }
                else if(i*j>=n)
                {
                    break;
                }
            }
        }
        printf("%d\n",max);        
    }
    return 0;
}
