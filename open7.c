#include<stdio.h>
main()
{
	int n,i,s=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		i=n%10;
		s=s*10+i;
		n=n/10;
		
	}
	if(s==t)
	 printf("palindrome");
	else
	 printf("not a palindrome");
}
