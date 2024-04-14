// Factorial Question

#include <stdio.h>

int main(){
    int (num);

    printf("enter a number");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        return (1);
    } else {
        for ( int i = 1;  i <= num ; ++i)
        {
         num *= i;
        };
        
        printf("factorial is %d" , num);
    }
     
    return 0;

};