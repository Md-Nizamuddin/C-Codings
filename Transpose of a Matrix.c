#include <stdio.h> 
int main()
{

int a[10][10], transpose[10][10], r, c, i, j;
printf("Enter rows and columns of matrix: "); 
scanf("%d %d", &r, &c);

// Storing elements of Matrix a
printf("\nEnter matrix:\n"); 
for(i=0; i<r; ++i)
{   for(j=0; j<c; ++j)
    {
    printf("Enter %d%d: ",i+1, j+1);
        scanf("%d", &a[i][j]);
    }
}

// Displaying the Matrix a
printf("\nEntered Matrix: \n"); 
for(i=0; i<r; ++i)
{   for(j=0; j<c; ++j)
    {
        printf("%d ", a[i][j]); 
    }printf("\n");
}

// Finding the transpose of Matrix a
for(i=0; i<r; ++i)
{   for(j=0; j<c; ++j)
    {
        transpose[j][i] = a[i][j];
    }
}

// Displaying the transpose of matrix a 
printf("\nTranspose of Matrix:\n"); 
for(i=0; i<c; ++i)
{   for(j=0; j<r; ++j)
    {
        printf("%d ",transpose[i][j]);
    }printf("\n");
}
return 0;
}
