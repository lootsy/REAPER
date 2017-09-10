////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2017 Ultraschall ultraschall.fm
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

#include "MP4TagWriter.h"

namespace ultraschall { namespace reaper {
   
bool MP4TagWriter::InsertStandardProperties(const std::string& targetName, const std::string& standardProperties)
{
   PRECONDITION_RETURN(targetName.empty() == false, false);
   PRECONDITION_RETURN(standardProperties.empty() == false, false);
   
   return false;
}

bool MP4TagWriter::InsertCoverImage(const std::string& targetName, const std::string& coverImage)
{
   PRECONDITION_RETURN(targetName.empty() == false, false);
   PRECONDITION_RETURN(coverImage.empty() == false, false);
   
   return false;
}

bool MP4TagWriter::InsertChapterMarkers(const std::string& targetName, const std::vector<Marker>& chapterMarkers)
{
   PRECONDITION_RETURN(targetName.empty() == false, false);
   PRECONDITION_RETURN(chapterMarkers.empty() == false, false);
   
   return false;
}
   
}}




