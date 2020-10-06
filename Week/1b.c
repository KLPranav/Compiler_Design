#include<stdio.h>
int main(){
	char s[20];
	int i,n;
	printf("Enter the length of the string:");
	scanf("%d",&n);
	printf("Enter the string: ");
	scanf("%s",&s);
	if(s[n-1]==s[n-2])
		printf("Given string ends with two symbols of same type");
	else
		printf("Given string does not end with two symbols of same type");
	return 0;
}
