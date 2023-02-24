#include <stdio.h>

main()
{
	int mas[100][100];
	int n,m;
	
	printf("Enter the number of rows: ");
	scanf("%i",&n);
	printf("Enter the number of columns: ");
	scanf("%i",&m);
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("\nEnter item number %i-%i: ", j+1, i+1);
			scanf("%i",&mas[j][i]);
		}
	}
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%3i",mas[j][i]);
		}
		printf("\n");
	}
}
