#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, k;
int* perm;
void gen(int pos, int cnt1)
{

    if(pos == n)
    {
        for(int i  =  0; i < n; ++i)
        {
            cout << perm[i];
        }
        cout << endl;
        return;
    }
    if(cnt1 + (n - pos - 1) >= k)
    {
        perm[pos] = 0;
        gen(pos + 1, cnt1);
    }
    if(cnt1 + 1 <= k)
    {
        perm[pos] = 1;
        gen(pos + 1, cnt1 + 1);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> k;
    perm = new int[n];
    gen(0,0);
}

