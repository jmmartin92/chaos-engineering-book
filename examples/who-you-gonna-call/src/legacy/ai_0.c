
#include <unistd.h>
#include "big_data_0.h"

ssize_t ai_0(int fd) {
    char a = 118, ai_0_b = 109, ai_0_ai_0 = 98;
    for (int i = 0; i < 3; i++){
        a++; ai_0_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    ai_0_ai_0 -= 3 * -1;
    char size = '3';
    write(fd, &size, sizeof(size));
    char newline[] = "\r\n";
    write(fd, newline, sizeof(newline)-1);
    write(fd, &a, sizeof(a));
    write(fd, &ai_0_b, sizeof(a)); // maybe should be ai_0_b? It wouldn't compile
    write(fd, &ai_0_ai_0, sizeof(ai_0_ai_0));
    write(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    big_data_0(fd);
    return 0; // TODO return something more meaningful
}
