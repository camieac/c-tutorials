#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){

  struct timeval start, end;

  gettimeofday(&start, NULL);
  sleep(2);
  gettimeofday(&end, NULL);

  printf("Time Elapsed: %ld.%06ld s\n", end.tv_sec - start.tv_sec, end.tv_usec - start.tv_usec);

  
}
