#include <stdio.h>
#include <conio.h>
#include <string.h>

int friends_problem(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return friends_problem(n - 1) + friends_problem(n - 2) * (n - 1);
}

int main()
{
    int friends = friends_problem(4);
    printf("%d", friends);
    return 0;
}