#include "stdio.h"
#include "windows.h"
#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )
int main(int argc, char *argv[])
{
	printf("hello world by cmake generate!\n");
	return 0;
}