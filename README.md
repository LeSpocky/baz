# baz

This application actually does nothing but saying "hello world" and
calling the hello world function from libbar which itself calls libfoo
then. It's used to reproduce some problems with CMake and transitive
linking of shared libraries.
