#include<stdio.h>
int main(){
	char s[20];
	int i,n,odd=0,even=0;
	printf("Enter the length of the string: ");
	scanf("%d",&n);
	printf("Enter the string: ");
	scanf("%s",&s);
	for(i=0;i<n;i++){
		if(s[i]=='0')
			even+=1;
		else if(s[i]=='1')
			odd+=1;
	}
	if(even%2==0 && odd%2==0)
		printf("Given string contains even number of 0's and 1's");
	else
		printf("Given string does not contain even number of 0's and 1's");
	return 0;
}
