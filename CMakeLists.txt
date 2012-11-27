project(baz)

cmake_minimum_required(VERSION 2.8)

# package version
set(PACKAGE_MAJOR_VERSION "0")
set(PACKAGE_MINOR_VERSION "1")
set(PACKAGE_BUILD_VERSION "0")
set(PACKAGE_VERSION "${PACKAGE_MAJOR_VERSION}.${PACKAGE_MINOR_VERSION}.${PACKAGE_BUILD_VERSION}")

# include modules
include(FeatureSummary)
include(GNUInstallDirs)				# cmake 2.8.5

find_package(BAR 0.1.0 REQUIRED)
find_package(FOO 0.1.0 REQUIRED)

add_subdirectory("src")

# status and debug output
message(STATUS "FOO_LIBRARIES:    ${FOO_LIBRARIES}")
message(STATUS "FOO_INCLUDE_DIRS: ${FOO_INCLUDE_DIRS}")
message(STATUS "BAR_LIBRARIES:    ${BAR_LIBRARIES}")
message(STATUS "BAR_INCLUDE_DIRS: ${BAR_INCLUDE_DIRS}")
feature_summary(WHAT ALL)
