#include<stdio.h>
int main(){
    //declaration are 
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int mul[2][2];
    int i,j,k;
    // multiplicztion area
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            mul[i][j] = 0;
            for(k = 0; k < 2; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
//result area 
    printf("Product of the two matrices is:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}