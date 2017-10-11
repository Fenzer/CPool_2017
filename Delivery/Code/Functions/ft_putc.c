
#include <unistd.h>

void ft_putc(char c) {
    write(1, &c, 1);
}
