#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s1,s2,s3;
    s1.push(3);
    s1.push(2);
    s1.push(1);
    s1.push(1);
    s1.push(1);

    s2.push(2);
    s2.push(3);
    s2.push(4);

    s3.push(1);
    s3.push(4);
    s3.push(1);
    s3.push(1);

    int sum1= 8,sum2 = 9,sum3 = 7;

    while((sum1 != sum2 || sum1 != sum3) && !s3.empty() && !s1.empty() && !s2.empty())
    {
        if(sum1 > sum2 || sum1 > sum3)
        {
            sum1 -= s1.top();
            s1.pop();

            cout<<"sum1: "<<sum1<<endl;
        }
        else if(sum2 > sum1 || sum2 > sum3)
        {
            sum2 -= s2.top();
            s2.pop();

            cout<<"sum2: "<<sum2<<endl;
        }
        else if(sum3 > sum2 || sum3 > sum1)
        {
            sum3 -= s3.top();
            s3.pop();

            cout<<"sum3: "<<sum3<<endl;
        }
    }

    if(sum1 == sum2 && sum1 == sum3) return sum1;
    else return 0;
}
