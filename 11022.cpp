#include <iostream>

using namespace std;

int main()
{
    int A, B, T;
    int i;
    cin >> T;
    for(i=0; i<T; i++){
        cin >> A >> B;
        cout << "Case #" << i+1 << ": " << A << " + " << B << " = " << A+B << endl;

    }
    return 0;
}
