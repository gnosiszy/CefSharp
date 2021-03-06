﻿// Copyright © 2010-2014 The CefSharp Authors. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

using System;

namespace CefSharp
{
    /// <summary>
    /// Event arguments to the TitleChanged event handler.
    /// </summary>
    public class TitleChangedEventArgs : EventArgs
    {
        public string Title { get; private set; }

        public TitleChangedEventArgs(string title)
        {
            Title = title;
        }
    };

    /// <summary>
    /// A delegate type used to listen to TitleChanged events.
    /// </summary>
    /// <param name="sender">The object that raised the event.</param>
    /// <param name="e">The event arguments.</param>
    public delegate void TitleChangedEventHandler(object sender, TitleChangedEventArgs args);
}
