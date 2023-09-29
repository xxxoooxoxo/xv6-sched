#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    printf(1, "Current write count: %d\n", writecount());

    if(argc == 2){
        int new_count = atoi(argv[1]);
        setwritecount(new_count);
        printf(1, "Updated write count to: %d\n", writecount());
    }

    exit();
}
