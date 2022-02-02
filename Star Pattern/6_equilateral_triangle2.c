#include<stdio.h>

// Using flag variable---------------------------
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         k=1;
//         for(j=1;j<=9;j++)
//         {
//             if(j>=6-i && j<=4+i && k)
//             {
//                 printf("*");
//                 k=0;
//             }
//             else
//             {
//                 printf(" ");
//                 k=1;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//-----------------method-2---------------------
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=9;j++)
//         {
//             if(j>=6-i && j<=4+i)
//             {
//                 if(i%2==0)
//                     if(j%2!=0)
//                         printf(" ");
//                     else
//                         printf("*");
//                 else
//                     if(j%2!=0)
//                         printf("*");
//                     else
//                         printf(" ");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//--------------Aiternative Method-------------------------
int main()
{
    int i=0,j=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
