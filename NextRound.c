#include<stdio.h>
int main()
{
    int n,k,num=0;
    scanf("%d %d",&n,&k);
    int data[50];

    for(int i=0;i<n;i++)
    {
      scanf("%d",&data[i]);
    }

    k=data[k-1];

    for(int j=0;j<n;j++)
    {
        if(data[j]>=k&&data[j]>0)
        {
            num+=1;
        }
    }

    printf("%d",num);
    return 0;

}