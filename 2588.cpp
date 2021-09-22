#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int result_n1;
    int result_n2;
    int result_n3;
    int result_n4;


    cin >> num1 >> num2;

    result_n1 = num1 * (num2 % 10);
    result_n2 = num1 * (num2 % 100 / 10);
    result_n3 = num1 * (num2 % 1000 / 100);

    result_n4 = result_n1 + result_n2*10 + result_n3*100;

    cout << result_n1 << endl;
    cout << result_n2 << endl;
    cout << result_n3 << endl;
    cout << result_n4 << endl;


    return 0;
}
