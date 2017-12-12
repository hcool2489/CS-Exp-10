#include<stdio.h>
void main()
{
	float quiz[10][3],min,max,avg;
	int n,i,j,rn[10];
	printf("Enter no of students in class: ");
	scanf("%d",&n);
	printf("Enter Details:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter 4 digit Roll no of student %d: ",i+1);
		scanf("%d",&rn[i]);
		for(j=0;j<3;j++)
		{
			printf("\tEnter Marks in quiz %d: ",j+1);
			scanf("%f",&quiz[i][j]);
		}
		printf("\n");
	}
	printf("\nScores:\nROLL\tQuiz1\tQuiz2\tQuiz3\n------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",rn[i]);
		for(j=0;j<3;j++)
			printf("%.2f\t",quiz[i][j]);
		printf("\n");
	}
	printf("\nStats:\n");
	for(j=0;j<3;j++)
	{
		min=quiz[0][j];
		max=quiz[0][j];
		avg=0;
		for(i=0;i<n;i++)
		{
			if(quiz[i][j]<min)
				min=quiz[i][j];
			if(quiz[i][j]>max)
				max=quiz[i][j];
			avg+=quiz[i][j];
		}
		avg/=n;
		printf("Quiz %d:\n\tMax: %.2f\n\tMin: %.2f\n\tAvg: %.2f\n",j+1,max,min,avg);
	}
}
