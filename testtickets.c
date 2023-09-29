#include "types.h"
#include "stat.h"
#include "user.h"


int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf(1, "Usage: settickets [number]\n");
        exit();
    }

    printf(1, "Tickets: %d\n", gettickets());
  
    int n = atoi(argv[1]);
    if(settickets(n) == 0) {
        printf(1, "Tickets set to %d for the current process\n", n);
    } else {
        printf(1, "Error setting tickets\n");
    }

    printf(1, "Tickets: %d\n", gettickets());


    exit();
}
