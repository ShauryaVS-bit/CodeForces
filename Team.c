#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n][3];
    
    for(int i=0;i<n;i++)//Takes the user input and assigns it to the array
    {
        for(int j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    }
    
    for(int i=0;i<n;i++)//goes through each row and each element of the row to add 1 to yess 
    {
        int yes=0;
        for(int j=0;j<3;j++)
        {
        yes=yes+arr[i][j];
        }
        if(yes>=2)//if at the end of one row , if yes os >=2 then the problem is solved
        sum+=1;   // and the count of solutions should increment by 1
    }
    printf("%d",sum);//outputs the total of sum added
    
    return 0;

}