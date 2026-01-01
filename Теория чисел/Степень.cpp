#include <iostream>
#include <map>

using namespace std;

map<unsigned int, unsigned int> factor(unsigned int A)
{
    map<unsigned int,unsigned int> m;
    while(A%2 == 0) { m[2]++; A /= 2; };
    for(unsigned int i = 3; i*i <= A; i += 2)
    {
        while(A%i == 0) { m[i]++; A /= i; };
    }
    if (A != 1) m[A]++;
    return m;
}

int main(int argc, const char * argv[])
{
    unsigned int A;
    cin >> A;
    if (A == 1) { cout << "1\n"; return 0; }
    auto m = factor(A);
    unsigned int p = 1;
    unsigned int e = 0;
    for(const auto& v: m)
    {
        p *= v.first;
        if (v.second > e) e = v.second;
    }
    if (p < e)
    {
        unsigned int N = ((e+p-1)/p)*p;
        unsigned int M = p, k = 1;

        while(M*k < e)
        {
            for(const auto& v: m)
            {
                if (v.second == e)
                {
                    M *= v.first;
                    k++;
                }
            }
        }
        cout << ((M < N) ? M : N) << endl;
    }
    else cout << p << endl;
}