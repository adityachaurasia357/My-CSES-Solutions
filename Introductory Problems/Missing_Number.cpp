#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, num, xnum = 0;
    cin >> n;
    
    // XOR all the input numbers
    for (int i = 1; i < n; i++) {
        cin >> num;
        xnum ^= num;
    }

    // XOR all the numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xnum ^= i;
    }
    
    cout << xnum;  // The missing number will be in xnum
    return 0;
}

/* Equivalent Java Code:
import java.util.Scanner;

public class MissingNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long xnum = 0;
        
        // XOR all the input numbers
        for (int i = 1; i < n; i++) {
            long num = sc.nextLong();
            xnum ^= num;
        }

        // XOR all the numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            xnum ^= i;
        }
        
        System.out.println(xnum);  // The missing number will be in xnum
    }
}
*/

/* Equivalent Python Code:
n = int(input())
xnum = 0

# XOR all the input numbers
for i in range(1, n):
    num = int(input())
    xnum ^= num

# XOR all the numbers from 1 to n
for i in range(1, n + 1):
    xnum ^= i

print(xnum)  # The missing number will be in xnum
*/
