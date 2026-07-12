#include "appRanker.h"

#include <string>
#include <memory>

#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/component/app.hpp>
#include <ftxui/component/captured_mouse.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_base.hpp>
#include <ftxui/component/component_options.hpp>
#include <ftxui/util/ref.hpp>

using std::string;
using namespace ftxui;

AppRanker::AppRanker(){
	string dataPath;
	string selectedSkill;

	InputOption dataPathOption;
	dataPathOption.multiline = false;
	Component inputDataPath = Input(&dataPath, "Data Path", dataPathOption);
	dataPathOption.on_change = [&](){
		if(isValidDataPath(dataPath)){
			inputDataPath |= color(Color::Green);
		} else {
			inputDataPath |= color(Color::Red);
		}
	};

	InputOption selectedSkillOption;
	selectedSkillOption.multiline = false;
	Component inputSelectedSkill = Input(&selectedSkill, "Selected Skill", selectedSkillOption);

	auto component = Container::Vertical({
		inputDataPath,
		inputSelectedSkill
	});

	auto renderer = Renderer 
		(component, [&] {
		 	return vbox({
				hbox(text("File Name : "), inputDataPath->Render()),
				hbox(text("Skill : "), inputSelectedSkill->Render()),
				separator(),
				text("Data location: " + dataPath),
				text("Skill: " + selectedSkill)
			}) |
			border;
		});

	auto screen = App::TerminalOutput();
	screen.Loop(renderer);
};

bool AppRanker::isValidDataPath(string path){
	return true;
}
