/*There are N frustrated coders standing in a circle with a gun in their hands. Each coder
has a skill value S[ i ] and he can only kill those coders that have strictly less skill than
him. One more thing, all the guns have only 1 bullet. This roulette can take place in
any random order. Fortunately, you have the time stone (haaan wo harre wala) and
you can see all possible outcomes of this scenario. Find the outcome where the total
sum of the remaining coder's skill is minimum. Print this sum.
Input Format
The first line contains N the no. of coders
The next line contains N elements where the ith element is theS[ i ] of ith coder.
Output Format
Print a single line containing the minimum sum.
*/



#include<stdio.h>

void main()
{
int n;
scanf("%d",&n);
int a[n],count=0;
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n-1;i++)
{
count = n-1-i;
for(int j=i+1;j<n;j++)
{
if(a[i]>=a[j]) count=count - 1;
else break;
}
if(count == 0)
printf("%d ",a[i]);
}
printf("%d",a[n-1]);
}

/*
input:
6
1 7 2 2 4 4 
output:
11
*/
