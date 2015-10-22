# JackWorkspace

We are going to try to get some openMP code running for Jack.

We are working off of the web site: 
https://www.dartmouth.edu/~rc/classes/intro_openmp/hello_world_openmp.html

We are going to do the hello world comments first.

We use nano then the file name to open and close the text documents.

Crtl x in nano will close a file.

You have to right click to paste in code.

We made a file called Hello_OpenMP.c and now we pasted the code in and we run it.


We use the commands gcc -fopenmp Hello_OpenMP.c -lm -o test
This command make the executable called test.

Now we start to run the code.

We first type
echo "Run with 1 thread."
and that prints to the command prompt.

And then we
export OMP_NUM_THREADS=1
and then
./test > hello_local_gcc_output.txt
which created the file, but there is nothing in it just yet.
We will try that again.

We were going to the wrong file I think. We neede to be going to hello_local_gcc_output, so now it works better.

We found our text, and added stuff to it. now we are goign to run again as a test.

Now we are goign to try a different example.

Working from 
http://stackoverflow.com/questions/6192807/using-openmp-to-calculate-the-value-of-pi

We are going to try to run some new code.
We added a little help from:
https://computing.llnl.gov/tutorials/openMP/samples/C/omp_hello.c

We added a bunch of code, now we will try to run in.
The code had some problems.
```
jeremy@jeremy-VirtualBox ~/workspace/JackWorkspace $ gcc -fopenmp piEstimate.c -lm -o piTest
piEstimate.c: In function ‘main’:
piEstimate.c:8:15: error: ‘CHUNKSIZE’ undeclared (first use in this function)
   int chunk = CHUNKSIZE;                                                                                      
               ^
piEstimate.c:8:15: note: each undeclared identifier is reported only once for each function it appears in
piEstimate.c:10:5: error: ‘count’ undeclared (first use in this function)
     count=0;                                                                                                  
     ^
piEstimate.c:11:50: error: ‘i’ undeclared (first use in this function)
 #pragma omp parallel shared(chunk,count) private(i)                                                           
                                                  ^
piEstimate.c:16:20: error: ‘niter’ undeclared (first use in this function)
       for ( i=0; i<niter; i++) {                                                                              
                    ^
piEstimate.c:17:9: error: ‘x’ undeclared (first use in this function)
         x = (double)rand()/RAND_MAX;                                                                          
         ^
piEstimate.c:18:9: error: ‘y’ undeclared (first use in this function)
         y = (double)rand()/RAND_MAX;                                                                          
         ^
piEstimate.c:19:9: error: ‘z’ undeclared (first use in this function)
         z = x*x+y*y;                                                                                          
         ^
piEstimate.c:24:3: error: ‘pi’ undeclared (first use in this function)
   pi=(double)count/niter*4;                                                                                   
   ^
```
So we will go in and try to fix some stuff.
I will leave this with Jack and go to lunch.
