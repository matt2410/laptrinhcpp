#include <iostream>
using namespace std;

int main()
{
    string note = "Congratulations! You have passed the exam.";
    float score;
    string area;
    float KV1 = 0.75;
    float KV2 = 0.5;
    float KV3 = 0;
    cout << "Please enter your score: ";
    cin >> score;
    cout << "Please enter your area (KV1, KV2, KV3): ";
    cin >> area;
    if (score >= 20.0)
    {
        score = score + (area == "KV1" ? KV1 : (area == "KV2" ? KV2 : KV3)); // ternary operator (? :)
        cout << "Your total score is: " << score << endl;
        cout << note << endl;
    }
    else
    {
        cout << "Khong du dieu kien xet tuyen" << endl;
    }
    return 0;
}