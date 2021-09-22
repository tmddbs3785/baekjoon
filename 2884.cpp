#include <iostream>

using namespace std;

int main()
{
    int hour, minute;

    cin >> hour >> minute;

    if(minute < 45){
        hour--;
        minute += 15;
        if(hour == -1) hour = 23;
    }
    else{
        minute -= 45;

    }

    cout << hour << " " << minute << endl;

    return 0;
}
