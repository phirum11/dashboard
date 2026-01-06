#include <iostream>
using namespace std;
int sumAloop(int n) {
    // return n*(n+1)/2; 
    int sum =0 ; 
    for (int i =0 ; i<=n ; i++){
        sum += i;
    }
    return sum;     
}
int main() {
    int n;
    cout <<"n: ";
    cin >> n;
    cout << "Sum = " << sumAloop(n) << endl;
    return 0;
}
