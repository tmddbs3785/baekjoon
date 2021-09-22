#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
    int i=0;
    long long sum = 0;
    for(i=0; i<a.size(); i++){
        sum += a.at(i);
    }

    return sum;
}
/*
int main()
{
    int i;
    vector<int> a(3000000);
    //sum(n);

    return 0;

}

*/
