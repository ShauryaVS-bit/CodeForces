#include<stdio.h>
int main()
{
    int p,q;
    int matrix[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1)
            {
                p=i;
                q=j;
            }
        }
    }
    p=2-p;
    if(p<0)
    p=p*(-1);
    q=2-q;
    if(q<0)
    q=q*(-1);

    printf("%d",q+p);

return 0;
}