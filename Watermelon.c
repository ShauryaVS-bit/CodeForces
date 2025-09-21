#include <stdio.h>
void main()
{
    int w;
    printf("What is the Weight of Watermelon ?\n");
    scanf("%d",&w);

    if(w==2)
    printf("NO");

    else if(w%2)
    printf("No");

    else
    printf("Yes");
}