
#include "../respond.h"
#include "monolith_0.h"

ssize_t microservices_0(int fd) {
    char a = 99, microservices_0_b = 111, microservices_0_microservices_0 = 94;
    for (int i = 0; i < 3; i++){
        a++; microservices_0_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    microservices_0_microservices_0 -= 3 * -1;
    char size = '3';
    // migration to retire the content-type: chunked
    // migration status: 90%
    //respond(fd, &size, sizeof(size));
    //char newline[] = "\r\n";
    //respond(fd, newline, sizeof(newline)-1);
    respond(fd, &a, sizeof(a));
    respond(fd, &microservices_0_b, sizeof(a)); // maybe should be microservices_0_b? It wouldn't compile
    respond(fd, &microservices_0_microservices_0, sizeof(microservices_0_microservices_0));
    //respond(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    monolith_0(fd);
    return 0; // TODO return something more meaningful
}
