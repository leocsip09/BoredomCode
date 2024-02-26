#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fib(int n){
  int a = 1;
  int b = 1;
  while(a < n){
    int temp;
    temp = a + b;
    printf("%i ", a);
    a = b;
    b = temp;
  }
}

int main(){
  clock_t start_time, end_time;
  double cpu_time_used;

  start_time = clock();

  fib(20000);

  end_time = clock();
  cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

  printf("\nTiempo de ejecución: %f segundos\n", cpu_time_used);

  return 0;
}

