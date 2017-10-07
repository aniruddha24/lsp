#include<stdio.h>
int mean(int*parr,int size)
{
int sum=0;
int itr;
for( itr=0;itr<size;itr++)
{
	//sum+=parr[itr];
	sum=add(sum,parr[itr]);
}
	return sum/size;
}
