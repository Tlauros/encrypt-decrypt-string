#include <iostream>
using namespace std;

int main(){
    system("cls");
    int i,x;
    char str[75];
    cout << "plase enter your string :";
    cin >> str;

    cout << "\n plase choose following options: \n";
    cout << "1 = Encrypt the string.\n";
    cout << "2 = Decrypt the string.\n";
    cout << "choose : ";
    cin >> x;

    // switch
    switch (x){
        case 1:
            for(i=0; (i<75 && str[i]!='\0'); i++){
                str[i] = str[i]+2;
            }
            cout << "\nEncrypt string : " << str << endl;
            break;

        case 2:
            for(i=0; (i<75 && str[i]!='\0'); i++){
                str[i] = str[i]-2;
            }
            cout << "DEncrypt string : " << str<<endl;
            break;
        
        default:
            cout << "invalid input !!!";
    }



    
    
    
    
    
    
    
    return 0; 
}