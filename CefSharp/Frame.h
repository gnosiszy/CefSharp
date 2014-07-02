#include "Stdafx.h"
#pragma once

#include "include/cef_client.h"

namespace CefSharp
{
    using namespace System;

    public interface class IFrame
    {
    public:
        property String^ Name { String^ get(); };
        property Boolean^ IsMain { Boolean^ get(); };
    };

    ref class Frame : public IFrame
    {
    private:
        String^ _name;
        Boolean^ _isMain;
    public:
        Frame();
        virtual property String^ Name { String^ get(); };
        virtual property Boolean^ IsMain { Boolean^ get(); };
    public private:
        void SetName(String^ value);
        void SetIsMain(Boolean^ value);
        static Frame^ Wrap(CefRefPtr<CefFrame> frame);
    };
}
