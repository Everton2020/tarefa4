#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>




void ler(double **M, int dim, FILE*leitura)
 {	int i, j;
     double a;	 
 
 	for (i=0; i<dim; i++) 
 	{
 	 	M[i] = malloc((dim+1)*sizeof(double));	
 	}
 	 
 	i = j = 0;
 	while(fscanf(leitura, "%lf", &a) != EOF) 
 	{
 		M[i][j] = a;
 	 	j++;
 	 	if(j==dim+1) 
 	 	{	j=0; i++;	}
 	
 	}
 
 }
 
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

void escalonamento(double **M, int dim)
 {
 	int i, j, k;
 	double pivo;
 	
 	for(k=0; k<dim-1; k++)
 	{
 		for(i=k+1; i<dim; i++)
 		{
 			pivo = (M[i][k] / M[k][k]);
 
 			for(j=k; j<dim+1; j++)
 				M[i][j] = M[i][j] - (pivo * M[k][j]);
 		}	
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



int main()
{	int i;	
	double **M_gerada1, **M_gerada2, **M_gerada3, **M_gerada4;
	double **M_gerada5, **M_gerada6, **M_gerada7, **M_gerada8;
	
	M_gerada1 = gera(4);
 	imprime(M_gerada1,4);
 	printf("\n");
 	
 	M_gerada2 = gera(4);
 	imprime(M_gerada2, 4);
 	printf("\n");
 	
 	M_gerada3 = gera(4);
 	imprime(M_gerada3, 4);
 	printf("\n");
 	
 	M_gerada4 = gera(4);
 	imprime(M_gerada4, 4);
 	printf("\n");
 	
 	M_gerada5 = gera(4);
 	imprime(M_gerada5, 4);
 	printf("\n");
 	
 	M_gerada6 = gera(4);
 	imprime(M_gerada6, 4);
 	printf("\n");
 	
 	M_gerada7 = gera(4);
 	imprime(M_gerada7, 4);
 	printf("\n");
 	
 	M_gerada8 = gera(4);
 	imprime(M_gerada8, 4);
 	printf("\n");
 	//ok
}
