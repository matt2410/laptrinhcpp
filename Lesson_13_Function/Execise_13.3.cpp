#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]" << endl;
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void themCuoi(int a[], int &n, int x)
{
    n = n + 1; // check thấy câu lệnh gán tham số thì phải thêm dấu &
    a[n - 1] = x;
}
void themDau(int a[], int &n, int x) // 0
{
    n = n + 1; // check thấy câu lệnh gán tham số thì phải thêm dấu &

    for (int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = x;
}

void themViTri(int a[], int &n, int x, int viTriCanThem)
{
    // n = 5, x = 10, viTriCanThem = 1
    // gt    4 5 6 7 8
    // index 0 1 2 3 4
    // gt    4 5 6 7 8 _
    // index 0 1 2 3 4 5
    // i = 5gt    4 5 6 7 8 8
    // i = 4gt    4 5 6 7 7 8
    // i = 3gt    4 5 6 6 7 8
    // i = 2gt    4 10 5 6 7 8
    //  index 0 1 2 3 4 5

    n = n + 1; // check thấy câu lệnh gán tham số thì phải thêm dấu &

    for (int i = n - 1; i > viTriCanThem; i--)
    {
        a[i] = a[i - 1];
    }
    a[viTriCanThem] = x;
}
// n = 5, viTriCanXoa = 2
//   gt 5 6 7 8 9
// index 0 1 2 3 4
// i = 2
//   gt 5 6 8 8 9
// index 0 1 2 3 4
// i = 3
//   gt 5 6 8 9 9
// index 0 1 2 3 4
// n--
//   gt 5 6 8 9
// index 0 1 2 3
void xoa(int a[], int &n, int viTriCanXoa)
{
    for (int i = viTriCanXoa; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

int main()
{
    int a[100], n, x;
    cout << "nhap do dai mang" << endl;

    cin >> n;
    if (n > 99 || n < 0)
    {
        cout << "n khong hop le" << endl;
        return 0;
    }
    nhap(a, n);
    cout << "nhap so can them" << endl;
    cin >> x;
    themCuoi(a, n, x);
    cout << "Mang sau khi them:" << endl;
    xuat(a, n);
}