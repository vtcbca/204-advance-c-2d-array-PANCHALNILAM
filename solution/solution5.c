
   
   

  #include<stdio.h> 
#include<conio.h> 
void main() 
{ 	
    int vowel=0,count=0,i; 	
    char string[3][1000],v; 	
    clrscr(); 	
    printf("\t Input a String : \n\n\t "); 
    for(i=0;i<3;i++)
        	gets(string[i]); 	
        
    for(i=0;i<3;i++)
    {   
        printf("Vowels = ");
        while(string[i][count] != '\0')
        { 		
            v=string[i][count];
            if(v=='a'|| v=='A'|| v=='e'|| v=='E'|| v=='i'|| v=='I'|| v=='o'|| v=='O'|| v=='u'|| v=='U') 		 			
            {
                vowel++;
                printf("%c, ",v);
            } 					
           	count++; 	
        } 	
        printf(" : String = %s : Vowels = %d \n",string[i],vowel); 	
        count=0;
        vowel=0;
      }
    getch();
}