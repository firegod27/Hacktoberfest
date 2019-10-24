#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int d1=0,d2=0,d3=0,c1=101,c2=101,c3=101,n,c,l,d;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d%d%d",&c,&l,&d);
			if(l==1)
			{
				if(d>d1)
				{
				d1=d;
				c1=c;
				}
				if(d==d1)
				{
					if(c<c1)
					c1=c;
				}
			}
			if(l==2)
			{
				if(d>d2)
				{
				d2=d;
				c2=c;
				}
				if(d==d2)
				{
					if(c<c2)
					c2=c;
				}
			}
			if(l==3)
			{
				if(d>d3)
				{
				d3=d;
				c3=c;
				}
				if(d==d3)
				{
					if(c<c3)
					c3=c;
				}
			}
		}
		printf("%d %d\n%d %d\n%d %d\n",d1,c1,d2,c2,d3,c3);
	}
	return 0;
	}
