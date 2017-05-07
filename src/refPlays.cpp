#include "refPlays.hpp"

namespace Strategy {
// Halt Referee play function starts
HaltRP::HaltRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, HALT) {

	name = "Halt RefereePlay";
	assert(HomeTeam::SIZE == 6);

	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}

void HaltRP::updateParam() {
	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].clear();
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}
// Halt Referee play functions end


// TimeoutYellowRP  function starts---
TimeoutYellowRP::TimeoutYellowRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, TIMEOUT_YELLOW) {

	name = "TimeoutYellow RefereePlay";
	assert(HomeTeam::SIZE == 6);

	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}

void TimeoutYellowRP::updateParam() {
	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].clear();
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}
// TimeoutYellowRP  function end

// TimeoutBlueRP  function starts---
TimeoutBlueRP::TimeoutBlueRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, TIMEOUT_BLUE) {

	name = "TimeoutBlueRP RefereePlay";
	assert(HomeTeam::SIZE == 6);

	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}

void TimeoutBlueRP::updateParam() {
	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].clear();
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}
// TimeoutBlueRP  function end

// GoalYellowRP  function starts---
GoalYellowRP::GoalYellowRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, GOAL_YELLOW) {

	name = "GoalYellow RefereePlay";
	assert(HomeTeam::SIZE == 6);

	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}

void GoalYellowRP::updateParam() {
	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].clear();
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}
// GoalYellowRP  function end

// GoalBlueRP  function starts---
GoalBlueRP::GoalBlueRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, GOAL_BLUE) {

	name = "GoalBlue RefereePlay";
	assert(HomeTeam::SIZE == 6);

	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}

void GoalBlueRP::updateParam() {
	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].clear();
		roleList[i].push_back(std::make_pair("TStop", param));
	}
}
// GoalBlueRP  function end

// BallPlacementYellowRP  function starts---
BallPlacementYellowRP::BallPlacementYellowRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, BALL_PLACEMENT_YELLOW) {

	name = "BallPlacementYellow RefereePlay";
	assert(HomeTeam::SIZE == 6);

	Tactic::Param param;
	for (int i = 0; i < 5; i++) {
		roleList[i].push_back(std::make_pair("TStop", param));
	}
	roleList[5].push_back(std::make_pair("TPassToPoint", param));	//param--where ball should be passed(designated area)


}

void BallPlacementYellowRP::updateParam() {
	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].clear();
		roleList[i].push_back(std::make_pair("TStop", param));
	}
	roleList[5].push_back(std::make_pair("TPassToPoint", param));	//param--where ball should be passed(designated area)
}
// BallPlacementYellowRP  function end

// BallPlacementBlueRP  function starts---
BallPlacementBlueRP::BallPlacementBlueRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, BALL_PLACEMENT_BLUE) {

	name = "BallPlacementBlue RefereePlay";
	assert(HomeTeam::SIZE == 6);

	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].push_back(std::make_pair("TStop", param));
	}
	roleList[5].push_back(std::make_pair("TPassToPoint", param));  //param--where ball should be passed(designated area)

}


void BallPlacementBlueRP::updateParam() {
	Tactic::Param param;
	for (int i = 0; i < 6; i++) {
		roleList[i].clear();
		roleList[i].push_back(std::make_pair("TStop", param));
	}
	roleList[5].push_back(std::make_pair("TPassToPoint", param));	//param--where ball should be passed(designated area)
}
// BallPlacementBlueRP  function end


// Add the remaining class functions here
}