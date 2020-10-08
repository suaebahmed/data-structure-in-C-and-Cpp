#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (a > b)
            swap(a, b);
        else if (a == b) {
            cout <<a * (n - 1) << endl;
            continue;
        }
        cout<<" continue "<<endl;
        for (int i = 0; i < n; i++) {
            cout << a * (n - 1) + i * (b - a) << ' ';
        }
        cout << endl;
    }
}
