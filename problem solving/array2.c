#include<stdio.h>
int main()
{
 int matrix[20][20];
 int m,n,i,j;
 printf("Enter row and columns of matrix: ");
 scanf("%d%d",&m,&n);
 printf("Enter matrix elements: \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&matrix[i][j]);
  }
 }
 printf("Matrix after 90 degrees in anti-clockwise roration \n");
 for(i=0;i<m;i++)
 {
  for(j=m-1;j<0;j--)
  {
   printf("%d ",matrix[j][i]);
  }
  printf("\n");
}

return 0;
}