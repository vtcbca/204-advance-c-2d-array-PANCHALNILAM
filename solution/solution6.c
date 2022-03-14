/*wap to enter five string and print it in sorting*/
#include<stdio.h>
int main()
{
      char s[5][10],t[10];
      int i,j;
      /*input string*/
      for(i=0;i<5;i++)
      {
         for(j=0;j<5;j++)
         {
            printf("\n ENTER THE STRING %d",i);
            scanf("%s",s[i]);
            gets(s);
          }
       }
       /*sorting string array*/
       for(i=0;i<5;i++)
       {
           for(j=0;j<5;j++)
           {
               if(strcmp(s[i],s[j])<0)
                {
                  /* t=s[i];
                     s[i]=s[j];
                     s[j]=t*/
                  strcpy(t,s[i]);
                  strcpy(s[i],s[j]);
                  strcpy(s[j],t);
                }
            }
          }
        /*output string*/
        for(i=0;i<5;i++)
           printf("\n%s",s[i]);
  }