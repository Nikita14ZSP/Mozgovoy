#include <iostream>

using namespace std;

int main()
{
    int x, m, i1, imax, sum, n;
    
    cin >> x >> m;
    sum = 0;
    imax = x;
    
    for (int i = x; i <= m; i++ ) {
        
        if ( i % 2 != 0 )
            continue;

        i1 = i;
        n = 0;
        while ( i1 != 0 ) {
            n += i1 % 2;
            i1 = i1 / 2;
        }
        if (n != 5)
            continue;

        if (i % 10 == 0)
            continue;

        sum += 1;
        imax = max(imax, i);
    }
    if ( sum != 0 ) {
        cout << sum << ' ' << imax;
    }
    else {
        cout << sum << " 0";
    }
    
}