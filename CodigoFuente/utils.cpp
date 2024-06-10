#include <cctype>
#include <string>
#include <vector>
#include <iostream>
#include "utils.h"

using namespace std;

vector<int> fecha;

void ClassNum(string yes) {
    fecha.clear();
    int size = yes.size();
    string num;
    for(int i = 0; i < size; ++i){
        if(isdigit(yes[i]) && i == 0){
            for(int j = i; j < size; ++j){
                if(isdigit(yes[j])){
                    num += yes[j];
                } else if(yes[j] == '-'){
                    break;
                }
            }
            fecha.push_back(stoi(num));
            num.clear();
        } else if(isdigit(yes[i]) && 0 < i && yes[i - 1] == '-'){
            if(i > 0 && yes[i-1] == '-'){
                if(i == 1){
                    num += yes[i-1];
                    if(i >= 3 && yes[i - 3] == '-' && yes[i - 2] == '-'){
                        cout << "Doble guion error\n";
                        break;
                    }
                    for(int j = i; j < size; ++j){
                        if(isdigit(yes[j])){
                            num += yes[j];
                        } else if(yes[j] == '-'){
                            break;
                        }
                    }
                    fecha.push_back(stoi(num));
                    num.clear();
                } else {
                    if(i >= 3 && yes[i - 3] == '-' && yes[i-2] == '-'){
                        cout << "Doble guion error";
                        break;
                    }
                    if(i >= 2 && yes[i - 2] == '-'){
                        num += yes[i-1];  
                    }
                    for(int j = i; j < size; ++j){
                        if(isdigit(yes[j])){
                            num += yes[j];
                        } else if(yes[j] == '-'){
                            break;
                        }
                    }
                    fecha.push_back(stoi(num));
                    num.clear();
                }
            } else {
                for(int j = i; j < size; ++j){
                    if(isdigit(yes[j])){
                        num += yes[j];
                    } else if(yes[j] == '-'){
                        break;
                    }
                }
                fecha.push_back(stoi(num));
                num.clear();
            }
        }
    }
}

bool ValidacionNum(int n) {
    string yes = to_string(n);
    if(yes.size() <= 2 || (yes[0] == '-' && yes.size() <= 3)){
        return true;
    }
    return false;
}

