#include <iostream>
using namespace std;

int main() {
    string user;

    cout << "Welcome! Let's play." << endl;
    cout << "Provided words are jumbled. Unscramble them and type its correct spelling. (Answer in ALL CAPS)" << endl;

    // ANSWER
    cout << "Now spell: ASNREW = " << endl;
    cin >> user;
    if (user == "ANSWER") {
        cout << "Correct!" << endl;
    } else {
        cout  << "Wrong! Better luck next time!" << endl;
    }

    // ANGEL
    cout << "Now spell: AGNEL = " << endl;
    cin >> user;
    if (user == "ANGEL") {
        cout << "Correct!" << endl;
    } else {
    cout << "Wrong! ... I trust you can do better though!" << endl;
    }

    // MERCY
    cout << "Now spell: ECYRM = " << endl;
    cin >> user;
    if (user == "MERCY") {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong! That's not it." << endl;
    }

    // SINNER
    cout << "Now spell: SRNENI = " << endl;
    cin >> user;
    if (user == "SINNER") {
       cout << "Correct!" << endl;
    } else {
        cout << "Wrong! So far, and you're still far." << endl;
    }

    cout << "Alright,the next game is—oh! ...Well, that's all I have, it seems! I had fun playing with you in this short time we spent together. See you next time!" << endl;
    return 0;
}
