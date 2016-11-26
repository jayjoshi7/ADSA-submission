#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
	int n;
	scanf("%d",&n);
	int i,d,j;
	scanf("%d",&d);
	int a[n][d];
//	a[0][0] = 1;
//	a[0][1] =2;
//	a[1][0]=3;
//	a[1][1]=4;
	for(i=0;i<n;i++)
	{
		for(j=0;j<d;j++)
	scanf("%d",&a[i][j]);
	}
	int r;
	scanf("%d",&r);
	int b[d];
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	//printf("r is %d\n",r);
	printf("the recommended items are:\n");
	int dis[n];
	for(i=0;i<n;i++)
	{
		int temp  = 0;
		for(j=0;j<d;j++)
		{
			temp += abs(a[i][j] - b[j])*abs(a[i][j] - b[j]);
		}
		dis[i] = sqrt(temp);
	}
		for(i=0;i<n;i++)
	{
		if(dis[i]<=r)
		for(j=0;j<d;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	int rr = r;
	rr++;
	printf("the new recommeded items are\n");
	for(i=0;i<n;i++)
	{
		if((dis[i])<=rr && dis[i]>r)
		for(j=0;j<d;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
 
 
	return 0;
}