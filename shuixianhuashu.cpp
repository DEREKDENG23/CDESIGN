#include<iostream>
using namespace std;
#define N 3
long func(long x,long y)
{
	long t;
    if (1==y)
		t=x;
	else
		t=x*func(x,y-1);
	return t;
}
void main()
{
	long min,max,n,m,i,j,sum,c[N];
	min=func(10,N-1);
    max=min*10-1;
    for(n=min;n<=max;n++)
	{   
		m=n;
		i=j=0;
		do
		{
           c[i++]=m%10;
		   m/=10;
		}while(m);
		for(j=0,sum=0;j<i;j++)
			sum+=func(c[j],N);
		if (n==sum)
			cout<<n<<endl;
	}

}