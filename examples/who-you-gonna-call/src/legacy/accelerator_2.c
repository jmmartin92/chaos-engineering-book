
#include <unistd.h>
#include "agile_2.h"

ssize_t accelerator_2(int fd) {
    char a = 42, accelerator_2_b = 109, accelerator_2_accelerator_2 = 102;
    for (int i = 0; i < 3; i++){
        a++; accelerator_2_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    accelerator_2_accelerator_2 -= 3 * -1;
    char size = '3';
    write(fd, &size, sizeof(size));
    char newline[] = "\r\n";
    write(fd, newline, sizeof(newline)-1);
    write(fd, &a, sizeof(a));
    write(fd, &accelerator_2_b, sizeof(a)); // maybe should be accelerator_2_b? It wouldn't compile
    write(fd, &accelerator_2_accelerator_2, sizeof(accelerator_2_accelerator_2));
    write(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    agile_2(fd);
    return 0; // TODO return something more meaningful
}
