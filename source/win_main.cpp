#include <Windows.h>
#include <GacLib/Include/GacUI.h>

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int CmdShow)
{
	return SetupWindowsDirect2DRenderer();
}

void GuiMain()
{
	GuiWindow* window = g::NewWindow();
	window->SetText(L"Hello, world!");
	window->SetClientSize(Size(640, 480));
	window->MoveToScreenCenter();

	GuiControl* label = g::NewLabel();
	label->SetText(L"Impressionist");
	{
		FontProperties font;
		font.fontFamily = L"Segoe UI";
		font.size = 40;
		font.antialias = true;
		label->SetFont(font);
	}
	window->AddChild(label);

	GetApplication()->Run(window);
	delete window;
}