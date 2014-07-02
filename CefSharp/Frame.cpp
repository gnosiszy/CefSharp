#include "Stdafx.h"

#include "Frame.h"

using namespace std;
using namespace System;

namespace CefSharp
{
    Frame::Frame() {
    }

    String^ Frame::Name::get() {
        return _name;
    }

    void Frame::SetName(String^ value) {
        _name = value;
    }

    Boolean^ Frame::IsMain::get() {
        return _isMain;
    }

    void Frame::SetIsMain(Boolean^ value) {
        _isMain = value;
    }

    Frame^ Frame::Wrap(CefRefPtr<CefFrame> frame) {
        if (NULL == frame) return nullptr;

        Frame^ wrapper = gcnew Frame();

        wrapper->SetName(toClr(frame->GetName()));
        wrapper->SetIsMain(frame->IsMain());

        return wrapper;
    }
}
