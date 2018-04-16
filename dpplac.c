#include<stdio.h>
int main()
{
	int block[100],no,process[100],i,j,k,n,allocate[100];

	printf("Enter the no of process\n");
	scanf("%d",&no);
	printf("Enter the size of block\n");
	scanf("%d",&n);

	printf("Enter the size of each block\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",&block[i]);
	}

	printf("Enter the size of each process\n");
	for(j=0;j<no;j++)
	{
		scanf("%d",&process[j]);
	}

	for(i=0;i<no;i++)
	{
		for(j=0;j<no;j++)
	{
			if(process[i]<=block[j])
			{
				process[i]=block[j];
				allocate[i]=j;
				break;
			}

	}
	}
for(k=0;k<no;k++)
{
	printf("%d\n",allocate[k]);																														
}
return 0;
}
