%{
#include<stdio.h>
int vowel=0;
%}

%%
[aeiouAEIOU] vowel=1;
%%
int yywrap(){}
int main()
{
  printf("Enter a letter: ");
  yylex();
  if(vowel==1)
    printf("Given letter is a vowel");
  else
    printf("Given letter is a consonant");
}
return 0;
}
