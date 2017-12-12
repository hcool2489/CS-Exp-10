#include<stdio.h>
void main()
{
	int arr1[10][10],arr2[10][10],arr3[10][10],r1,c1,r2,c2,i,j,k;
	printf("Enter Rows and Cols of 1st Array: ");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter Rows and Cols of 2nd Array: ");
	scanf("%d%d",&r2,&c2);

	if(c1==r2)
	{
		printf("\nEnter 1st Array:\n");
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&arr1[i][j]);
		printf("\n");
		printf("\nEnter 2nd Array:\n");
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&arr2[i][j]);
		printf("\n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				arr3[i][j]=0;
				for (k=0;k<c1;k++)
					arr3[i][j] += arr1[i][k]*arr2[k][j];
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",arr3[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n\n!! Row of 1st Array must be equal to Col of 2nd Array !!\n\n");
	}
}
