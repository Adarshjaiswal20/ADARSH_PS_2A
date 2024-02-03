#include<stdio.h>
int main() {
   int size = 3;
   int matrix[3][3]; 
   int i, j= 0;
   int sum, sum1, sum2;
   int flag = 0;
   printf("\nEnter matrix : ");
   for (i= 0; i < size; i++) {
      for (j = 0;j < size; j++)
         scanf("%d", &matrix[i][j]);
   }
   printf("Enter matrix is : \n");
   for (i = 0; i < size; i++) {
      printf("\n");
      for (j= 0; j< size; j++) {
         printf("\t%d", matrix[i][j]);
      }
   }
   //For diagonal elements
   sum = 0;
   for (i= 0; i < size; i++) {
      for (j= 0; j< size; j++) {
         if (i == j)
            sum = sum + matrix[i][j];
      }
   }
  //For Rows
   for (i = 0; i< size; i++) {
      sum1 = 0;
      for (j= 0; j < size; j++) {
         sum1 = sum1 + matrix[i][j];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
   //For Columns
   for (i = 0; i< size; i++) {
      sum2 = 0;
      for (j = 0; j < size; j++) {
         sum2 = sum2 + matrix[j][i];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
   if (flag == 1)
      printf("\nMagic square");
   else
      printf("\nNo Magic square");
   return 0;
}
