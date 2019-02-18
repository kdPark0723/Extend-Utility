include_directories(
	include/
	.
)

# arguments test
add_executable(arguments_test
	src/arguments.cpp
    test/arguments_test.cpp
)