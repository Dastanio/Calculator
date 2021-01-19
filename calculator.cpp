// Example program
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {


    int number, number2, result;
    char operatorvar;
    
    
    cout << 'Enter your number? : ' << endl;
    cin >> number;
    
    cout << 'Choose (+,-, /, *)? : ' << endl;
    cin >> operatorvar;
    
    cout << 'Enter your second number? : ' << endl;
    cin >> number2;
    
    
    
    if (operatorvar == '+') {
        result = number + number2;
        cout << "Result: " << result << endl;
        
    } else if (operatorvar == '-' ){
        
        result = number - number2;
        cout << "Result: " << result << endl;
        
    }else if (operatorvar == '*' ){
        
        result = number * number2;
        cout << "Result: " << result << endl;
        
    }else if (operatorvar == '/' ){
        
        result = number / number2;
        cout << "Result: " << result << endl;
        
    }
    
    // int num_1, num_2, result;
    
    // cout << "Добро пожаловать в калькулятор!" << endl;
    
    
    // cout << "Enter num: " << endl;
    // cin  >> num_1;
    
    // cout << "Enter num2: " << endl;
    // cin  >> num_2;
    
    // result = num_1 + num_2;
    
    
    // cout << result << endl;
    
    
    // bool isWork = true;
    // int integer = 1212;
    // float fav_num = 12.32;
    // double test  = 0.323232;
    // const float PI = 3.14;

    return 0;
}