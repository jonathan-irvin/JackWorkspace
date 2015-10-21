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
