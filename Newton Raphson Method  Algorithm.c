#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x){

return x*x*x -2*x -5;

}
float g (float x){

return  3*x*x-2;

}

void main(){
int iteration, max_iteration;
float c,x0,x1,err;

 printf("Enter x0, error and maximum iterations\n");
  scanf("%f%f%d", &x0,&err,&max_iteration);
  for(iteration=1; iteration<=max_iteration;iteration++){

    c= f(x0)/g(x0);

    x1=x0-c;

    printf(" At the iteration no.%3d, x= %9.6f\n", iteration,x1);

     if (fabs(c)<err)
     {
         printf(" After %3d iterations,root= %8.6f\n", iteration,x1);

         return 0;
     }

     x0=x1; // the two iteration are equal under their own function value

  }

  printf("The solution doesn't coverage or insufficient iterations\n");
   return 1;

}
