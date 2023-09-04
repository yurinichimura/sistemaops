#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t childpid = 0;
    int i, n = 100; 

    for (i = 1; i < n; i++) {
        if ((childpid = fork()) == -1) {
            perror("Erro ao criar um processo filho");
            return 1;
        }

            if (childpid == 0) {
      
            fprintf(stderr, "i: %d ProcessID: %ld ParentID: %ld ChildID: %ld\n",
                    i, (long)getpid(), (long)getppid(), (long)childpid);
            break;
        }
    }

    return 0;
}
# sistemaops
