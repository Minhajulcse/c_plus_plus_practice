// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> factorial (int n){
    vector <int> fact;
    fact.push_back(1);
    for(int value = 2; value <= n; value++){
        int carry = 0;
        for(int j = 0; j < fact.size(); j++){
            int temp = fact[j] * value;
            temp += carry;
            fact[j]  = temp % 10;
            carry = temp / 10;
        }
        while(carry > 0){
            fact.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse (fact.begin(), fact.end());
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);
    vector <int> ans = factorial(n);
    for(int i : ans) cout << i;
    cout << endl;

    return 0;
}
