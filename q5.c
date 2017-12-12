#include<stdio.h>
void main()
{
	int arr[10][10],r,c,i,j,ctr=0;
	printf("Enter rows and cols: ");
	scanf("%d%d",&r,&c);
	if(r!=c)
		printf("Not an Identity matrix: Rows and Cols must be equal\n");
	else
	{
		printf("Enter Elements of array:\n");
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				scanf("%d",&arr[i][j]);
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				if(i==j)
				{
					if(arr[i][j]==1)
						ctr++;
				}
				else if(arr[i][j]==0)
					ctr++;
		if(ctr==(r*c))
			printf("Matrix is Identity\n");
		else			
			printf("Matrix is NOT Identity\n");
	}
}
