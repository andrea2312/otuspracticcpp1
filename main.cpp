
#include <iostream>
#include "lib.h"

int main()
{
    // auto logger = spdlog::stdout_logger_mt("console");
    // logger->info("version {} was started", version());

    using namespace std;

    cout<< "build " << mylib::version() << "\n";
    cout<< "Hello, World!" << endl;

    return 0;
}
