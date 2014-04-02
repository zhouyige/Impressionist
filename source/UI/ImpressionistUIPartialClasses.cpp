/***********************************************************************
Vczh Library++ 3.0
Developer: 陈梓瀚(vczh)
GacUI::Partial Classes

本文件使用Vczh GacUI Resource Code Generator工具自动生成
************************************************************************
DO NOT MODIFY
***********************************************************************/

#include "ImpressionistUI.h"

namespace vl
{
	namespace reflection
	{
		namespace description
		{
			IMPL_TYPE_INFO(ui::MainWindow)

			BEGIN_CLASS_MEMBER(ui::MainWindow)
				CLASS_MEMBER_BASE(vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_CONSTRUCTOR(ui::MainWindow*(), NO_PARAMETER)

			END_CLASS_MEMBER(ui::MainWindow)

			class ImpressionistUIResourceLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(ui::MainWindow)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};

			class ImpressionistUIResourcePlugin : public Object, public vl::presentation::controls::IGuiPlugin
			{
			public:
				void Load()override
				{
					GetGlobalTypeManager()->AddTypeLoader(new ImpressionistUIResourceLoader);
				}

				void AfterLoad()override
				{
				}

				void Unload()override
				{
				}
			};
			GUI_REGISTER_PLUGIN(ImpressionistUIResourcePlugin)
		}
	}
}

