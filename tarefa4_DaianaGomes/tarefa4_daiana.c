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

