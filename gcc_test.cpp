#include <iostream>
using std::cout;

int main(void){
    const int a[] = {8,9,0};
    cout << a << "\n";
    cout << *(a + 0) << "\n";
    cout << *(a + 1) << "\n";
    cout << *(a + 2) << "\n";

    const char * b = "hoge";
    cout << b << "\n";
    cout << *(b + 0) << "\n";
    cout << *(b + 1) << "\n";
    cout << *(b + 2) << "\n";

    return 0;
}