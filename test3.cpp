#include <iostream>
#include <sstream>
int main()
{
    std :: string s;
    getline(std:: cin, s);
    std:: stringstream ss;
    ss.str(s);
    std:: string tmp;
    while(ss >> tmp)
    {
        std:: cout << tmp << std::endl;
    }
    // >> push ra màn hình
    // << thêm vào trong stringstream
    // str() : gán string vào
    // clear() : làm rỗng
}