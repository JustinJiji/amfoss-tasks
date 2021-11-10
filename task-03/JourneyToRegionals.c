#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numCity,queries,sum;
    scanf("%d",&numCity);
    
    int spend[numCity];
    for (int i=0;i<numCity;i++){
        scanf("%d",&spend[i]);
    }
    scanf("%d",&queries);    
    for(int i=0;i<queries;i++){
        int a=0,b=0;
        scanf("%d",&a);
        scanf("%d",&b);
        int j=a-1;
        sum=0;
        while(j>=(a-1) && j<b){
        sum+=spend[j];
           j++;
        } 
        printf("%d\n",sum);
    }
    return 0;
}
 
