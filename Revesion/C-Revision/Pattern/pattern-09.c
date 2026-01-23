// A 
// B A 
// C B A 
// D C B A 
// E D C B A 

#include<stdio.h>
int main(){
    // char ab = 'A';
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j >= 'A'; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    
    return 0;
}