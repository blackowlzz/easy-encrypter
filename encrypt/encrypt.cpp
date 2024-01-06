#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string password, encrypted, decrypted;
    int leng, pos;
    int opt;
    bool loop = true;
    int n = 2;

 while (loop = true) {
 
     pos = 0;
     leng = 0;
     n = 2;
     opt = 0;
 
     system("Color 1");

    cout << "Options: 1) Encode 2) Decode" << endl;

    cin >> opt;

    if (opt == 1) {

         getline(cin >> ws, password);
         leng = password.length();

    while (pos < password.length()) {

        password[pos] = password.at(pos) + (n * 257) ;
        n = n + 3;
        pos = pos+1;
    }

}
    else if (opt == 2) {

        getline(cin >> ws, password);
        leng = password.length();

        while (pos < password.length()) {

            password[pos] = password.at(pos) - (n * 257);
            n = n + 3;
            pos = pos + 1;

        }
    }

    else {
        system("CLS");
        system("Color 4");
        cout << "Error" << endl;
        break;
    }

    cout << password << endl;

    }

 system("PAUSE");

}