#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, P, H, planets[100] = {0}, count = 100;
        cin >> N >> P >> H;
        int monsters[N];
        int low = 0, high = 100;
        for (int i = 0; i < N; i++)
        {
            cin >> monsters[i];
            low = monsters[i] - P * H;
            high = monsters[i] + P * H;

            for (int j = max(1, low); j <= min(high, 100); ++j)
            {
                planets[j - 1] = 1;
            }
        }
        
        for (int i = 0; i < 100; i++)
            count -= planets[i];

        cout << count << endl;
    }
    return 0;
}
