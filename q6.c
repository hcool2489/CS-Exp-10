#include <stdio.h>
void main ()
{
	int arr[10][10],i,j,r,c;
	int ctr=0;
	printf("Enter the rows and cols: ");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of the matix\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==0)
				ctr++;
		}
	if(ctr>((r*c)/2))
		printf("Matrix is sparse matrix\n");
	else
		printf("Matrix is NOT a sparse matrix\n");
}
