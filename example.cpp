#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

string alphabet_position(const string &text);

string lower_string(string str);

std::string only_low_alph(const string somth);

int main() {
    string strs = "The sunset sets at twelve o' clock.";
    string hexd = alphabet_position(strs);
    cout << hexd;
    return 0;
}

std::string lower_string(const string strs) {
    string new_str = "";
    for (char i: strs) {
        char j = tolower(i);
        new_str.push_back(j);
    }
    return new_str;
}

std::string only_low_alph(const string somth) {
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string new_somth = "";
    for (char s: somth) {
        if (alph.find(s) != string::npos) {
            new_somth += s;
        }
    }
    return new_somth;
}


std::string alphabet_position(const string &text) {

    int query = 0;

    string alph = "abcdefghijklmnopqrstuvwxyz";

    string new_text = lower_string(text);

    string new_new_text = only_low_alph(new_text);

    string s1 = "";

    int num = 0;
    //cout << "new text size = "<< new_new_text.size(); 
    for (char i: new_new_text) {
        for (char j: alph) {
            if (i == j) {
                query = alph.find(j);
                string new_query = to_string(query + 1);
                s1.append(new_query);
                num++;
                if (num == new_new_text.size()) {
                    continue;
                }
                s1.append(" ");
                //cout<<"\n" <<"num" << num<<"\n";

            }
        }
    }
    return s1;
}
