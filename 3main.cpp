#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
ifstream a("input.txt");
string b, c;
int n;
getline( a, b );
int m = 1;
int k = 1;
n = 0;
for ( int i = 1; i <= b.length(); i++ )
{
    if ( b[i] == b[i-1] )
{
k ++;
if ( k > m )
{
    m = k;
    c = b[i];
}
}
    else 
{
    k = 1;
}
}
    cout << c << " " << m;
}