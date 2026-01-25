#include<stdio.h>

int main(){
    int n =5,i=1;
    
    do{
        if(i%2 == 0){
            printf("%d ",i);
        }
        i++;
    }while(i <= n);
        
    return 0;
    
}
