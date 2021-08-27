#include "iter.hpp"

int main() {
    int boo[] = {1, 2, 3, 4, 5};
    std::string bla[3] = {"bla1", "bla2", "bla3"};
    float empty[] = {1.12343};

    iter(boo, 5, toPrint);
    iter(bla, 3, toPrint);
    iter(empty, 1, toPrint);
}
