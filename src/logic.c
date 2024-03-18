#include "logic.h"

int add(int first_n, int second_n)
{
    return first_n + second_n;
}

int sub(int first_n, int second_n)
{
    return first_n - second_n;
}

int mul(int first_n, int second_n)
{
    return first_n * second_n;
}

int div(int first_n, int second_n)
{
    if (second_n != 0)
        return (double)first_n / second_n;
    return -1.0;
}
