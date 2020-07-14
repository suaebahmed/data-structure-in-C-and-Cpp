#include <iostream>
#include <math.h>
#define MAX 100000

using namespace std;

int binary_search()
{
    int low = 0;
    int high = n-1;
    int mid;

    while(low<=high)
    {
        mid = floor((low+high)/2);
        if(target > arr[mid])
            low = mid+1;
        else if(target < arr[mid])
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main() {

    return 0;
}
