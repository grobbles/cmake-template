#include "Module/Module.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {

    Module* module = new Module();
    int x = module->add(1, 2);

    return 0;
}
