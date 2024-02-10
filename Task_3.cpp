#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Sorting(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    vector<int> ex = {4, 2, 7, 1, 9, 5, 3};
    Sorting(ex);

    for (const auto& i : ex) {
        cout << i << " ";
    }

}