cmake_minimum_required(VERSION 3.14)
project(MyApp LANGUAGES C)

find_package(OpenSSL REQUIRED)

# 3) Create your executable
add_executable(MyApp main.c)

# 4) Link libsodium to your executable
# Typically the target name is "sodium", but older versions might call it "libsodium".
target_link_libraries(MyApp PRIVATE OpenSSL::SSL OpenSSL::Crypto)
