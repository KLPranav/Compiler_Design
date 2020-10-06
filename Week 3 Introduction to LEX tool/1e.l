/*Recognizing a string with three consecutive 0's*/
%{
#include<stdio.h>
int flag=0;
%}

%%
[0-9]*000[0-9]* flag=1;
%%

int yywrap(){}
int main()
{
  printf("Enter a string: ");
  yylex();
  if(flag==1)
    printf("Given string contains three consecutive 0's");
  else
    printf("Given string does not contain three consecutive 0's");
    return 0;
}
