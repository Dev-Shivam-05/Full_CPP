#include<stdio.h>
int main(){
    int n1 = 2 ,n2=3, n3 = 7;
    
    (n1 < n2 && n1 < n3) ?printf("%d",n1) : (n2<n3) ? printf("%d",n2) : printf("%d",n3);
    return 0;
}
