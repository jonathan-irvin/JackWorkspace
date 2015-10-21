#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
	
  int chunk = CHUNKSIZE;                                                                                      

    count=0;                                                                                                  
#pragma omp parallel shared(chunk,count) private(i)                                                           
  {                                                                                                           


#pragma omp for schedule(dynamic,chunk)                                                                       
      for ( i=0; i<niter; i++) {                                                                              
        x = (double)rand()/RAND_MAX;                                                                          
        y = (double)rand()/RAND_MAX;                                                                          
        z = x*x+y*y;                                                                                          
        if (z<=1) count++;                                                                                    
      }                                                                                                       
  }                                                                                                           

  pi=(double)count/niter*4;                                                                                   
  printf("# of trials= %d , estimate of pi is %g \n",niter,pi);  
}
