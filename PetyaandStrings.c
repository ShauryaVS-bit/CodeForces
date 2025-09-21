#include<stdio.h>
#include <string.h>
int main()
{
    char arr1[100];
    char arr2[100];
    int out=0;

    scanf("%s",arr1);
    scanf("%s",arr2);



    for (int i=0;i<strlen(arr1);i++)
    {

        int p=arr1[i];
        int q=arr2[i];
        if(p>=97)
        p=p-32;
        if(q>=97)
        q=q-32;

        if(p<q)
        {
            out= -1;
            break;
        }
        else if(p>q)
        {
            out= 1;
            break;
        }
    }

    printf("%d",out);
return 0;
}