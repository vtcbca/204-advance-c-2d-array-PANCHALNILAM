/*wap to enter two three by three matrix and print sum*/
#include<stdio.h>
int main()
{
   int m1[3][3],m2[3][3],m3[3][3];
   int i,j;
   //logic:input value into two d array
   printf("ENTER THE 1ST MATRIX");
   for(i=0;i<3;i++)//Row
   {
       for(j=0;j<3;j++) //column
       {
            scanf("%d",&m1[i][j]);
        }
        
    }
    printf("ENTER THE 2ND MATRIX"); 
    for(i=0;i<3;i++)//Row
   {
       for(j=0;j<3;j++) //column
       {
            scanf("%d",&m2[i][j]);
        }
        
    }
    //Logic:print values
    printf("ENTER THE 1ST MATRIX");
    for(i=0;i<3;i++)//Row
   {
       for(j=0;j<3;j++) //column
       {
            printf("%d",m1[i][j]);
        }
        printf("\n");
    }
    //sum of matrix
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
          {
              m3[i][j]=m1[i][j]+m2[i][j];
           }
     }
    //logic: printf m3 array or sum of matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",m3[i][j]);
         }
        printf("\n");
     }
    
 }