
#include <iostream>
#include "lib.h"

int main()
{
    using namespace std;

    cout<< "build " << mylib::version() << "\n";
    cout<< "Hello, World!" << endl;

    return 0;
}
