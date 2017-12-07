//
// Created by xhu on 17-11-29.
//
#include "ex7_05.h"
#include <iostream>
#include <string>

int main() {
    Person p;
    std::string &name = p.getName();
    std::string &address = p.getAddress();
    name = "y";
    address = "y";
    std::cout << p.getName() << p.getAddress() << std::endl;
}

