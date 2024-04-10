#include <iostream>
#include <windows.h>
#include <WinUser.h>
#include <conio.h>

using namespace std;

void home();

int main(void) {
	system("mode con: cols=20 lines=5");//20/5

	home(); //home이라는 이름을 가진 함수
	RECT brt;       

	while (1) { 
		if (GetKeyState(VK_SPACE) < 0) {
			HWND hwnd = FindWindow(L"RCLIENT", NULL);
			GetWindowRect(hwnd, &brt);
			SetCursorPos(brt.left+650, brt.top+550);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}

		else if(GetKeyState(VK_RETURN) < 0)
			return 0;
	}
} 

void home() {
	//홈화면 
	cout << "\n  PRESS SPACE BAR\n\n";
	cout << "    End : Enter";
}