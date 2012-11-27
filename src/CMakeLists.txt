set(BAZ_SRC
	baz.c
)

include_directories(
	${FOO_INCLUDE_DIRS}
	${BAR_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME} ${BAZ_SRC})
target_link_libraries(${PROJECT_NAME}
	${FOO_LIBRARIES}
	${BAR_LIBRARIES}
)

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
