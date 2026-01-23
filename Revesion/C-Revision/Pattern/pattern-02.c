#include<stdio.h>

int main() {
    for(int i = 1; i<=5; i++){
        for(int k=1; k<=5-i; k++) {
            printf("  ");
        }
        for(int j=6-i; j<= 5; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
