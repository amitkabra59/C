#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 

char ip[20]; 
int i=0; 

void S(); 
void A(); 

int main() 
{ 
	printf("the given grammar is :\nS ? cAd\nA ? ab\n"); 
	printf("enter the input to be parsed:"); 
	gets(ip); 
	S(); 
	if(ip[i]=='\0') 
		printf("valid input\n"); 
	else 
		printf("invalid input\n"); 
} 

void S() 
{ 
	printf("in S\n"); 
	if(ip[i]=='c') 
	{ 
		i++; 
		A(); 
		if(ip[i]=='d') 
			i++; 
		else 
		{ 
			printf("invalid input\n"); 
			exit(0); 
		} 
	} 
} 

void A() 
{ 
	printf("in A\n"); 
	if(ip[i]=='a') 
	{ 
		i++; 
		if(ip[i]=='b') 
			i++; 
	} 
	else 
	{ 
		printf("invalid input\n"); 
		exit(0); 
	} 
}

