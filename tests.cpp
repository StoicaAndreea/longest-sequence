#include"tests.h"
#include "subalg.h"
#include<assert.h>
void tests()
{
    int v[10] = { 1,2,3,1,2,4,5,0 };
    int start = 0, finish = 0;
    longest1(start, finish, v, 8);
    assert(start == 3);
    assert(finish == 6);

    int b[10] = { 1,2,3,4,1,2,3 };
    longest1(start, finish, b, 7);
    assert(start == 0);
    assert(finish == 3);

    int c[10] = { 1,1,1,1,1 };
    longest1(start, finish, c, 5);
    assert(start == 0);
    assert(finish == 0);
    longest8(start, finish, c, 5);
    assert(start == 0);
    assert(finish == 0);

    int d[10] = { 1 };
    longest1(start, finish, d, 1);
    assert(start == 0);
    assert(finish == 0);

    longest8(start, finish, d, 1);
    assert(start == 0);
    assert(finish == 0);

    int e[10] = { 1,2,3,4,5 };
    longest1(start, finish, e, 5);
    assert(start == 0);
    assert(finish == 4);

    int f[10] = { 1,-1,1,-1,1 };
    longest8(start, finish, f, 5);
    assert(start == 0);
    assert(finish == 4);

    int a[10] = { 1, -8, 2,-3,-4 };
    longest8(start, finish, a, 5);
    assert(start == 0);
    assert(finish == 3);
}