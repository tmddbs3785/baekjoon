#include <iostream>
using namespace std;

int main()
{
     int a,b,c;
     int multi;
     int counting[10] = {0,};
     int i,j;

     cin >> a >> b >> c ;

     multi = a*b*c;

     for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(multi%10 == j) counting[j]++;
        }
        multi/=10;
        if(multi==0 && multi%10==0) break;
     }
     for(i=0;i<10;i++)
        cout << counting[i] << endl;

    return 0;

}
