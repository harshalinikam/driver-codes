#include <iostream>

#include<bits/stdc++.h>
using namespace std;

void solve (int opening_hh, int opening_mm, int duration_hh, int duration_mm) {
    // Your code goes here
      int min=opening_mm+duration_mm;
      int hr=opening_hr+duration_hr; 
      hr=hr+(min/60);
      min=min%60;
      hr=hr%24;
     cout<<hr<<""<<mm;


    // Print the output here
}

// The main function reads the input in the required format.
// Just complete the solve function above.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        solve(a, b, c, d);
        cout << "\n";
    }
}
