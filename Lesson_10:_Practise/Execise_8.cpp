
// Mỗi lượt nhập giá 1 món hàng,
// sau đó chương trình hỏi "Con mua nua khong? (y/n)".
// Lặp lại đến khi khách trả lời khác "c".
// Kết thúc in ra: số món đã mua,
// tổng tiền phải trả, và giá của món đắt nhất.

#include <iostream>
using namespace std;

int main()
{
    double a, sum = 0;
    int count = 0;
    double max = 0;
    char i = 'y';
    do
    {
        cout << "Enter the price of the product: ";
        cin >> a;
        count++;
        sum = sum + a;
        if (a > max)
        {
            max = a;
        }

        do
        {
            cout << "Do you want to continue? y/n ";
            cin >> i;

            if (i != 'y' && i != 'n')
            {
                cout << "Invalid input. Please enter y or n." << endl;
            }
        } while (i != 'y' && i != 'n');
    } while (i == 'y');
    cout << "You have to pay a total of " << sum << " for " << count << " items" << endl;
    cout << "The most expensive item costs " << max << endl;
    return 0;
}
