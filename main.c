#include <stdio.h>
#include <stdlib.h>

#include "assertion.h"

int main()
{
    setupTestEnv();

    assert(0,1);
    assert(0,0);
    deny(0,1);
    deny(0,0);

    assertStr("123", "12");
    denyStr("123", "12");

    assert( 2 + 2, 5);

    return 0;
}
