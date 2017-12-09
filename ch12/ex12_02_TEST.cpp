#include "ex12_02.h"
#include <iostream>

int main()
{
    const StrBlob csb{"hello", "world", "pezy"};
    StrBlob sb{"hello", "world", "Mooophy"};

    // const限定的类类型的对象：数据成员变成常量；只有const成员函数可用。

    std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "pezy";
    std::cout << sb.front() << " " << sb.back() << std::endl;
}
