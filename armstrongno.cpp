#include<iostream>
#include<cmath> // Use <cmath> for C++ style
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    int orinum = n;

    while (n > 0) {
        int digit = n % 10;
        sum += static_cast<int>(pow(digit, 3)); // Cast the result to int
        n = n / 10;
    }
    
    if (sum == orinum) {
        cout << "Armstrong no" << endl;
    } else {
        cout << "Non Armstrong no" << endl;
    }

    return 0;
}
