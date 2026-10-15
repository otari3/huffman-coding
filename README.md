# huffman-coding

find_package(PkgConfig REQUIRED)
pkg_check_modules(CRITERION REQUIRED IMPORTED_TARGET criterion)

add_executable()
target_link_libraries(dynamic_array_tests PRIVATE PkgConfig::CRITERION)