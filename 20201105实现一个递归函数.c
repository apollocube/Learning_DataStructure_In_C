/*瀹炵幇涓€涓€掑綊鍑芥暟F(0)=0, F(X)=2F(X-1)+X^2;*/
double func001(double x)
{
    if(x==0)
    return 0;
    return 2*func001(x-1)+x*x;
}
#include <stdio.h>
int main()
{
    printf("%f",func001(1));
    return 0;
}
