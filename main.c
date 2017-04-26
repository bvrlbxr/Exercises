#include <stdio.h>
#include <stdlib.h>

int main()
{int upper,lower,step;
float fahr, celsius;
lower=0;
upper=290;
step=1;
fahr=0;
printf("    Table with celsius and fahr matching\t\n");

celsius=0;
while (celsius<=upper)
    {

    fahr=celsius*(9.0/5.0)+32;
    printf("%3.0f\t %6.1f\n",celsius,fahr);
    celsius=step+celsius;
    }
return 0;
}

