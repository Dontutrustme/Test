#include <iostream>
using namespace std;

bool isEven(int& value) {
    return (value & 1) == 0;
}
//bool isEven(int value){return value%2==0;}

int main() {
    int number=0;
    cin>>number;

    cout<<isEven(number)<<std::endl;

}
