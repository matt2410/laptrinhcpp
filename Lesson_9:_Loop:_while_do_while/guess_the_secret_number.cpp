#include <iostream>
using namespace std;

int main()
{
    int n, scr_num = 56, lan = 0;
    cout << "CHAO MUNG BAN DA DEN VOI TRO CHOI DOAN SO MAY MAN!" << endl;
    do
    {
        cout << "Xin moi ban doan so chung toi dang nghi: " << endl;
        cin >> n;
        lan++;
        if (n > scr_num)
        {
            cout << "So ban lon hon so bi mat!!" << endl;
        }
        else if (n < scr_num)
        {
            cout << "So ban nho hon so bi mat!!" << endl;
        }
        else
        {
            cout << "BAN DA DOAN DUNG!!";
            cout << "so lan doan: " << lan << endl;
        }
    } while (n != scr_num);
    return 0;
}
