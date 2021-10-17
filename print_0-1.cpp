#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
	system("mode con COLS=700");
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;  // Width of each character in the font
	cfi.dwFontSize.Y = 56; // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	system("color 2");
	
	int count;
	cout<<"->nhap : ";
	cin >> count;
	if(count<=20000){
		count*=20000;
	}
	char arrayNum[8] = {'1', '0', '1', '0', '1', '0', '0','1'};
	for (int i = 0; i < count; i += 2)
	{

		int RandIndex = rand() % 5; //generates a random number between 0 and 3
		cout << arrayNum[RandIndex];
	}
	cout<<"\n\t\t\t\t\tNASA HACKED";
	int none ;
	cin>>none;
	return 0;
}
