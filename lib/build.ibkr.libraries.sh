#!/bin/bash

#Download Files
#Change version to the latest at https://interactivebrokers.github.io
ibkrVersion="1019.04"
ibkrFullName="twsapi_macunix.${ibkrVersion}"
currentFolder=$PWD
ibkrSrcFolder="${currentFolder}/${ibkrFullName}/IBJts/source/cppclient/client"

wget -c http://www.netlib.org/misc/intel/IntelRDFPMathLib20U2.tar.gz -O - | tar -xz
wget -c "https://interactivebrokers.github.io/downloads/${ibkrFullName}.zip"
unzip -o "${ibkrFullName}.zip" -d ${ibkrFullName}
rm -f "./${ibkrFullName}.zip"

# Build Intel Library
cd ./IntelRDFPMathLib20U2/LIBRARY || exit
make CC=gcc CALL_BY_REF=0 GLOBAL_RND=0 GLOBAL_FLAGS=0 UNCHANGED_BINARY_FLAGS=0
rm ./*.o
cp libbid.a "${ibkrSrcFolder}"

#Build TWS API Client
cp "${currentFolder}/main.cpp" "${ibkrSrcFolder}"
cd "${ibkrSrcFolder}" || exit
g++ -pthread -Wall -Wno-switch -Wpedantic -Wno-unused-function -std=c++20 -I. ./*.cpp libbid.a -olibIBApiClient.a
cp libIBApiClient.a "${currentFolder}"

#Cleanup
cd "${currentFolder}" || exit
rm -rf IntelRDFPMathLib20U2
rm -rf "${ibkrFullName}"