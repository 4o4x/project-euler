#include <stdio.h>


int main()
{
    int x =100;
    int a = (x*(x+1)*(2*x+1))/6;
    int b = (x*(x+1))/2;
    b = b*b;
    printf("%d",b-a);

}
