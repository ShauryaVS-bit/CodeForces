#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    scanf("%s",arr);

    pass:
    {
    for(int i=2;i<=strlen(arr);i+=2)

    {
        if(arr[i]<arr[(i-2)])
        {
            char p= arr[i-2];
            arr[i-2]=arr[i];
            arr[i]=p;
            goto pass;
        }
        
    }
}
    printf("%s",arr);
    return 0;
}