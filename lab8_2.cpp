//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    //ถามชื่อ
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;

    //ถามรหัส
    int N;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl << name << ": ";
    cin >> N;
    cin.ignore();
    N = (N/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << N << ". I have a free movie ticket for you." << endl;

    //ชวนดูหนัง
    string Movie,Day,smt;
    char x = 'A';
    x = 'z'+27;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,Movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl << name << ": ";
    getline(cin,Day);
    cout << "Fahsai: " << Day << "....that is OK!!! I'm looking forward to watching " << Movie << " with you." << endl << name << ": ";
    cin >> smt;
    cin.ignore();
    cout << "Fahsai: 555+ see you " << Day << ". Bye Bye " << x << "(^ ^)/";

    return 0;
}