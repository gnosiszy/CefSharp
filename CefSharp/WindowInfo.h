#include "Stdafx.h"
#pragma once

#include "include/cef_client.h"

namespace CefSharp
{
    using namespace System;

    public interface class IWindowInfo
    {
    public:
        property String^ Name { String^ get(); };
        property Int32^ X { Int32^ get(); };
        property Int32^ Y { Int32^ get(); };
        property Int32^ Width { Int32^ get(); };
        property Int32^ Height { Int32^ get(); };
    };

    ref class WindowInfo : public IWindowInfo
    {
    private:
        String^ _name;
        Int32^ _x;
        Int32^ _y;
        Int32^ _width;
        Int32^ _height;
    public:
        WindowInfo();
        virtual property String^ Name { String^ get(); };
        virtual property Int32^ X { Int32^ get(); };
        virtual property Int32^ Y { Int32^ get(); };
        virtual property Int32^ Width { Int32^ get(); };
        virtual property Int32^ Height { Int32^ get(); };
    public private:
        void SetName(String^ value);
        void SetX(Int32^ value);
        void SetY(Int32^ value);
        void SetWidth(Int32^ value);
        void SetHeight(Int32^ value);
        static WindowInfo^ Wrap(CefWindowInfo& windowInfo);
    };
}
