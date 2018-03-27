#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 


int main() 
{ 
	int n, i=0;	 
	char a[100]; 
	printf("enter a string for the language  \n"); 
	gets(a); 
	 n=strlen(a); 
	n=n-1; 
		 
	if(n!=0) 
	{ 
		while(i<n) 
		{ 
			if(a[i]=='a' || a[i]=='b' ) 
			 	i++; 
			else 
				{printf("not accepted"); 
					exit(0); 
				} 
		} 
		if(a[n]=='b' && a[n-1]=='b' && a[n-2]=='a') 
		{ 
			printf("the string is accepted\n"); 
		} 
		else 
			printf("rejected"); 
		 
	} 
}	

