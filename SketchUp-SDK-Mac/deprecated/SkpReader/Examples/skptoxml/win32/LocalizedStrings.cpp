#include "../Common/stdafx.h"
#include "../Common/LocalizedStrings.h"
#include "resource.h"

std::string LoadLocalizedString(UINT stringID)
{
  // TODO: The returned string needs to be UTF-8. Do the conversion.
  CStringA retString;
  retString.LoadString(stringID);
  return retString.GetString();
}
