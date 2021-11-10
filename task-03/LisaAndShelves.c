#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int flag=0;
   long number,i;
    scanf("%ld",&number);

        for (i=1;i*i<number;i++){
       if(number%i==0)
           flag+=1;
        }
        if (i*i==number)  
        printf("%d",2*flag+1);
        else
        printf("%d",2*flag);
    

    return 0;
}
