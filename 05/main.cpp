#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/filesystem.hpp>
int main() {
    boost::shared_ptr<int> bspi(new int(12));
    std::cout << "int val: " << *bspi << std::endl;
    boost::filesystem::path path = "~/test/";
    if (path.is_relative()) {
        std::cout << "Path is relative" << std::endl;
    }
    else {
        std::cout << "Path is not relative" << std::endl;
    }
    return 0;
}
