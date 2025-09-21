#include<stdio.h>
#include<string.h>

int main()
{
    int n,x=0;
    char inp[10];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",inp);
        if(strcmp(inp,"++X")==0||strcmp(inp,"X++")==0)
        {
        x+=1;
        }
        else
        {
        x-=1;
        }
    }
    printf("%d",x);

    return 0;
}
