cmake_minimum_required(VERSION 3.6.0)
project(Hangman)
include_directories(
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src
	${PROJECT_SOURCE_DIR}/src/Screens
)
file(GLOB SRCS
	"${PROJECT_SOURCE_DIR}/include/*"
	"${PROJECT_SOURCE_DIR}/src/*"
)
add_executable(Hangman ${SRCS})
find_package(ALLEGRO 5 REQUIRED)
target_include_directories(Hangman PRIVATE ${ALLEGRO_INCLUDE_DIRS})
target_link_libraries(Hangman PRIVATE ${ALLEGRO_LIBRARIES})