#include <iostream>
#include <string>

using namespace std;

class Conersion
{
public:
    int RomanToInt(string s)
    {
        int Sum = 0;

        for (int j = 0; j < s.length(); j++)
        {
            char sym = s[j];
            switch (sym)
            {
            case 'I':
                if (s[j + 1] == 'V' || s[j + 1] == 'X')
                {
                    Sum -= 1;
                    break;
                }
                Sum += 1;
                break;

            case 'V':
                Sum += 5;
                break;

            case 'X':
                if (s[j + 1] == 'L' || s[j + 1] == 'C')
                {
                    Sum -= 10;
                    break;
                }
                Sum += 10;
                break;

            case 'L':
                Sum += 50;
                break;

            case 'C':
                if (s[j + 1] == 'D' || s[j + 1] == 'M')
                {
                    Sum -= 100;
                    break;
                }
                Sum += 100;
                break;

            case 'D':
                Sum += 500;
                break;

            case 'M':
                Sum += 1000;
                break;
            }
        }
        return Sum;
    }
};

int main()
{
    Conersion C;
    string num;
    cout << "Enter Roman Number: ";
    getline(cin, num);
    cout << "Roman Number: " << num << "\nInt Number: " << C.RomanToInt(num);
}