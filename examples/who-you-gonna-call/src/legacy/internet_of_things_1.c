
#include <unistd.h>
#include "lean_1.h"

ssize_t internet_of_things_1(int fd) {
    char a = 116, internet_of_things_1_b = 58, internet_of_things_1_internet_of_things_1 = 31;
    for (int i = 0; i < 3; i++){
        a++; internet_of_things_1_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    internet_of_things_1_internet_of_things_1 -= 3 * -1;
    char size = '3';
    write(fd, &size, sizeof(size));
    char newline[] = "\r\n";
    write(fd, newline, sizeof(newline)-1);
    write(fd, &a, sizeof(a));
    write(fd, &internet_of_things_1_b, sizeof(a)); // maybe should be internet_of_things_1_b? It wouldn't compile
    write(fd, &internet_of_things_1_internet_of_things_1, sizeof(internet_of_things_1_internet_of_things_1));
    write(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    lean_1(fd);
    return 0; // TODO return something more meaningful
}
