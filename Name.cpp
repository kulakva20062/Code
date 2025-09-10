#include <iostream>

using namespace std;

int a[1000][1000],b[1000][1000],c[1000][1000];

int main()
{
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    for(int i=0;i<a1;i++) for(int j=0;j<a2;j++) cin >> a[i][j];
    for(int i=0;i<a2;i++) for(int j=0;j<a3;j++)  cin >> b[i][j];
    for(int i=0;i<a1;i++) 
    {
        for(int j=0;j<a3;j++)
        {
            for(int k = 0;k<a2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<a1;i++) 
    {
        cout << c[i][0];
        for(int j=1;j<a3;j++)
        {

            cout << ' ' << c[i][j];
        }
        cout << '\n';
    }
}   