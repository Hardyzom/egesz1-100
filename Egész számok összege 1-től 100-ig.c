#include <stdio.h>

int main()
{
    int szam;
    int osszeg = 0;
    for(szam=1; szam<=100; szam++){
        osszeg+=szam;
    }
    printf("%d\n",osszeg);
    return 0;
}