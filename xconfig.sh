# You have to define DEVELOP variable as a path to your development 
# directory in your .bashrc (or .zshrc if you use zsh) file

# Environment variables C_COMPILER and CXX_COMPILER have to be 
# defined in your .bashrc (or .zshrc if you're using zsh) file as well.
# Usually path to compiler looks like "/usr/bin/gcc" or "/usr/bin/clang".
# However, it might differ if you've installed it in other directory.

/usr/bin/cmake --no-warn-unused-cli \
    -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/gcc \
    -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/g++ \
    -S/home/dino/dev/cpp/leetcode/hashfunc \
    -B/home/dino/dev/cpp/leetcode/hashfunc/build \
    -G Ninja
