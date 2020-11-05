/*Print_a_number*/
#include <stdio.h>
#include "USF_CODES.h"
int main()
{
    int n=1560819;
    print_number(n);
    return 0;
}

int print_number(int x)
{
    if(x>10)
        print_number(x/10);
	PRINT_INT(x%10);
};