#include "/Users/John/GitRepo/first-repo/Pool21/Functions/ft_putchar.c"

void ft_print_combn(int n);
void fix_and_recurse(int arr[], int data[], int digit, int position, int n);

int main(int ac, char **av) 
{
    if (ac == 2)
        ft_print_combn((int)(av[1][0] - 48));
    else
    {
        ft_putchar('?');
        ft_putchar('\n');
    }
    return (0);
}

void ft_print_combn(int n) 
{ 
    int data[n];
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fix_and_recurse(arr, data, 0, 0, n);
}

//подаем (цифры, куда писать и что потом печатать, с какой цифры начинать подстановку, позиция куда писать, кол-во позиций)
void fix_and_recurse(int arr[], int data[], int digit, int position, int n)
{ 
    if (position == n) // Если мы записали последний элемент в вывод, печатаем его.
    { 
        int j = 0;
        while (j < n)
        {
            ft_putchar(data[j] + 48);
            j++;
        }
        if (data[n-1] == 9 && data[0] == 9 - n + 1)
            ft_putchar('\n');
        else
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return; 
    }
  
    // replace index with all possible elements
    int i = digit;
    while (i <= 9)
    { 
        data[position] = arr[i]; 
        fix_and_recurse(arr, data, i + 1, position + 1, n);
        i++;
    } 
} 