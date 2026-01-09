#include <iostream>
using namespace std;

int main()
{
    long x, y;
    scanf("%ld%ld", &x, &y);
    printf("%ld + %ld = %ld\n", x, y, x + y);
    printf("%ld * %ld = %ld\n", x, y, x * y);
    printf("%ld - %ld = %ld\n", x, y, x - y);

    return 0;
}