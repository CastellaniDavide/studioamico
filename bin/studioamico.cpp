#include <bits/stdc++.h>
using namespace std;

vector <int> a1, a2;

bool associabili(int N, int* v1, int* v2) {
    a1.resize(N);
    a2.resize(N);

    for (int i = 0; i < N; ++i)
    {
        a1[i] = v1[i];
        a2[i] = v2[i];
    }

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    for (int i = 0; i < N; ++i)
        if (a2[i] <= a1[i])
            return false;

    return true;
}
