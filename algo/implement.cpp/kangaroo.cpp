#include<iostream>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    int n1 = x1, n2 = x2;
    while(1){
        if(x1 > x2 && v1 > v2) return "NO";
        if(x1 < x2 && v1 < v2) return "NO";

        n1 += v1;
        n2 += v2;
        if(n1 == n2) return "YES";
// when the faster kangaroo does't reach same point of slower kangarroo
        if(x1 < x2 && n1 > n2) return "NO";
        if(x1 > x2 && n1 < n2) return "NO";

    }

}

int main()
{

    return 0;
}
