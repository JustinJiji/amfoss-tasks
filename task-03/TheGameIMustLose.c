#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int girlNumber, maxLimit,num,count=0;
    scanf("%d%d", &girlNumber,&maxLimit);
    int numbers[maxLimit],j=0;
    
    if (girlNumber%2==1)
        printf("0");
    else{
        while(girlNumber%2==0){
            girlNumber=girlNumber/2;
            count++;
        }
        
        for(int i=1;i<=maxLimit;i++){
            int k=i;
            num=0;
            if(k%2==1){
                numbers[j]=i;
                j++;
            }
            else{   
                while(k%2==0){
                    k/=2;
                    num++;
                }

                if(count>num){
                numbers[j]=i;
                j++;
                }
            }    
        }
        printf("%d\n",j);
        for(int i=0;i<j;i++){
            printf("%d ",numbers[i]);
        }
    }    
    
}
