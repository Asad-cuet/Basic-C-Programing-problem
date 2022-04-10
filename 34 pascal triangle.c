#include <stdio.h>
int main() {
   int r,s,i,j, num=1;
   printf("Input Row number=");
   scanf("%d",&r);
   for (i=0;i<r;i++)
   {
      for (s=1;s<=r-i;s++)
      {
         printf("  ");
      }

      for (j=0;j<=i;j++)
      {
         if (j==0 || i==0)
         {
             num=1;
         }

         else
         {
            num=(num*(i-j+1))/j;

         }
       printf("%4d",num);
      }
      printf("\n");
   }
   return 0;
}

