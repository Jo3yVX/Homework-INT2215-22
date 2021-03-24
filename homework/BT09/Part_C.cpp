#include <bits/stdc++.h>
using namespace std;

char* reverse(char a[])
{
    char ans[10000] = "";
    for (int i = 0; i < n/2; ++i)
    {
        swap(a[i], a[n - i - 1]);
    }
    char* ans = a;
    return ans;
}

char* delete_char(char a[], char c)
{
    int n = sizeof(a) / sizeof(a[0]);
    char ans[10000] = "";
    int dem = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != c)
        {
            dem++;
            ans[dem] = a[i];
        }
    }
    return ans;
}

char* pad_right(char a[], int n)
{
    int m = sizeof(a) / sizeof(a[0]);
    char ans[10000] = "";
    for (int i = 0; i < n; ++i)
    {
        ans[i] = a[i];
    }
    if (m < n)
    {
        for (int i = m; i < n; ++i)
        {
            ans[i] = ' ';
        }
    }
    return ans;
}

char* pad_left(char a[], int n)
{
    int m = sizeof(a) / sizeof(a[0]);
    char ans[10000] = "";
    if (m < n)
    {
        for (int i = 0; i < n - m; ++i)
        {
            ans[i] = ' ';
        }
        for (int i = n - m; i < n; ++i)
        {
            ans[i] = a[i - n + m];
        }
    }
    else
    {
        for (int i = 0; i < m; ++i)
        {
            ans[i] = a[i];
        }
    }
    return ans;
}

char* truncate(char a[], int n)
{
    char ans[1000] = "";
    int m = sizeof(a) / sizeof(a[0]);
    if (n < m)
    {
        for (int i = 0; i < n; ++i)
        {
            ans[i] = a[i];
        }
    }
    return ans;
}


char* trim_left(char a[])
{
    char ans[10000] = "";
    int i = 0;
    int n = sizeof(a) / sizeof(a[0]);
    int dk = 0;
    int dem = -1;
    while (i < n)
    {
        if (a[i] != ' ')dk = 1;
        if (dk == 1)
        {
            dem++;
            ans[dem] = a[i];
        }
        i++;
    }
    return ans;
}

char* trim_right(char a[])
{
    char ans[10000] = "";
    int n = sizeof(a) / sizeof(a[0]);
    int i = n - 1;
    int dk = 0;
    while (i >= 0)
    {
        if (a[i] != ' ')dk = 1;
        if (dk == 1)
        {
            ans[i] = a[i];
        }
        i--;
    }
    return ans;
}

int main()
{
    //add test cases here
    return 0;
}