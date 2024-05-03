#include<iostream>
#include<string>
#include<algorithm> // for std::transform
using namespace std;

int main() {
    string s = "";
    int t;

    cin >> t;

    cin >> s;

    // Convert the string to uppercase
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    int arr[26] = {0}; // Initialize array with zeros
    int cnt = 0;

    for (char c : s) {
        if (isalpha(c)) {
            arr[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (i + 1 >= arr[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}