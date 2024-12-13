#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
char a[8][8];
int cnt = 0;
void rec(int h, int v, int mdig, int nmdig) {
    if (h == 8)
    {
        cnt++;
        return;
    }
    for (int c = 0; c < 8; c++) 
    {
        int dig1 = h - c + 7;
        int dig2 = h + c;
        if (a[h][c] == '.' && !(v & (1 << c)) && !(mdig & (1 << dig1)) && !(nmdig & (1 << dig2))) 
        {
            rec(h + 1, v | (1 << c), mdig | (1 << dig1), nmdig | (1 << dig2));
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    for (int i = 0; i < 8; i++)for(int x = 0; x < 8; x++)cin >> a[i][x];
    rec(0, 0, 0, 0);
    cout << cnt;
    return 0;
}

// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
