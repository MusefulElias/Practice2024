#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int count = 0;
    int all = 1000;
    while (count != all + 1)
    {
        printf("Loading: (%i/%i).\r", count, all);
        ++count;
    	usleep(10000);
    }
    puts("");
    puts("Done!");
    return 0;
}
