#include<bits/stdc++.h>

using namespace std;

void boxBricks(int n)
{

     for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
           int  ans += h;
        }

        int box = ans/ n;
        int brixk = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] > box)
                brixk += h[i] - box;
        }

        cout << "Set #" << cnt  << endl;
        cout << "The minimum number of moves is " << brixk << "." << endl << endl;
}

int main()
{

    int n;
    int cnt = 0;

    while (cin >> n) {
        if (n == 0) break;

        cnt++;
        int h[n];

        boxBricks(n);


    }

    return 0;
}


