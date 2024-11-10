#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    while(n-- > 0) {
        ll x, y;
        cin >> x >> y;

        ll res;
        
        if (x >= y) {
            if (x&1) {
                res =  (x - 1) * (x - 1) + y;
            } else {
                res = x * x -y+1;
            }
        } else {
            if (y &1) {
                res = y * y - x + 1;
            } else {
                res = (y - 1) * (y - 1) + x;
            }
        }
        
        cout << res << "\n";
    }
    return 0;
}

/*
Equivalent Java Code:

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        
        while (n-- > 0) {
            long x = sc.nextLong();
            long y = sc.nextLong();

            long res;

            if (x >= y) {
                if (x % 2 == 1) {
                    res = (x - 1) * (x - 1) + y;
                } else {
                    res = x * x - y + 1;
                }
            } else {
                if (y % 2 == 1) {
                    res = y * y - x + 1;
                } else {
                    res = (y - 1) * (y - 1) + x;
                }
            }

            System.out.println(res);
        }
    }
}

Equivalent Python Code:

n = int(input())

for _ in range(n):
    x, y = map(int, input().split())

    if x >= y:
        if x % 2 == 1:
            res = (x - 1) * (x - 1) + y
        else:
            res = x * x - y + 1
    else:
        if y % 2 == 1:
            res = y * y - x + 1
        else:
            res = (y - 1) * (y - 1) + x

    print(res)
*/
