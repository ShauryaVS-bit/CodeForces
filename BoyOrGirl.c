#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    int sum=0;
    
    for (int i=0;i<strlen(arr);i++)
    {
        for(int j=i+1;j<strlen(arr);j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]='0';
            }
        }
    }

    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]!='0')
        {
            sum+=1;
        }
    }
    if(sum%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
