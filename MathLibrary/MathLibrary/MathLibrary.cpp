// MathLibrary.cpp : ���� DLL Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "MathLibrary.h"

#using "..\debug\One.dll"
using namespace CSharpDLL;


#ifdef _MANAGED
#pragma managed(push, off)
#endif

//BOOL APIENTRY DllMain( HMODULE hModule,
//                       DWORD  ul_reason_for_call,
//                       LPVOID lpReserved
//					 )
//{
//	switch (ul_reason_for_call)
//	{
//	case DLL_PROCESS_ATTACH:
//	case DLL_THREAD_ATTACH:
//	case DLL_THREAD_DETACH:
//	case DLL_PROCESS_DETACH:
//		break;
//	}
//    return TRUE;
//}

#ifdef _MANAGED
#pragma managed(pop)
#endif


int Add(int a, int b){
	One ^obj = gcnew One();
	int sum = obj -> GetSum(a,b);
	return sum;
}
