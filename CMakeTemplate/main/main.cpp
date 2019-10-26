#include <fstream>
#include <iostream>
#include <string>
#include "Module/Module.hpp"

using namespace std;

int main(int argc, char* argv[]) {

    Module* module = new Module();
    int x = module->add(1, 2);

    return 0;
}
