#include<stdio.h>

int main (){
    int n;
    printf("Enter sequence of fibonnaci series : ");
    scanf("%d",&n);
    int a = 0,b=1;
    for(int i=0; i<n; i++) {
        printf("%d ",a);
        int temp = a +b;
        a = b;
        b=temp;
    }  
    return 0;
}
     
