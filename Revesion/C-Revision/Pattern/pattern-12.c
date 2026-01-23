//         5 
//       4 5 4 
//     3 4 5 3 4 
//   2 3 4 5 2 3 4 
// 1 2 3 4 5 1 2 3 4 


#include<stdio.h>

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for(int k = 5-i; k >= 1; k--){
            printf("  ");
        }
        for (int j = 6-i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        for (int j = 6-i; j <= 4; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}