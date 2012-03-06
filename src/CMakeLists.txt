set(BAZ_SRC
	baz.c
)

include_directories(
	${BAR_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME} ${BAZ_SRC})
target_link_libraries(${PROJECT_NAME}
	bar-shared
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
