
#include <unistd.h>
#include "cloud_2.h"

ssize_t blockchain_2(int fd) {
    char a = 99, blockchain_2_b = 114, blockchain_2_blockchain_2 = 105;
    for (int i = 0; i < 3; i++){
        a++; blockchain_2_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    blockchain_2_blockchain_2 -= 3 * -1;
    char size = '3';
    write(fd, &size, sizeof(size));
    char newline[] = "\r\n";
    write(fd, newline, sizeof(newline)-1);
    write(fd, &a, sizeof(a));
    write(fd, &blockchain_2_b, sizeof(a)); // maybe should be blockchain_2_b? It wouldn't compile
    write(fd, &blockchain_2_blockchain_2, sizeof(blockchain_2_blockchain_2));
    write(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    cloud_2(fd);
    return 0; // TODO return something more meaningful
}
