#ifndef _ADD_H_
#define _ADD_H_
#ifdef _WINDOWS
	#ifdef demo5_EXPORTS
	#define demo5_API __declspec(dllexport)
	#else
	#define demo5_API __declspec(dllimport)
	#endif
#else
	#define demo5_API
#endif
extern "C" demo5_API int  add2(int i, int j);
#endif