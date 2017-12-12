#include<stdio.h>
void main()
{
	int i,j,a[3][3],d;
	printf("\nEnter the elements of matrix [3X3]\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	d=a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
	printf("\nDeterminant of Matrix A is %d\n",d);

}
