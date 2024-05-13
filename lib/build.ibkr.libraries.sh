#!/bin/bash

# Download Files
# Change version to the latest at https://interactivebrokers.github.io
ibkrVersion="1019.04"
ibkrFullName="twsapi_macunix.${ibkrVersion}"
currentFolder=$PWD
ibkrSrcFolder="${currentFolder}/${ibkrFullName}/IBJts/source/cppclient/client"

wget -c "https://interactivebrokers.github.io/downloads/${ibkrFullName}.zip"
unzip -o "${ibkrFullName}.zip" -d ${ibkrFullName}
rm -f "./${ibkrFullName}.zip"

# Build TWS API Client
echo "Building TWS API Client library..."
cp libbid.so "${ibkrSrcFolder}"
cd "${ibkrSrcFolder}" || exit
g++ -pthread -Wall -Wno-switch -Wno-unused-function -std=c++20 -shared -fPIC -I. ./*.cpp -Llib libbid.so -olibIbGatewayClient.so
cp libIbGatewayClient.so "${currentFolder}"

# Cleanup
cd "${currentFolder}" || exit
rm -rf "${ibkrFullName}"