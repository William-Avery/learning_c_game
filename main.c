#include <stdio.h>
#include <openssl/rand.h>


int main(int, char**){

    unsigned char buf[16];

    // RAND_bytes produces cryptographically secure random bytes.
    // Returns 1 on success, 0 otherwise.
    if (RAND_bytes(buf, sizeof(buf)) != 1) {
        fprintf(stderr, "ERROR: RAND_bytes failed.\n");
        return 1;
    }

    return 0;
}
