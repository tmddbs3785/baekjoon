#include <iostream>

using namespace std;

int main()
{
    int n;
    int res;
    int final_res = 100; // origin value setting
    int origin_n;
    int i = 0;

    cin >> n ;

    origin_n = n;

    while(origin_n!=final_res){
        res = n/10 + n%10;
        final_res = n % 10 * 10 + res % 10;
        n = final_res;

        i++;
    }

    cout << i << endl;


    return 0;
}
