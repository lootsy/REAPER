////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2014-2015 Ultraschall (http://ultraschall.fm)
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

#include "About.h"
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import <Cocoa/Cocoa.h>

//@interface AppDelegate : NSObject <NSApplicationDelegate>
//@end

namespace ultraschall { namespace reaper {
   
static NSWindow* g_window = nil;

const void ShowAbout()
{
   if(nil == g_window)
   {
      NSRect frame = NSMakeRect(100, 100, 800, 600);
      NSWindow* window  = [[NSWindow alloc] initWithContentRect: frame
                                                      styleMask: NSTitledWindowMask | NSClosableWindowMask
                                                        backing: NSBackingStoreBuffered
                                                          defer: NO];
      
      [window setBackgroundColor:[NSColor darkGrayColor]];
//      AppDelegate *appDelegate = [[AppDelegate alloc] init];
//      [NSApp setDelegate:appDelegate];
      [window makeKeyAndOrderFront:NSApp];
      g_window = window;
   }
}
   
}}