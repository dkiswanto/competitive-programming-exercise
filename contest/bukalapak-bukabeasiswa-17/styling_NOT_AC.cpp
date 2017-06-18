#include <bits/stdc++.h>
using namespace std;

// oke this is valid
bool is_snake_case(string word){
    char underscore = '_';
    size_t found = word.find(underscore);
    return found != string::npos;
}

int main() {
    int n;
    string option;
    cin >> n >> option;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if(option == "snake_case"){

            if(is_snake_case(word)){
                cout << "NOT MODIFIED " << word << endl;
            } else {

                // transform to snake_case
                // word == camelCase
                long len = word.length();
                int counter = 0;
                for (int j = 0; j < len; j++) {
                    //check if capital
                    if(isupper(word[j])){
//                         change to lower
                        word[j] = tolower(word[j]);
                        // insert _
                        word.insert(j, "_");
                    }
                }
                cout << "MODIFIED INTO " << word << endl;

            }

        } else {
            // camelCase handler
            if(!is_snake_case(word)){
                cout << "NOT MODIFIED " << word << endl;
            } else {
                // transform to camelCase
                // word == snake_case
                for (int j = 0; j < word.length(); j++) {
                    if(word[j] == '_'){

                        if (j != word.length() - 1 && j != 0) {
                            string after_underscore = word.substr(j + 1, 1);
                            // tranform to upper
                            transform(after_underscore.begin(), after_underscore.end(),
                                      after_underscore.begin(), ::toupper);
                            word.erase(j, 2);
                            word.insert(j, after_underscore);
                        } else {
//                            word.erase(j, 1);
                        }

                    }
                }
                cout << "MODIFIED INTO " << word << endl;

            }
        }
    }


    return 0;
}
