//Lex program to count the number of vowels and consanants
%{
#include<stdio.h>
int vow_no=0,con_no=0;
%}

%% 
([aeiouAEIOU])  {vow_no++;}
([a-zA-Z])  {con_no++;}
%%

int yywrap(){}
int main()
{
  printf("Enter a string: ");
  yylex();
  printf("Number of vowels: %d",vow_no);
  printf("Number of consonants: %d",con_no);
  return 0;
}
