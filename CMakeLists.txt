include_directories(
	include/
	.
)

# arguments test
add_executable(arguments_test
    test/arguments_test.cc
)

# verison test
add_executable(verison_test
    test/version_test.cc
)

# preprocessor test
add_executable(preprocessor_test
    test/preprocessor_test.cc
)