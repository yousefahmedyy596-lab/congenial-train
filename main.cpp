
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x;
    cin >> x;
    
    int mn = x;
    
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < mn) {
            mn = x;
        }
    }
    
    cout << mn;
    
    return 0;
}
