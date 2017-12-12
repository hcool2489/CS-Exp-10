#include<stdio.h>
void main()
{
	int arr[10][10],r,c,rs,cs,i,j;
	printf("Enter Rows and Cols: ");
	scanf("%d%d",&r,&c);
	
	printf("\nEnter Array:\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	printf("\n");
	for(i=0;i<r;i++)
	{
		rs=0;
		for(j=0;j<c;j++)
			rs+=arr[i][j];
		printf("Row %d : %d\n",i+1,rs);
	}
	printf("\n");
	for(j=0;j<c;j++)
	{
		cs=0;
		for(i=0;i<r;i++)
			cs+=arr[i][j];
		printf("Col %d : %d\n",j+1,cs);
	}
}
