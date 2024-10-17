#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t a = 032;
    int8_t w = 02;
    
printf("0%o + 0%o = 0%o\n", a,w, (a+w));
printf("0%o - 0%o = 0%o\n", a,w, (a-w));
printf("0%o * 0%o = 0%o\n", a,w, (a*w));
printf("0%o / 0%o = 0%o\n", a,w, (a/w));
printf("0%o %% 0%o = 0%o\n", a,w, (a%w));
return 0;
}