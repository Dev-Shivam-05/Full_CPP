#include<stdio.h>

int main() {
    int t=5;
    for (int i = 1; i<=5; i++) {
        for(int k=1;k<=5-i; k++){
            printf("  ");
        }
        for(int j= 5;j>=6-i; j--){
            printf("%d ",t);
        }
        printf("\n");
        t--;
    }
    return 0;
}
