#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int num)
{
    if(num < 2) {
        return false; 
        
    }
    if(num == 2) {
        return true;
        }
    if(num % 2 == 0) {
        return false; 
        
    }
    for(int i = 3; i <= sqrt(num); i += 2)
    {
        if(num % i == 0) {
            return false;
            }
    }
    return true;
}

int main()
{
    int f, t;
    cin >> f >> t;

    for (int i = f; i <= t; ++i) {
        if(i % 2 == 0){
            int k = sqrt(i/2);
            if (k*k*2 == i and isPrime(k)){
                cout  << i << endl;
            }
        }
    }
    return 0;
}