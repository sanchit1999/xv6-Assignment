#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    long double d1, d2 = 2.334, d3 = 23.323, d4 = 232.32;
    for (int i=0;i<6;i++) 
    {
        for (int k=0;k<12;k++) 
        {
            for (d1=0;d1<7324567;d1=d1+1) 
            {
                d2 = d2 * 3.463;
                d2 = d2 * 1352.432;
                d2 = d2 + 43.56;
                d3 = d3 + 123.4 * 213.12;
                d4 = d4 + (d3/1231.123);
            }
        }
    }
    printf(1, "test program ended\n");
    exit();
}