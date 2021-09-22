#include <iostream>
using namespace std;

int main()
{
    int arr[42] ={0,};
    int i,j;
    int n;
    int c=0;

    for(i=0;i<10;i++){
        cin >> n;
        for(j=0;j<42;j++){
            if(n%42==j) arr[j]++;
        }
    }

    for(i=0; i<42; i++){
        if(arr[i]!=0){
            c++;
        }

    }

    cout << c << endl;

    return 0;
}
