#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for(int k = 0; k <= n-i-1; k++){
            printf(" ");
        }
        int value = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", value);
            value = value * (i - j) / (j + 1); 
        }
        printf("\n");
    }

    return 0;
}