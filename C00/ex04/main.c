#include <unistd.h>
#include <stdio.h>

void lcd_putchar(char c)
{
    write(1, &c, 1);
}

void	lcd_is_negative(int n)
	lcd_putchar((n < 0) ? 'N' : 'P'));

void ft_is_negative(int n);

int main()
{
    int test[] = {-2147483648, -987534, -42, 0, 42, 2147483647};
    int i = 0;
    while (test[i])
    {
        printf("\n%d :", test[i]);
        lcd_is_negative(test[i]);
        printf(" : ");
        lcd_is_negative(test[i]);
        i++;
    }
    return(0);
}