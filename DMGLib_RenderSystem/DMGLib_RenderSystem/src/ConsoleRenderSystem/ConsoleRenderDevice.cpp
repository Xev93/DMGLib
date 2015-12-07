//-----------------------------------------------------------------------------------------------------------------
// ConsoleRenderDevice.cpp
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------

#include "ConsoleRenderDevice.h"

using namespace DMGLib_RenderSystem;


//-----------------------------------------------------------------------------------------------------------------
// Constructor, sets m_char to the input parameter "&newChar".
//-----------------------------------------------------------------------------------------------------------------
ConsoleRenderDevice::ConsoleRenderDevice (const char &newChar)
    : m_char (newChar)
{ }

//-----------------------------------------------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------------------------------------------
ConsoleRenderDevice::~ConsoleRenderDevice ()
{
    //
}

//-----------------------------------------------------------------------------------------------------------------
// Sets the character that this device will render.
//-----------------------------------------------------------------------------------------------------------------
void ConsoleRenderDevice::SetCharacter (const char &newChar)
{
    m_char = newChar;
}

//-----------------------------------------------------------------------------------------------------------------
// Renders this m_char to the console window.
//-----------------------------------------------------------------------------------------------------------------
void ConsoleRenderDevice::Render ()
{

}