#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    //printf("Enter the Number of words to be entered :\n");
    scanf("%d",&n);
    char word[n][101];
    for(int i=1;i<=n;i++)
    //printf("Enter the %dst word :\n",i);
    scanf("%s",word);//no need of & with array in C weitten by me to make me understand ','

    for(int i=0;i<n;i++)
    {
        int l= strlen(word[i]);

        if(l<10)
        {
        printf("%s\n",word);
        }
        else
        {
            printf("%c%d%c\n",word[i][0], l - 2, word[i][l - 1]);
        }
    }
    return 0;
}