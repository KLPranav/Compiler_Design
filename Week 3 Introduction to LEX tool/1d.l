%{
#include<stdio.h>
int flag=0;
%}

%%
[0-9]*00 flag=1;
%%
int yywrap(){};
int main()
{
  printf("Enter a string: ");
  yylex();
  if(flag==1)
    printf("Given string ends with 00");
   else
    printf("Given string does not end with 00");
  return 0;
}
