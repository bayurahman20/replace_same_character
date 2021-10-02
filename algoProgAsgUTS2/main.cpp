//
// Nama Kelompok :
// 1. Erwiyono Yusuf
// 2. Evri Bagas Saputro
// 3. Christian Folma Dio
// 4. Bayu Rahman Adinata
//

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string text, result;
    int counter = 0;
    cout<< "Please enter some text: ";
    getline(cin, text);

    int hash[123] = {0};
    for(int i = 0; i < text.length(); i++) {
        if(hash[text[i]] == 0) {
            hash[text[i]] = 1;
            result += text[i];
        }
        
        if (text[i] == ' ') {
            counter++;
        }
        
        if (text[i] == ' ' && counter == 1) {
            result += "";
        } else if(text[i] == ' ') {
            result += " ";
        }
    }
    cout<<"Your text without duplicate character(s): "<< result << endl;
}
