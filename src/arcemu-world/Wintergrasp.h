/*
 */

#pragma once

#define WINTERGRASP 4197

#define A_NUMVEH_WORLDSTATE 3680
#define A_MAXVEH_WORLDSTATE 3681
#define H_NUMVEH_WORLDSTATE 3490
#define H_MAXVEH_WORLDSTATE 3491
#define HORDE_CONTROLLED 3802
#define ALLIANCE_CONTROLLED 3803

#define WGSPELL_ESSENCE_OF_WINTERGRASP 57940
#define WGSPELL_TENACITY 59911

#define DEFENDERS_PORTAL 190763

const uint32 ClockWorldState[5] = { 3785, 3784, 3782, 3976, 3975};

typedef std::set<Creature*> CreatureSwapSet;
typedef std::set<Player*> WintergraspPlayerSet;

class Wintergrasp
{
	public:
		Wintergrasp(WintergraspInternal* WGI, MapMgr* mgr);
		~Wintergrasp();
		static Wintergrasp* Create( WintergraspInternal* i, MapMgr* m) { return new Wintergrasp(i, m); }
		void Init();
		void End();
		void OnAddPlayer(Player* plr);
		void OnRemovePlayer(Player* plr);

		WintergraspPlayerSet WGPlayers;
		CreatureSwapSet WGCreatures[2];
		uint32 GetNumVehicles(uint32 team) { if(team > 1) return 0; return numvehicles[team]; };
		uint32 GetNumWorkshops(uint32 team) { if(team > 1) return 0; return numworkshop[team]; };


		ARCEMU_INLINE uint64 GetID() { return WGID; };

	private:
		WintergraspInternal Internal;

		// Counts
		uint32 playercount[3];

		// Buildings

		// Vehicles
		uint32 numvehicles[2];

		// Workshops
		uint32 numworkshop[2];

		// Same as BattleGround id
		uint64 WGID;
};
