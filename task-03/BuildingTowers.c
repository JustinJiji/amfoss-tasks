#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, flag ,n,x,count=0;
    scanf("%d",&n);
    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    
            for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    x =  a[i];
                    a[i] = a[j];
                    a[j] = x;
 
                }
 
            }
 
        }
        
        int distinctCount=0;
        
             for (int i = 0; i < n; i++)  {
       
               while (i < n - 1 && a[i] == a[i + 1])
             {
              i++;
             }
                 distinctCount++;   
         }

    for(i = 0; i < n; i++)
    {
       flag=1;
         for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                flag++;
            }
        }
    
       if(count<flag)
       count=flag;
       
    }

    printf("%d %d", count,distinctCount);
   return 0;
}
