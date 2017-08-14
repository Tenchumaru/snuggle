#pragma once

// Including SDKDDKVer.h defines the highest available Windows platform.

// If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
// set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.

#include <WinSDKVer.h>
// These values are for Windows 7.
#ifndef _RICHEDIT_VER
#	define _RICHEDIT_VER 0x0300
#endif
#ifndef _WIN32_IE
#	define _WIN32_IE 0x0900
#endif
#ifndef _WIN32_WINNT
#	define _WIN32_WINNT 0x0700
#endif
#ifndef WINVER
#	define WINVER _WIN32_WINNT
#endif
#include <SDKDDKVer.h>
