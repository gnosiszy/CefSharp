#include "Stdafx.h"

#include "WindowInfo.h"

using namespace std;
using namespace System;

namespace CefSharp
{
    WindowInfo::WindowInfo() {
    }

    String^ WindowInfo::Name::get() {
        return _name;
    }

    void WindowInfo::SetName(String^ value) {
        _name = value;
    }

    Int32^ WindowInfo::X::get() {
        return _x;
    }

    void WindowInfo::SetX(Int32^ value) {
        _x = value;
    }

    Int32^ WindowInfo::Y::get() {
        return _y;
    }

    void WindowInfo::SetY(Int32^ value) {
        _y = value;
    }

    Int32^ WindowInfo::Width::get() {
        return _width;
    }

    void WindowInfo::SetWidth(Int32^ value) {
        _width = value;
    }

    Int32^ WindowInfo::Height::get() {
        return _height;
    }

    void WindowInfo::SetHeight(Int32^ value) {
        _height = value;
    }

    WindowInfo^ WindowInfo::Wrap(CefWindowInfo& windowInfo) {
        WindowInfo^ wrapper = gcnew WindowInfo();

        wrapper->SetName(toClr(windowInfo.m_windowName));
        wrapper->SetX(windowInfo.m_x);
        wrapper->SetY(windowInfo.m_y);
        wrapper->SetWidth(windowInfo.m_nWidth);
        wrapper->SetHeight(windowInfo.m_nHeight);

        return wrapper;
    }
}
