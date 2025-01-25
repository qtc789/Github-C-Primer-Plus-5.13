// 5.13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
const int ArSize = 20;

int main()
{
    using namespace std;
    char name[ArSize];
    cout << "your first name,please:   ";
    cin >> name;
    cout << "here is your name, asii:\n";
    int i = 0;
    while (name[i]!='\0')
    {
        cout << name[i] << ":   " << int(name[i]) << endl;
        i++;

    }
}

