#include <iostream>
using namespace std;

 
int main()
{
    long long int i, x, n, m, d, f, a[100000];

    while (cin >> n >> m >> d)
    {
        int res = 0;

        for (i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        cin >> f;

        for (i = 0; i < m; i++)
        {
            x = a[i] ^ f;
            int count = 0;
            while (x > 0)
            {
                count += (x & 1);
                x >>= 1;
            }
            if (count <= d)
            {
                res++;
            }
        }

        cout << res << endl;
    }

    return 0;
}
