#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
	//cre:stackoverflow > console turn on fullscreen 
	system("mode con COLS=700");
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	
	//enlarge the font-size and set font-color to green
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
	cout<<"|--->Enter something : ";
	cin >> count;
	
	//change the following lines below to custom number of appearances
	if(count<=20000||count<=0){
		
		//if input is string or <=0 , it would add more times 
		count+=69;
		count*=23145;
	}
	
	//initialize array which stores 0s and 1s
	char arrayNum[8] = {'1', '0', '1', '0', '1', '0', '0','1'};
	for (int i = 0; i < count; i += 2)
	{
		int RandIndex = rand() % 5; //generates a random number between 0 and 5 ? I don't sure about this
		cout << arrayNum[RandIndex];
	}
	
	//the end of program
	cout<<"\n\t\t\t\t\tNASA HACKED";
	int none ;
	cin>>none;
	return 0;
}
