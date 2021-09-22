#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    int c=0;
    int result=0;
    char arr[80] ={0,};

    cin >> n;

    for(i=0;i<n;i++){
        cin >> arr;
        for(j=0;j<80;j++){
            if(arr[j]=='O') c++;
            else if(arr[j] == 'X') c=0;
            else break;
            result += c;
        }
        cout <<result << endl;
        c=0;
        result = 0 ;
    }


    return 0;

}
