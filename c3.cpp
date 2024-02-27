#include<stdio.h>
int main()
{
int x[2][3]={{1,2,3},{4,5,6}};
for(int i=0;i<2;i++)
{
for(int j=2;j>=0;j--)
{
printf("%d\t",x[i][j]);
}
printf("\n");
}
return 0;
}