#include<stdio.h>

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// I have confusion in this program-------------

// int main()
// {
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=i;j<5;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }