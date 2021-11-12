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
        int n,count = 0;
        bool check = false; 
        scanf("%d",&n);
        
        while(!check)
        {
            count++;
            for(int i = 1; i <= n; i++)
            {
                if(count%i == 0)
                    check = true;
                else
                    check = false;               
                if(check == false)
                    break;
            }
        }
        printf("%d\n",count);        
    }
    return 0;
}
