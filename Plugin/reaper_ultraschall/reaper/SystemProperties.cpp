////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2017 Ultraschall (http://ultraschall.fm)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
////////////////////////////////////////////////////////////////////////////////

#include <Framework.h>

#include "SystemProperties.h"
#include "ReaperEntryPoints.h"

namespace ultraschall {
namespace reaper {

static const char* GLOBAL_SECTION_NAME = "ultraschall";
   
bool HasSystemProperty(const std::string& key)
{
   PRECONDITION_RETURN(key.empty() == false, false);
   
   return reaper_api::HasExtState(GLOBAL_SECTION_NAME, key.c_str());
}

void SetSystemProperty(const std::string& key, const std::string& value, const bool save)
{
   PRECONDITION(key.empty() == false);
   PRECONDITION(value.empty() == false);
   
   reaper_api::SetExtState(GLOBAL_SECTION_NAME, key.c_str(), value.c_str(), save);
}

std::string GetSystemProperty(const std::string& key)
{
   PRECONDITION_RETURN(key.empty() == false, std::string());
   
   return reaper_api::GetExtState(GLOBAL_SECTION_NAME, key.c_str());
}

void DeleteSystemProperty(const std::string& key, const bool save)
{
   PRECONDITION(key.empty() == false);
   
   reaper_api::DeleteExtState(GLOBAL_SECTION_NAME, key.c_str(), save);
}
   
}}
