project(Multipackaging LANGUAGES C)
enable_testing(true)

cmake_minimum_required(VERSION 3.22)

set(TARGET_NAME math_calc)

add_executable(${TARGET_NAME} ${TARGET_NAME}.c)

add_test(NAME     ${TARGET_NAME}_noArgs COMMAND ${TARGET_NAME})
set_property(TEST ${TARGET_NAME}_noArgs PROPERTY WILL_FAIL true)

add_test(NAME     ${TARGET_NAME}_tooManyArgs COMMAND ${TARGET_NAME} 1 +2)
set_property(TEST ${TARGET_NAME}_tooManyArgs PROPERTY WILL_FAIL true)

add_test(NAME     ${TARGET_NAME}_Addition COMMAND ${TARGET_NAME} 2+3)
set_property(TEST ${TARGET_NAME}_Addition PROPERTY PASS_REGULAR_EXPRESSION "^5")

add_test(NAME     ${TARGET_NAME}_BigAddition COMMAND ${TARGET_NAME} 12345678+87654321)
set_property(TEST ${TARGET_NAME}_BigAddition PROPERTY PASS_REGULAR_EXPRESSION "^99999999")


INSTALL(TARGETS ${TARGET_NAME}
DESTINATION bin)

# CPack support -
set(CPACK_GENERATOR "ZIP;TGZ")
include (CPack)
