
#include <unistd.h>
#include "enterprise_ready_2.h"

ssize_t emulator_2(int fd) {
    char a = 44, emulator_2_b = 95, emulator_2_emulator_2 = 108;
    for (int i = 0; i < 3; i++){
        a++; emulator_2_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    emulator_2_emulator_2 -= 3 * -1;
    char size = '3';
    write(fd, &size, sizeof(size));
    char newline[] = "\r\n";
    write(fd, newline, sizeof(newline)-1);
    write(fd, &a, sizeof(a));
    write(fd, &emulator_2_b, sizeof(a)); // maybe should be emulator_2_b? It wouldn't compile
    write(fd, &emulator_2_emulator_2, sizeof(emulator_2_emulator_2));
    write(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    enterprise_ready_2(fd);
    return 0; // TODO return something more meaningful
}
