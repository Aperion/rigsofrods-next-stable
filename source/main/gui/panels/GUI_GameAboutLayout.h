#pragma once

// ----------------------------------------------------------------------------
// Generated by MyGUI's LayoutEditor using RoR's code templates.
// Find the templates at [repository]/tools/MyGUI_LayoutEditor/
//
// IMPORTANT:
// Do not modify this code directly. Create a derived class instead.
// ----------------------------------------------------------------------------

#include "ForwardDeclarations.h"
#include "BaseLayout.h"

namespace RoR
{

namespace GUI
{
	
ATTRIBUTE_CLASS_LAYOUT(GameAboutLayout, "about.layout");
class GameAboutLayout : public wraps::BaseLayout
{

public:

	GameAboutLayout(MyGUI::Widget* _parent = nullptr);
	virtual ~GameAboutLayout();

protected:

	//%LE Widget_Declaration list start
	ATTRIBUTE_FIELD_WIDGET_NAME(GameAboutLayout, m_ror_version, "ror_version");
	MyGUI::EditBox* m_ror_version;

	ATTRIBUTE_FIELD_WIDGET_NAME(GameAboutLayout, m_net_version, "net_version");
	MyGUI::EditBox* m_net_version;

	ATTRIBUTE_FIELD_WIDGET_NAME(GameAboutLayout, m_build_time, "build_time");
	MyGUI::EditBox* m_build_time;

	ATTRIBUTE_FIELD_WIDGET_NAME(GameAboutLayout, m_authors, "authors");
	MyGUI::EditBox* m_authors;

	ATTRIBUTE_FIELD_WIDGET_NAME(GameAboutLayout, m_backbtn, "backbtn");
	MyGUI::Button* m_backbtn;

	//%LE Widget_Declaration list end
};

} // namespace GUI

} // namespace RoR
