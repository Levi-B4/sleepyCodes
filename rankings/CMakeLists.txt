cmake_minimum_required(VERSION 3.10)
project(RankerApp)

include(FetchContent)

FetchContent_Declare(ftxui
	GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
	GIT_TAG v7.0.0
)
FetchContent_Declare(jsoncpp
	GIT_REPOSITORY https://github.com/open-source-parsers/jsoncpp.git
	GIT_TAG master
)


FetchContent_MakeAvailable(ftxui jsoncpp)


add_executable(ranker_app main.cpp)

target_link_libraries(ranker_app PRIVATE
	ftxui::ftxui
	# ftxui::component
	# ftxui::dom
	# ftxui::screen

	jsoncpp_lib
	#jsoncpp_static
	#jsoncpp_object

)
