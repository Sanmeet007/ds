#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int count_digits(unsigned long long int num)
{
    int length = 0, remainder = 0;

    while (num != 0)
    {
        remainder = num % 10;
        length++;
        num /= 10;
    }
    return length;
}

void array_reverse(int *array, int digits)
{
    int half = digits % 2 == 0 ? (digits / 2) : (digits + 1) / 2;
    digits -= 1;

    for (int i = 0; i < half; i++)
    {
        int val = array[digits - i];
        array[digits - i] = array[i];
        array[i] = val;
    }
}

int *convert_to_array(unsigned long long num)
{
    int length = 0, remainder = 0, increment = 0, digits = count_digits(num);
    int *array = (int *)malloc(digits * sizeof(int));
    while (num != 0)
    {
        remainder = num % 10;
        *(array + increment++) = remainder;
        num /= 10;
    }

    array_reverse(array, digits);
    return array;
}

void print_number_array(int *array, int element_count)
{
    for (int i = 0; i < element_count; i++)
    {
        printf("%d", array[i]);
    }
}

int sum_till(int *array, int end_index)
{
    int sum = 0;
    for (int i = 0; i <= end_index; i++)
    {
        sum += array[i];
    }

    return sum;
}

void nambier_number(int *array, int digits)
{
    int sum = 0, previous_nature = array[0] % 2, current_nature = previous_nature;

    for (int i = 0; i < digits; i++)
    {
        current_nature = sum_till(array, i) % 2;
        sum += array[i];

        if (current_nature != previous_nature)
        {
            printf("%d", sum); // TODO add it to string then return
            sum = 0;
            previous_nature = current_nature;
        }
    }
}

int main()
{
    unsigned long long number = 988012743ULL;
    int sum = 0;
    int *splitted_number = convert_to_array(number);
    // print_number_array(splitted_number, count_digits(number));
    nambier_number(splitted_number, count_digits(number));
    return 0;
}