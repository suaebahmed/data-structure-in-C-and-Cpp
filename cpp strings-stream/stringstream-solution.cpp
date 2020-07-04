#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> arr;
    stringstream ss(str);
    int a;
    char ch;
    while(ss>>a){
        arr.push_back(a);
        ss >> ch;
    }
    return arr;
}

int main() {
    string str;  // 293,489,390
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
