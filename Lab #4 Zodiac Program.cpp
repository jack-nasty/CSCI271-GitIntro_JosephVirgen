#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int month, day;
    string zodiacSign;

    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Enter birth month (1-12): ";
    cin >> month;

    cout << "Enter birth day: ";
    cin >> day;

    if ((month == 1 && day <= 19) || (month == 12 && day >= 22)) {
        zodiacSign = "Capricorn";
    }
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        zodiacSign = "Aquarius";
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        zodiacSign = "Pisces";
    }
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        zodiacSign = "Aries";
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        zodiacSign = "Taurus";
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        zodiacSign = "Gemini";
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        zodiacSign = "Cancer";
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        zodiacSign = "Leo";
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        zodiacSign = "Virgo";
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        zodiacSign = "Libra";
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        zodiacSign = "Scorpio";
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        zodiacSign = "Sagittarius";
    }
    else {
        zodiacSign = "Please Try Again";
    }

    cout << "Hello " << fullName << "! Your zodiac sign is: " << zodiacSign << endl;

    return 0;
}