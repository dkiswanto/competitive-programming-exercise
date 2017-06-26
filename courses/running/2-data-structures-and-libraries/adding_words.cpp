#include <bits/stdc++.h>
using namespace std;

vector<string> split(string word, string delimiter){
    vector<string> tokens;
    size_t pos = 0;
    string token;
    while ((pos = word.find(delimiter)) != string::npos) {
        token = word.substr(0, pos);
        tokens.push_back(token);
        word.erase(0, pos + delimiter.length());
    }
    tokens.push_back(word);
    return tokens;
}

int main(){

    string command;

    map<string, int> datas;

    while(getline(cin, command)){
        vector<string> tokens = split(command, " ");

        if (tokens[0] == "def"){
            datas[tokens[1]] = stoi(tokens[2]);

        } else if (tokens[0] == "calc") {

            int result = 0;
            bool valid = true;
            for (int i = 1; i < tokens.size() - 1; i++) {

                if (i == 1){
                    if (datas.count(tokens[1]))
                        result = datas[tokens[1]];
                    else
                        valid = false;
                }

                // for variable handler
                if (i % 2 != 0){
                    if (!datas.count(tokens[i])) {
                        valid = false;
                    }

                // operation handler
                } else {
                    // plus handler
                    if (tokens[i] == "+"){
                        if (datas.count(tokens[i+1]))
                            result += datas[tokens[i+1]];
                    // minus handler
                    } else if (tokens[i] == "-") {
                        if (datas.count(tokens[i+1]))
                            result -= datas[tokens[i+1]];
                    }
                }

                if (!valid) break;
            }

            // output
            for (int j = 1; j < tokens.size(); j++) {
                cout << tokens[j] << " ";
            }

            if (valid){
                // must lookup result in datas.
                bool not_found = true;
                for(auto x : datas){
                    if (result == x.second){
                        cout << x.first << endl;
                        not_found = false;
                        break;
                    }
                }

                if (not_found){
                    cout << "unknown" << endl;
                }

            } else {
                cout << "unknown" << endl;
            }

        } else if (tokens[0] == "clear") {
            datas.clear();
        }

//        DEBUG
//        for(auto x : datas){
//            cout << x.first << ": " << x.second << endl;
//        }

    }

    return 0;

}