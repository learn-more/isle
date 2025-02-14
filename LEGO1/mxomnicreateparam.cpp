#include "mxomnicreateparam.h"

MxOmniCreateParam::MxOmniCreateParam(const char *mediaPath, struct HWND__ *windowHandle, MxVideoParam &vparam, MxOmniCreateFlags flags)
{
  this->m_mediaPath = mediaPath;
  this->m_windowHandle = (HWND) windowHandle;
  this->m_videoParam = vparam;
  this->m_createFlags = flags;
}
