#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
    int val = 5;
    int pid;
    if (pid = fork())
        wait(pid);
    val++;
    printf("%d\n", val);
    return val;
}