#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c);

void lcd_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    int i = 33;
    while (i <= 126)
    {
        lcd_putchar(i);
        printf(" : _");
        ft_putchar(i);
        printf("_");
        lcd_putchar("\n");
    }
}