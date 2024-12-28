project('IB.Cpp.Api.Client', 'cpp',
        version : '1.0.0',
        default_options : ['warning_level=3', 'cpp_std=c++17'])

lib_args = ['-DBUILDING_MESON_LIBRARY']

shared_library('IBCppApiClient', 'main.cpp',
               install : true,
               cpp_args : lib_args
)