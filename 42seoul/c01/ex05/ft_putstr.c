#include <unistd.h>

void    ft_putstr(char *str)
{
    int   cnt;

    cnt = 0;
    while(str[cnt])
    {
        write(1, str[cnt++], 1);
    }
}
