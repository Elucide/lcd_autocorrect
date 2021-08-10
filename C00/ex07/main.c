#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);

void    lcd_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
        write(1, '-', 1);
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
        write(1, (n / 10), 1);
		n %= 10;
	}
    write(1, n + '0', 1);
}

int main()
{
    int test[] = {-2147483648, -987534, -42, 0, 42, 2147483647};
    int i = 0;
    while (test[i])
    {
        printf("\n%d :", test[i]);
        lcd_putnbr(test[i]);
        printf(" : ");
        ft_putnbr(test[i]);
        i++;
    }
    return(0);
}