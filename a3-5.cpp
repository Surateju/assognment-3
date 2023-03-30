#include <stdio.h>
#include <string.h>
int stringlength(char *s)
{
     int j;
     for(j=0;s[j];j++);
	 
	 return j; 	 
}
void printmax(char *s)
{
	int  a[1000],i,j,k=0,count=0,n;
 
    n=stringlength(s); 
    
    for(i=0;i<n;i++)  
    {
    	a[i]=0;
    	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
       }
	   a[i]=count;
	   if(count>=k)
	     k=count;	   
 	}
 	printf("maximum occuring characters ");
 	for(j=0;j<n;j++)  
	    {
	    	
	        if(a[j]==k)
    	    {
	             printf(" '%c',",s[j]);
	     	}
	   }  
	printf("\b=%d times \n ",k);	 
}
int main()
{
    char s[1000];
  
    printf("Enter  the string : ");
    gets(s);
    printmax(s);
 
	return 0;
}
