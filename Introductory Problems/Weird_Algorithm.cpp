#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    
    while (n > 1) {
        cout << n << " ";  // Print current value of n
        if (n & 1) {  // If n is odd
            n = (n * 3) + 1;  // Apply the formula for odd n
        } else {
            n >>= 1;  // Divide n by 2 for even n
        }
    }
    cout << n;  // Output the final value of n (which will be 1)
    return 0;
}

/* Equivalent Java Code:
import java.util.Scanner;

public class CollatzConjecture {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        
        while (n > 1) {
            System.out.print(n + " ");  // Print current value of n
            if (n % 2 == 1) {  // If n is odd
                n = (n * 3) + 1;  // Apply the formula for odd n
            } else {
                n /= 2;  // Divide n by 2 for even n
            }
        }
        System.out.print(n);  // Output the final value of n (which will be 1)
    }
}
*/

/* Equivalent Python Code:
n = int(input())

while n > 1:
    print(n, end=" ")  # Print current value of n
    if n % 2 == 1:  # If n is odd
        n = (n * 3) + 1  # Apply the formula for odd n
    else:
        n //= 2  # Divide n by 2 for even n
print(n)  # Output the final value of n (which will be 1)
*/
