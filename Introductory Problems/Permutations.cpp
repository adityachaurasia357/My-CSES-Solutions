#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    if(n==1){
        cout << "1";
    }
    else if(n<=3){
        cout << "NO SOLUTION";
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout << i << " ";
        }

        for(int i=1;i<=n;i+=2){
            cout << i << " ";
        }
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
        
        if (n == 1) {
            System.out.print("1");
        } else if (n <= 3) {
            System.out.print("NO SOLUTION");
        } else {
            for (long i = 2; i <= n; i += 2) {
                System.out.print(i + " ");
            }
            for (long i = 1; i <= n; i += 2) {
                System.out.print(i + " ");
            }
        }
    }
}

Equivalent Python Code:

n = int(input())

if n == 1:
    print("1")
elif n <= 3:
    print("NO SOLUTION")
else:
    for i in range(2, n + 1, 2):
        print(i, end=" ")
    for i in range(1, n + 1, 2):
        print(i, end=" ")
*/
