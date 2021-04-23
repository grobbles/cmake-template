#pragma once

#include <set>
#include <string>

using namespace std;

class Math {

  private:
    const string logtag = "Math";

  public:
    Math();
    ~Math();

    int sub(int x, int y);
};