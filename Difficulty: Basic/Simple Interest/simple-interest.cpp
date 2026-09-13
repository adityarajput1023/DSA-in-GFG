#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int p, r, t;
    cin >> p >> r >> t;

    // code here
    double interest;
    interest=((p*r*t)/100.00);
    
    cout<<fixed<<setprecision(2)<<interest;

    return 0;
}