#include <Windows.h>
#define PATH L"C:\\Users\\СорокинДА\\source\\repos\\dll\\x64\\Debug\\dll.dll"
typedef int(__cdecl* MyFunc)(LPWSTR);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HMODULE hDll = LoadLibrary(PATH);
	if (hDll)
	{
		MyFunc my = (MyFunc)GetProcAddress(hDll, L"Работаем");
		my(L"Юху");
	}
	FreeLibrary(hDll);
	return 0;
}