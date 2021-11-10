#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int deve,probs,min=150,k,total=0;
    scanf("%d%d",&deve,&probs);
    int powDeve[deve],powProbs[probs],sum[deve];
    for (int i=0;i<deve;i++){
        scanf("%d",&powDeve[i]);
    }
        for (int i=0;i<probs;i++){
        scanf("%d",&powProbs[i]);
    }

    int maxDeve=powDeve[0];
    for(int i=1;i<deve;i++){
        if(powDeve[i]>maxDeve)
            maxDeve=powDeve[i];
    }
    int maxProbs=powProbs[0];
    for(int i=1;i<probs;i++){
        if(powProbs[i]>maxProbs)
            maxProbs=powProbs[i];
    }

    if(maxDeve>=maxProbs || deve>probs)
        printf("NO");
    else{
    for(k=0;k<deve;k++){
        min=150;
        for(int j=0;j<probs;j++){
            if(powProbs[j]-powDeve[k]>0 && powProbs[j]-powDeve[k]< min)
            min = powProbs[j]-powDeve[k];
        }
        
        if(min!=150){
        sum[k]=min+powDeve[k];
        for (int i = 0; i < probs; i++){
        if (powProbs[i] == min+powDeve[k]){ 
            powProbs[i]=0; 
            break;
        }     
        } 
        } 
        else{
            printf("NO");
            break;
        }
                
          
    }

    if(min!=150){
    for(int i = 0; i < deve; i++)
        total = total + sum[i]; 
    printf("YES");    
    printf("\n%d",total);
    }}
}

