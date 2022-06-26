#include <stdio.h>

// divisibility functions
int two(int num);
int three(int num);
int four(int num);
int five(int num);
int six(int num);
int seven(int num);

// array of function pointers
int (*fptr_arr_odd[3])(int num) = {three, five, seven};
int (*fptr_arr_even[3])(int num) = {two, four, six};

// odd even functions
void odd(int (*ftpr_arr[])(int num), int num);
void even(int (*ftpr_arr[])(int num), int num);

int two(int num)
{
    int flag;
    if (num % 2 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}
int three(int num)
{
    int flag;
    if (num % 3 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}
int four(int num)
{
    int flag;
    if (num % 4 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}
int five(int num)
{
    int flag;
    if (num % 5 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}
int six(int num)
{
    int flag;
    if (num % 6 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}

int seven(int num)
{
    int flag;
    if (num % 7 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}

void odd(int (*ftpr_arr[])(int num), int num)
{
    int arr[3];
    printf("Odd: The number %d is divisible by:\n", num);
    for (int i = 0; i < 3; i++)
    {
        if (ftpr_arr[i](num) == 1)
        {
            arr[i] = 2 * i + 3;
            printf("%d\n", arr[i]);
        }
    }
}

void even(int (*ftpr_arr[])(int i), int num)
{
    int arr[3];
    printf("Even: The number %d is divisible by:\n", num);
    for (int i = 0; i < 3; i++)
    {
        if (ftpr_arr[i](num) == 1)
        {
            arr[i] = 2 * i + 2;
            printf("%d\n", arr[i]);
        }
    }
}

// driver function
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d", &num);
    odd(fptr_arr_odd, num);
    even(fptr_arr_even, num);
    return 0;
}