#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        if (s.length()< 10) cout << s << endl;
        else
            cout << s[0] << s.length() - 2 << s[s.length()-1] << endl;
    }
    return 0;
}