#include "math.h"
#include "game.h"
#include <stdio.h>

// function building syntax

// declaration | implementation

// declaration
// return_type identifier(args);   args = (type identifier, type identifer)

// Function Lifecycle
// 1 declaration
// 2 implementation
// 3 calling

// Functions  | declaration, args, implementation, calling
// Headers and Implementation files

int main() {
    printf("Hello World!\n");

    int res1 = Add2Numbers(2, 5);
    printf("%d\n", res1);

    int res2 = Add2Numbers(2, 2);
    printf("%d\n", res2);

    int res3 = Add2Numbers(2, 100);
    printf("%d\n", res3);

    return 0;
}

