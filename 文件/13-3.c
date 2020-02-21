#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *fp;
    time_t t;
    time(&t);
    struct tm* now = localtime(&t);
  
    if ((fp = fopen("dt_dat", "a")) == NULL )
    {
        printf("can not open file dt_dat\n");
    }else
    {
        fprintf(fp, "%d %d %d %d %d %d\n", 1900 + now->tm_year, 1 + now->tm_mon, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec);
        fclose(fp);
    }

    return 0;
}