#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, 
                   HINSTANCE hPrevInstance, 
                   LPSTR lpCmdLine, int nCmdShow){ 
    while (MessageBoxA(0, "Hello", "Msg", MB_YESNO) == IDYES);
    return 0;
}
