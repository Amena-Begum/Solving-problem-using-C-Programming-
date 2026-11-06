// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     cout<< n + 9999 <<endl<< n * 9999;
//     return 0;
// }
// #include <iostream>
// #include <string>
// int main() {
//     std::string n_str;
//     std::cin >> n_str;
//     long long n;

//     try {
//         n = std::stoll(n_str);
//         std::cout << n + 9999 << std::endl;
//         std::cout << n * 9999 << std::endl;
//     } catch (const std::out_of_range& oor) {
//         std::cout << n_str << std::endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>

std::string addStrings(std::string num1, std::string num2) {
    std::string result = "";
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        result += std::to_string(sum % 10);
        carry = sum / 10;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

std::string subtractStrings(std::string num1, std::string num2) {
    std::string result = "";
    int borrow = 0;
    
    std::reverse(num1.begin(), num1.end());
    std::reverse(num2.begin(), num2.end());

    int len1 = num1.length();
    int len2 = num2.length();

    for (int i = 0; i < len2; ++i) {
        int sub = ((num1[i] - '0') - (num2[i] - '0') - borrow);
        if (sub < 0) {
            sub = sub + 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += std::to_string(sub);
    }

    for (int i = len2; i < len1; ++i) {
        int sub = ((num1[i] - '0') - borrow);
        if (sub < 0) {
            sub = sub + 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += std::to_string(sub);
    }
    std::reverse(result.begin(), result.end());
    
    size_t first_digit = result.find_first_not_of('0');
    if (std::string::npos == first_digit) {
        return "0";
    }
    return result.substr(first_digit);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string n_str;
    std::cin >> n_str;

    std::string sum_result = addStrings(n_str, "9999");
    std::cout << sum_result << std::endl;

    std::string n_times_10000 = n_str + "0000";
    std::string product_result = subtractStrings(n_times_10000, n_str);
    std::cout << product_result << std::endl;

    return 0;
}

