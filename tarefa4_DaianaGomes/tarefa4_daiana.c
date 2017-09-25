#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>



void imprime(double **M, int dim)
 {	int i, j;
 
 	for (i=0; i<dim; i++ )
    	{	 for ( j=0; j<dim+1; j++ )
     		{
        			printf ("%lf \t", M[ i ][ j ]);
     		}
 		printf("\n\n");	
  	}
  	
 }
double **gera(int dim) 
{
	int i,j,k;
	double **M;

	srand( (unsigned) time(NULL) );
	M = malloc( dim*sizeof(double *));
	for( i = 0 ; i < dim ; i++ ) M[i] = (double *) malloc((dim+1)*sizeof(double) );
	for (i=0;i<dim;i++)
	{
		for (j=0;j<=dim;j++) 
		{
			M[i][j] = rand() % 20 -10;
		}
		
	}
	return M;
}

