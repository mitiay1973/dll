#include <Windows.h>
#define PATH L"C:\\Users\\���������\\source\\repos\\dll\\x64\\Debug\\dll.dll"
typedef int(__cdecl* MyFunc)(LPWSTR);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HMODULE hDll = LoadLibrary(PATH);
	if (hDll)
	{
		MyFunc my = (MyFunc)GetProcAddress(hDll, L"��������");
		my(L"���");
	}
	FreeLibrary(hDll);
	return 0;
}