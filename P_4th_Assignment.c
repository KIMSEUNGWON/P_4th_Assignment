//Find Multiply Matrix Using Multidimensional Arrays

#include<stdio.h>

int main(void)
{
	int a[10][10],b[10][10],result[10][10],rows1, columns1,rows2,columns2,i,j,k;

	printf("Enter rows and columns for first matrix: ");
	scanf("%d %d", &rows1, &columns1);

	printf("Enter rows and columns for second matrix: ");
	scanf("%d %d", &rows2, &columns2);

	//column of first matirx should be equal to row of second matrix
	while (columns1 != rows2)
	{
		printf("Error! column of first matrix not equal to row of second.\n\n");
		printf("Enter rows and colunms for first matrix: ");
		scanf("%d %d", &rows1, &columns1);
		printf("Enter rows and columns for second matrix: ");
		scanf("%d %d", &rows2, &columns2);
	}

	//storing elements of first matrix.
	printf("\nEnter elements of matrix 1: \n");

	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < columns1; j++)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);

		}
	}

	//storing elements fo second matrix.
	printf("\nEnter elements of matrix 2: \n");

	for (i = 0; i < rows2; i++)
	{
		for (j = 0; j < columns2; j++)
		{
			printf("Enter elements b%d%d: ", i + 1, j + 1);
			scanf("%d", &b[i][j]);
		}
	}

	//initializing all elements of result matrix to 0
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < columns2; j++)
		{
			result[i][j] = 0;
			//printf("%d ", result[i][j]);
		}
	}

	//multiplying matirces a and b and
	//storing result in result matrix
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < columns2; j++)
		{
			for(k=0;k<columns1;k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	//displaying the result
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < columns2; j++)
		{
			printf("%d ", result[i][j]);
			
			if (j == columns2 - 1)
				printf("\n\n");
		}
	}

	return 0;

}