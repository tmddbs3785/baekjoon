#include <iostream>
using namespace std;

int main()
{
    int t,n;
    int s[1000]={0};
    int i,j;
    double total=0, p=0;
    int c=0;

    cin >> t;

    cout <<fixed;
    cout.precision(3);

    for(i=0;i<t;i++){
        cin >> n;
        for(j=0;j<n;j++){
            cin >> s[j];
            total += s[j];
        }
        total /= n ;

        for(j=0;j<n;j++){
            if(s[j] > total) c++;
        }

        p = double(c)/n * 100;

        cout << p << "%" << endl;

        c=0;
        total = 0;
    }

    return 0;

}
