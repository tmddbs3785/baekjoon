#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[9];
    int max = 0;
    int max_n = 0;

    for(i=0; i<9; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
            max_n = i+1;
        }
    }

    cout << max << endl << max_n << endl;

    return 0;
}
