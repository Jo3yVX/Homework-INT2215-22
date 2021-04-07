#include <iostream>
#include <string>

using namespace std;

struct str
{
	int n;

	char* mStr;

	str(const char* s)
	{
		n = strlen(s);
		mStr = new char;
		for (int i = 0; i < n; ++i)
		{
			mStr[i] = s[i];
		}
	}

	~str()
	{
		delete mStr;
	}

	void print()
	{
		for (int i = 0; i < n; ++i)cout << mStr[i];
	}

	void append(const char* mAppend)
	{
		char* temp = new char;
		for (int i = 0; i < n; ++i)
		{
			temp[i] = mStr[i];
		}
		for (int i = n; i < n + strlen(mAppend); ++i)
		{
			temp[i] = mAppend[i - n];
		}
		mStr = temp;
		n = n + strlen(mAppend);
	}

};

int main()
{
	return 0;
}