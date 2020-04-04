#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, k;
int* perm;
void gen(int pos)
{
    if(pos == n)
    {
        for(int i  =  0; i < n; ++i)
        {
            cout << perm[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 1; i <= k; ++i)
    {
        perm[pos] = i;
        gen(pos + 1);
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> k;
    perm = new int[n];
    gen(0);
}
