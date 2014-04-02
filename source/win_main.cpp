#include <Windows.h>
#include "UI\ImpressionistUI.h"

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int CmdShow)
{
	return SetupWindowsDirect2DRenderer();
}

void GuiMain()
{
	GetInstanceLoaderManager()->SetResource(L"ImpressionistUI", GuiResource::LoadFromXml(L"Resources.xml"));
	ui::MainWindow window;
	window.ForceCalculateSizeImmediately();
	window.MoveToScreenCenter();
	GetApplication()->Run(&window);
}