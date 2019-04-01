system 'build', '-p', 'build'
system('cd build && conan install .. && cmake .. && make')
system('./bin/Web')
