system 'build', '-p', 'build'
system('cd build && conan install .. && cmake .. && make')
system('./build/bin/WebCpp')