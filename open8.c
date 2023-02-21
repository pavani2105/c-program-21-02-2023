#include<stdio.h>
main()
{
	int n,i,s=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		i=n%10;
		s=s+(i*i*i);
		n=n/10;
		
	}
	if(s==t)
	 printf("Armstrong number");
	else
	 printf("not a Armstrong number");
}
