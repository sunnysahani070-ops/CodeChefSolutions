#include <iostream>
using namespace std;

void f()
{
    int w,x,y,z;
    cin >> w >> x >> y >> z;
    if((w+x)%2==(y+z)%2)
    cout << "yes\n";
    else
    cout << "no\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        f();
    }
	return 0;
}