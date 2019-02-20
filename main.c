#include <stdio.h>

int main()
{
    int int1,int2,remainder;

    printf("Enter the first positive integer\n");
    scanf("%i",&int1);
    printf("Enter the second positive integer\n");
    scanf("%i",&int2);
    if(int1<0 || int2<0){
         printf("invalid inputs\n");
    }
    else if(int1>int2){
            printf("integer 1 is greater\n");
        remainder=int1%int2;
        if(remainder!=0){
             printf("Not a perfect division\n");
        }else if(remainder==0){
         printf("Perfect division\n");
         }
    }else if (int2>int1){
        printf("integer 2 is greater\n");
         remainder=int2%int1;
        if(remainder!=0){
             printf("Not a perfect division\n");
        }else if(remainder==0){
         printf("Perfect division\n");
    }

    return 0;
}
}
