

#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 10> masuv {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
    int найбiльший = masuv[0];
    int найменший = masuv[0];
    for (int i = 0;i < masuv.size();i++) {
        if(masuv.at(i) > найбiльший){
            найбiльший = masuv.at(i);
 
        }
        if (masuv.at(i) < найменший) {
            найменший = masuv.at(i);
        }
    }
    cout << найбiльший << endl;
    cout << найменший;
}

