#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int count = 0;
    int all = 100;
    while (count != all + 1)
    {
        printf("Loading: (%i/%i).\r", count, all);
        ++count;
        sleep(1);
    }
    puts("");
    puts("Done!");
    return 0;
}
