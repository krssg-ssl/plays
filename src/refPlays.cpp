#include "refPlays.hpp"

namespace Strategy{
	HaltRP::HaltRP(const krssg_ssl_msgs::BeliefState& state) : RefereePlay(state, HALT) {
		
		name = "Halt RefereePlay";
		assert(HomeTeam::SIZE == 6);

		Tactic::Param param;
		for(int i=0;i<6;i++){
			roleList[i].push_back(std::make_pair("TStop", param));
		}
	}

	void HaltRP::updateParam() {
		Tactic::Param param;
		for(int i=0;i<6;i++){
			roleList[i].clear();
			roleList[i].push_back(std::make_pair("TStop", param));
		}
	}
}