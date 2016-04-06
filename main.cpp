//// $Id: main.cpp,v 1.51 2016-04-04 16:22:21-07 - - $
//
#include <cassert>
#include <deque>
#include <iostream>
#include <stdexcept>
#include <unordered_map>
#include <utility>
using namespace std;

#include <unistd.h>

#include "bigint.h"
#include "debug.h"
#include "general.h"
#include "iterstack.h"
#include "libfns.h"
#include "scanner.h"
//
//using bigint_stack = iterstack<bigint>;
//

int main (int argc, char** argv) {
    bigint tester1 = bigint(-3);
    bigint tester2 = bigint(3);
    bigint tester3 = tester1 * tester2;
    cout << tester3;
    return 0;
}
