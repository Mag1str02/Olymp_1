#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, k, snum, tmp;
bool was;
vector<char> sym;
vector<int> symnum;
char* perm;
void gen(int pos)
{
    if(pos == n)
    {
        for(int i = 0; i < n; ++i)
        {
            cout << perm[i];
        }
        cout << endl;
        return;
    }

    for(int i = 0; i < sym.size(); ++i)
    {
        tmp = 0;
        for(int g = 0; g < pos; ++g)
        {
            if(perm[g] == sym[i])tmp++;
        }
        if(tmp < symnum[i])
        {
            perm[pos] = sym[i];
            gen(pos + 1);
        }

    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    n = s.size();
    perm = new char[n];
    for(int i = 0; i < n; ++i)
    {
        was = false;
        for(int g = 0; g < sym.size(); ++g)
        {
            if(s[i] == sym[g])
            {
                tmp = g;
                was = true;
            }
        }
        if(!was)
        {
            sym.push_back(s[i]);
            symnum.push_back(1);
        }
        else
        {
            symnum[tmp]++;
        }vector<char> sym;
    }
    /*
    for(int i = 0; i < sym.size(); ++i)
    {
        cout << sym[i] << " " << symnum[i] << endl;
    }
    cout << endl << endl;
    */
    gen(0);
}


