#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stack>

using namespace std;

void print_stack(stack<int> src)
{
    stack<int> stcopy = src;
    while (!stcopy.empty())
    {
        cout << stcopy.top() << " ";
        stcopy.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> nums;
    string k;
    bool n = false;
    while (cin >> k)
    {
        if (k == "+")
        {
            if (nums.size() < 2)
            {
                n = true;
                break;
            }
            int b = nums.top(); nums.pop();
            int a = nums.top(); nums.pop();
            nums.push(a + b);
        }
        else if (k == "-")
        {
            if (nums.size() < 2)
            {
                n = true;
                break;
            }
            int b = nums.top(); nums.pop();
            int a = nums.top(); nums.pop();
            nums.push(a - b);
        }
        else if (k == "*")
        {
            if (nums.size() < 2)
            {
                n = true;
                break;
            }
            int b = nums.top(); nums.pop();
            int a = nums.top(); nums.pop();
            nums.push(a * b);
        }
        else if (k == "/")
        {
            if (nums.size() < 2)
            {
                n = true;
                break;
            }
            int b = nums.top(); nums.pop();
            if (b == 0)
            {
                n = true;
                break;
            }
            int a = nums.top(); nums.pop();
            nums.push(a / b);
        }
        else
        {
            nums.push(stoi(k));
        }
    }
    
    if (!n)
    {
        cout << nums.top();
    }
    else 
    {
        cout << "ERROR";
    }

    return 0;
}