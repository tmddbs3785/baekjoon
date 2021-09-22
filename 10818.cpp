#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int arr=0;
    int min=1000000;
    int max=-1000000;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> arr;
        if(arr < min) min = arr;
        if(arr > max) max = arr;
    }

    cout << min << " " << max << endl;

    return 0;
}
