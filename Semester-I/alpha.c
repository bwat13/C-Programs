#include <stdio.h>
#include <windows.h>

void main()
{
	int i;
	int var[123];
	// Get console window handle
    HWND wh = GetConsoleWindow();
 
    // Move window to required position
    MoveWindow(wh, 100, 100, 640, 170, TRUE);
	for(i=0;i<123;i++)
	{
		var[i]=i;
	}
	for(i=65;i<123;i++)
	{
		printf("%C\t",var[i]);
		if(i==90)
		{
			printf("\n");
			i=96;
		}
	}
	getch();
}
