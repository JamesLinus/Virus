#include <stdio.h>
int main(){
	int x;
	__asm{
		mov eax,9
		mov dword ptr[x],eax
		push eax
	}
	printf("%d\n",x);
	__asm{
		pop eax
		mov dword ptr[x],eax
	}
	printf("%d",x);
	return 0;
}