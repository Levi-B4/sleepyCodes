cmake_minimum_required(VERSION 3.10)
project(RankerApp)

include(FetchContent)
FetchContent_Declare(ftxui
	GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
	GIT_TAG v7.0.0
)
FetchContent_MakeAvailable(ftxui)


add_executable(ranker_app main.cpp)

target_link_libraries(ranker_app PRIVATE
	# Use the umbrella target (recommended)
	ftxui::ftxui

	# Or chose a submodule
	# ftxui::component
	# ftxui::dom
	# ftxui::screen
)
