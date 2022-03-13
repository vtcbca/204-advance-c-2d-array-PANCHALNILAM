/*wap to enter three by three matrix its 
diagonal matrix or not .(f=flag  variable)*/
#include<stdio.h>
int main()
{
     int m[3][3];
     int i,j,f=0;
     //logic:input matrix
     for(i=0;i<3;i++)  //row
     {
        for(j=0;j<3;j++)  //column
        {
           printf("Enter the number[%d][%d]",i,j);
           scanf("%d",&m[i][j]);
        }
      }
    //logic:print matrix
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d",m[i][j]);
         }
        printf("\n");
     }
    //check the diagonal
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==j&m[i][j]==0)
           {
               f=1;
               break;
            }
            else if(i!=j&m[i][j]==0  )
            {
               f=1;
               break;
            }
         }
     }
     if(f==0)   
       printf("MATRIX is Diagonal Matrix");
     else
       printf("MATRIX is not Diagonal Matrix");
  }
  