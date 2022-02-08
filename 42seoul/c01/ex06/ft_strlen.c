#include <unistd.h>

int   ft_strlen(char *str)
{
    int   cnt;

    cnt = 0;
    while(str[cnt])
        cnt++;
    return (cnt);
}
