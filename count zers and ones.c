#include<stdio.h>

int main()
{
	int one=0,zero=0,i,n;
	n=10; int s;
	int a=1;
	for (i=1;i<5;i++) // total no of bits we can decide
	{
	    s=n&(1<<(i-1)); //num  with left shift to check each number
		if(s)
		{
			one++; // count zers
		}
		else{
			zero++; // ones
		}
		
	}
	printf("the total zeros is %d\n",zero);
	printf("the total ones is %d\n",one);
	
	return 0;
}
