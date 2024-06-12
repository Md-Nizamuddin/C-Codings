#include <stdio.h> 
int main()
{
int a[10][10], b[10][10], m[10][10], r, c, i, j;
printf("Enter rows and columns of matrix: "); 
scanf("%d %d", &r, &c);

// Storing elements of Matrix a
printf("\nEnter matrix 1 -\n"); 
for(i=0; i<r; ++i)
{   for(j=0; j<c; ++j)
    {
    printf("Enter %d%d: ",i+1, j+1);
        scanf("%d", &a[i][j]);
    }
}

// Storing elements of Matrix b
printf("\n\nEnter matrix 2 -\n"); 
for(i=0; i<r; ++i)
{   for(j=0; j<c; ++j)
    {
    printf("Enter %d%d: ",i+1, j+1);
        scanf("%d", &b[i][j]);
    }
}

// Finding the Product of Matrix a & b
for(i=0; i<r; ++i)
{   for(j=0; j<c; ++j)
    {
        m[i][j] = a[i][j]*b[i][j];
    }
}

// Displaying the Product of Matrix a & b
printf("\nProduct of Matrices:\n"); 
for(i=0; i<r; ++i)
{   for(j=0; j<c; ++j)
    {
        printf("%d ",m[i][j]);
    }printf("\n");
}
return 0;
}

