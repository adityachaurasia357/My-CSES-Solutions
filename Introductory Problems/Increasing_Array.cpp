#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, maxNum, sum = 0, num;
    cin >> n;
    cin >> maxNum;
    for (int i = 1; i < n; i++)
    {
        cin >> num;
        maxNum = max(maxNum, num);
        sum += maxNum - num;
    }
    cout << sum;
    return 0;
}

/*
Equivalent Java Code:

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long maxNum = sc.nextLong();
        long sum = 0;
        
        for (int i = 1; i < n; i++) {
            long num = sc.nextLong();
            maxNum = Math.max(maxNum, num);
            sum += maxNum - num;
        }
        
        System.out.println(sum);
    }
}

Equivalent Python Code:

n = int(input())
maxNum = int(input())
sum_ = 0

for _ in range(1, n):
    num = int(input())
    maxNum = max(maxNum, num)
    sum_ += maxNum - num

print(sum_)
*/
