int main()
{
    int i=0,j=0;
    for(i=1;i<=15;i++)
    {
        for(j=1;j<=15;j++)
        {
            if(j>=15-i+1)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
