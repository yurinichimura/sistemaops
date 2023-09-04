#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    pid_t childpid = 0;
    int i, n = 100;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s processes\n", argv[0]);
        return 1;
    }

    n = atoi(argv[1]);

    for (i = 1; i < n; i++) {
        if ((childpid = fork()) == -1) {
            perror("fork"); 
            return 1;
        }

        if (childpid == 0) {
         
            fprintf(stderr, "Child: i:%d process ID:%ld parent ID:%ld\n",
                    i, (long)getpid(), (long)getppid());
            break;
        } else {
            // 
            fprintf(stderr, "Parent: i:%d process ID:%ld\n",
                    i, (long)getpid());
        }
    }

    return 0;
}


