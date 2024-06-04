#pragma once

#ifdef BP_WINDOWS
	#ifdef BP_BUILD
		#define BLACK_OPAL_API __declspec(dllexport)
	#else
		#define BLACK_OPAL_API __declspec(dllimport)
	#endif
#else
	#error Unsupported Platform! Windows support is currently only provided.
#endif