#include<stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void forkthem(int n)
{
  if (n > 0)
  {
    fork();
    printf("p %d: %d\n", getpid(), n);
    forkthem(n-1);
  }
}

int main(int argc, char **argv)
{
  forkthem(5);
}
