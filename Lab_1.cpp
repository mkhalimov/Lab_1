#include <iostream>
using std::cin, std::cout, std::endl;

void calculate(int num_1, int num_2, char op){
    int res;
    
    if (op == '+'){
        res = num_1 + num_2;
    }
    else if (op == '-'){
        res = num_1 - num_2;
    }
    else if (op == '*')
    {
        res = num_1 * num_2;
    }
        else if (op == '/')
    {
        res = num_1 / num_2;
    }

    cout << res;
}

int  main(){
    cout << "Enter two numbers" << endl;
    
    int num_1, num_2;
    cin >> num_1 >> num_2;

    cout << "Enter operator you want to calculate with: '+', '-', '*', '/'" << endl;

    char op;
    cin >> op;

    calculate(num_1, num_2, op);

    return 0;
}