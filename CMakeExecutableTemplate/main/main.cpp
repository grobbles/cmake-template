#include <fstream>
#include <iostream>
#include <string>

#include "Module/Module.hpp"
#include "main/Math.hpp"

using namespace std;

int main(int argc, char* argv[]) {

    Module* module = new Module();
    cout << "1 + 2 = " << module->add(1, 2) << std::endl;

    Math* math = new Math();
    cout << "4 - 3 = " << math->sub(4, 2) << std::endl;

    return 0;
}
