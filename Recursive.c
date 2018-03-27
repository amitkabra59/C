/*
E=TE'
E`=+TE`/#
T=FT'
T'=*FT'/#
F=(E)
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int i=0;
char s[20];

void E();
void Eprime();
void T();
void Tprime();
void F();
void error();


int main(){
printf("The given grammar is\n"); 
	printf("E -> TE`\n"); 
	printf("E` -> +TE`/#\n"); 
	printf("T -> FT`\n"); 
	printf("T` -> *FT`/#");
            printf("F -> (E)/d\n"); 
printf("Enter the string you want to parse\n");
gets(s);
E();
if(s[i]== '\0')
printf("String is valid");
else
printf("String is invalid");
return 0;
}

void E()
{
printf("in E\n");
T();
Eprime();
}
void Eprime(){
printf("in E`\n");
if(s[i]=='+'){
i++;
T();
Eprime();
}
}

void T()
{
printf("in T\n");
F();
Tprime();
}
void Tprime(){
printf("in T`\n");
if(s[i]=='*'){
i++;
F();
Tprime();
}
}

void F(){
printf("in F \n");
if(s[i]=='('){
i++;
E();
if(s[i]==')')

	i++;
else 
error();
}
else if(s[i]=='d')
i++;
else 
error();
}

void error(){
	printf("STring is invalid");
	exit(0);
}


