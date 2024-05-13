Add to this folder the latest version of the tws api from:
https://interactivebrokers.github.io

- Download the Mac/Unix Version
- Normally the code that we are after is inside:
  - IBJts->source->cppclient->client
- Copy *.cpp and *.h files to this folder

Execute the command ``make`` to generate the shared library.

Once the libTwsSocketClient.so library is generated you can delete every *.cpp and *.h files from this folder