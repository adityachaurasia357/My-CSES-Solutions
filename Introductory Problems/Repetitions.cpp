#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;  // Input string
    ll n = s.length();  // Length of the string
    ll cur = 1;  // Current streak of consecutive characters
    ll best = 1;  // Best streak (max consecutive characters)

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cur++;  // Increase the streak if current character equals previous one
        } else {
            best = max(best, cur);  // Update best streak if current streak is larger
            cur = 1;  // Reset current streak
        }
    }

    best = max(best, cur);  // After the loop, check the last streak
    cout << best;  // Output the best streak length

    return 0;
}

/* Equivalent Java Code:
import java.util.Scanner;

public class LongestConsecutiveSequence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();  // Input string
        int n = s.length();  // Length of the string
        int cur = 1;  // Current streak of consecutive characters
        int best = 1;  // Best streak (max consecutive characters)

        for (int i = 1; i < n; i++) {
            if (s.charAt(i) == s.charAt(i - 1)) {
                cur++;  // Increase the streak if current character equals previous one
            } else {
                best = Math.max(best, cur);  // Update best streak if current streak is larger
                cur = 1;  // Reset current streak
            }
        }

        best = Math.max(best, cur);  // After the loop, check the last streak
        System.out.println(best);  // Output the best streak length
    }
}
*/

/* Equivalent Python Code:
s = input()  # Input string
n = len(s)  # Length of the string
cur = 1  # Current streak of consecutive characters
best = 1  # Best streak (max consecutive characters)

for i in range(1, n):
    if s[i] == s[i - 1]:
        cur += 1  # Increase the streak if current character equals previous one
    else:
        best = max(best, cur)  # Update best streak if current streak is larger
        cur = 1  # Reset current streak

best = max(best, cur)  # After the loop, check the last streak
print(best)  # Output the best streak length
*/
