#include "Stdafx.h"
#pragma once

#include "WindowInfo.h"

using namespace System;

namespace CefSharp
{
    public interface class ILifeSpanHandler
    {
    public:
        bool OnBeforePopup(IWebBrowser^ browser, String^ url, IWindowInfo^ windowInfo);
        void OnBeforeClose(IWebBrowser^ browser);
    };
}