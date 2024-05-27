Build in this folder the Intel library for decimal types.

Steps and recomendations from Interactive Brokers:

### Static library

1) Extract [Intel Decimal Floating Point Library](https://www.intel.com/content/www/us/en/developer/articles/tool/intel-decimal-floating-point-math-library.html)
   to some directory

2) In IntelRDFPMathLib20U2/LIBRARY execute the following commands:
   make CC=gcc CALL_BY_REF=0 GLOBAL_RND=0 GLOBAL_FLAGS=0 UNCHANGED_BINARY_FLAGS=0
   rm *.o

Note: in the sample above all build flags are set to 0. See IntelRDFPMathLib20U2/README for details.

3) As result there is libbid.a library generated. You can use it with TestCppClientStatic.


### Shared library
1) Extract [Intel Decimal Floating Point Library](https://www.intel.com/content/www/us/en/developer/articles/tool/intel-decimal-floating-point-math-library.html)
   to some directory

2) In IntelRDFPMathLib20U2/LIBRARY modify "makefile":
   - Line 112: change _CFLAGS_OPT := to _CFLAGS_OPT := -fPIC
   -  Line 370: change BID_LIB = $(LIB_DIR)/libbid.$A to BID_LIB = $(LIB_DIR)/libbid.so
   -  Line 377: change $(AR_CMD) $(AR_OUT)$@ $^ to gcc -o $@ $^ -shared

3) In IntelRDFPMathLib20U2/LIBRARY execute the following commands:
   make CC=gcc CALL_BY_REF=0 GLOBAL_RND=0 GLOBAL_FLAGS=0 UNCHANGED_BINARY_FLAGS=0
   rm *.o

Note: in the sample above all build flags are set to 0. See IntelRDFPMathLib20U2/README for details.

3) As result there is libbid.so library generated. You can use it with TestCppClient.