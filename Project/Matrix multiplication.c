#include<stdio.h>

void matread(int x[][15],int m,int n)

{

	int i,j;

	for(i=0;i<m;i++)

	{

		for(j=0;j<n;j++)

		{

			printf("Enter a%d%d : ",i+1,j+1);

			scanf("%d",&x[i][j]);

		}

	}

}

void matmultiply(int x[][15],int y[][15],int z[][15],int m,int n,int c)

{

	int i,j,k,sum,p;

	for(i=0;i<m;i++)

	{

		for(j=0;j<n;j++)

		{

			for(k=0,sum=0;k<c;k++)

			{

				p=x[i][k]*y[k][j];

				sum=sum+p;

			}

			z[i][j]=sum;

		}

	}

}

void matprint(int x[][15],int m,int n)

{

	int i,j;

	for(i=0;i<m;i++)

	{

		for(j=0;j<n;j++)

		{

			printf("%d\t",x[i][j]);

		}

		printf("\n");

	}

}

void main()

{

	int x[15][15],y[15][15],z[15][15],m,n,p,q;

	printf("Enter order of matrix 1 : ");

	scanf("%d%d",&m,&n);

	matread(x,m,n);

	printf("Enter order of matrix 2 : ");

	scanf("%d%d",&p,&q);

	if(n!=p)

	printf("Multiplication not possible");

	else

	{

		matread(y,p,q);

		matmultiply(x,y,z,m,q,n);

		matprint(z,m,q);

	}

}
