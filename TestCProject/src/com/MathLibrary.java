package com;

import com.sun.jna.Library;
import com.sun.jna.Native;

public interface MathLibrary extends Library {
	MathLibrary instanceDll  = (MathLibrary)Native.loadLibrary("MathLibrary",MathLibrary.class);
	int Add(int a, int b);
	 
}
