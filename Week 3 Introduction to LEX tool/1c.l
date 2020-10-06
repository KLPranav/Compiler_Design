/*Counting the number of lines from input*/
%{#include<stdio.h>
 int no_ines=0;
%}

%%
[a-z A-Z 0-9]*\n{no_lines++;}
%%
int yywrap(){}
int main()
{
 yylex();
 printf("\nNumber of lines= %d",no_lines);
 return 0;
}
