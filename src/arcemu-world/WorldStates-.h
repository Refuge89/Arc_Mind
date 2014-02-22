/*

 */

#pragma once

//////////////////////////////////////////////////////////////////////////
// EOTS (Eye Of The Storm) World States                                 //
//////////////////////////////////////////////////////////////////////////
enum EOTS_WORLD_STATES
{
	// control points - draenei ruins
	WORLDSTATE_EOTS_DRAENEI_RUINS_NETURAL_DISPLAY				= 2731,
	WORLDSTATE_EOTS_DRAENEI_RUINS_ALLIANCE_DISPLAY				= 2732,
	WORLDSTATE_EOTS_DRAENEI_RUINS_HORDE_DISPLAY					= 2733,
	// control points - mage tower
	WORLDSTATE_EOTS_MAGE_TOWER_NETURAL_DISPLAY					= 2728,
	WORLDSTATE_EOTS_MAGE_TOWER_HORDE_DISPLAY					= 2729,
	WORLDSTATE_EOTS_MAGE_TOWER_ALLIANCE_DISPLAY					= 2730,
	// control points - fel reaver ruins
	WORLDSTATE_EOTS_FELREAVER_RUINS_NETURAL_DISPLAY				= 2725,
	WORLDSTATE_EOTS_FELREAVER_RUINS_ALLIANCE_DISPLAY			= 2726,
	WORLDSTATE_EOTS_FELREAVER_RUINS_HORDE_DISPLAY				= 2727,
	// control points - blood elf tower
	WORLDSTATE_EOTS_BLOODELF_TOWER_NEUTRAL_DISPLAY				= 2722,
	WORLDSTATE_EOTS_BLOODELF_TOWER_ALLIANCE_DISPLAY				= 2723,
	WORLDSTATE_EOTS_BLOODELF_TOWER_HORDE_DISPLAY				= 2724,
	// flag
	WORLDSTATE_EOTS_FLAG_NEUTRAL_DISPLAY						= 2757,
	// displays
	WORLDSTATE_EOTS_ALLIANCE_VICTORY_POINTS_DISPLAY				= 2769,
	WORLDSTATE_EOTS_HORDE_VICTORY_POINTS_DISPLAY				= 2770,
	WORLDSTATE_EOTS_ALLIANCE_VICTORYPOINTS						= 2749,
	WORLDSTATE_EOTS_HORDE_VICTORYPOINTS							= 2750,
	WORLDSTATE_EOTS_ALLIANCE_BASES								= 2752,
	WORLDSTATE_EOTS_HORDE_BASES									= 2753,
};

//////////////////////////////////////////////////////////////////////////
// WSG World States                                                     //
//////////////////////////////////////////////////////////////////////////
enum WSG_WORLD_STATES
{
	WORLDSTATE_WSG_ALLIANCE_FLAG_DISPLAY						= 0x922,
	WORLDSTATE_WSG_HORDE_FLAG_DISPLAY							= 0x923,
	WORLDSTATE_WSG_HORDE_SCORE									= 0x62E,
	WORLDSTATE_WSG_ALLIANCE_SCORE								= 0x62D,
	WORLDSTATE_WSG_MAX_SCORE									= 0x641,
};

//////////////////////////////////////////////////////////////////////////
// AB World States                                                      //
//////////////////////////////////////////////////////////////////////////
enum AB_WORLD_STATES
{
	WORLDSTATE_AB_ALLIANCE_RESOURCES							= 0x6F0,
	WORLDSTATE_AB_HORDE_RESOURCES								= 0x6F1,
	WORLDSTATE_AB_HORDE_CAPTUREBASE								= 0x6F2,
	WORLDSTATE_AB_ALLIANCE_CAPTUREBASE							= 0x6F3,
	WORLDSTATE_AB_MAX_SCORE										= 0x6F4,
	// AB define's
	WORLDSTATE_AB_CAPTURED_STABLES_ALLIANCE						= 0x6E7, // 1767
	WORLDSTATE_AB_CAPTURED_STABLES_HORDE						= 0x6E8, // 1768
	WORLDSTATE_AB_CAPTURING_STABLES_ALLIANCE					= 0x6E9, // 1769
	WORLDSTATE_AB_CAPTURING_STABLES_HORDE						= 0x6EA, // 1770
	// 0x6EB is unknown
	WORLDSTATE_AB_CAPTURED_FARM_ALLIANCE						= 0x6EC, // 1772 / 1 is captured by the alliance
	WORLDSTATE_AB_CAPTURED_FARM_HORDE							= 0x6ED, // 1773 / 1 is captured by the horde
	WORLDSTATE_AB_CAPTURING_FARM_ALLIANCE						= 0x6EE, // 1774 / 1 is capturing by the alliance
	WORLDSTATE_AB_CAPTURING_FARM_HORDE							= 0x6EF, // 1775 / 1 is capturing by the horde
	WORLDSTATE_AB_CAPTURED_BLACKSMITH_ALLIANCE					= 0x6F6, // 1782
	WORLDSTATE_AB_CAPTURED_BLACKSMITH_HORDE						= 0x6F7, // 1783
	WORLDSTATE_AB_CAPTURING_BLACKSMITH_ALLIANCE					= 0x6F8, // 1784
	WORLDSTATE_AB_CAPTURING_BLACKSMITH_HORDE					= 0x6F9, // 1785
	// 0x6FA is unknown
	WORLDSTATE_AB_CAPTURED_GOLDMINE_ALLIANCE					= 0x6FB, // 1787
	WORLDSTATE_AB_CAPTURED_GOLDMINE_HORDE						= 0x6FC, // 1788
	WORLDSTATE_AB_CAPTURING_GOLDMINE_ALLIANCE					= 0x6FD, // 1789
	WORLDSTATE_AB_CAPTURING_GOLDMINE_HORDE						= 0x6FE, // 1790
	// 0x6FF is unknown
	WORLDSTATE_AB_CAPTURED_LUMBERMILL_ALLIANCE					= 0x700, // 1792
	WORLDSTATE_AB_CAPTURED_LUMBERMILL_HORDE						= 0x701, // 1793
	WORLDSTATE_AB_CAPTURING_LUMBERMILL_ALLIANCE					= 0x702, // 1794
	WORLDSTATE_AB_CAPTURING_LUMBERMILL_HORDE					= 0x703, // 1795
	WORLDSTATE_AB_SHOW_STABLE_ICON								= 0x732, // 1842
	WORLDSTATE_AB_SHOW_GOLDMINE_ICON							= 0x733, // 1843
	WORLDSTATE_AB_SHOW_LUMBERMILL_ICON							= 0x734, // 1844
	WORLDSTATE_AB_SHOW_FARM_ICON								= 0x735, // 1845
	WORLDSTATE_AB_SHOW_BACKSMITH_ICON							= 0x736, // 1846
};

//////////////////////////////////////////////////////////////////////////
// Arena World States                                                   //
//////////////////////////////////////////////////////////////////////////
enum ARENA_WORLD_STATES
{
	WORLDSTATE_ARENA_BLADESEDGE_GREEN_PLAYER_COUNT				= 3600,
	WORLDSTATE_ARENA_BLADESEDGE_GOLD_PLAYER_COUNT				= 3601,
	WORLDSTATE_ARENA_BLADESEDGE_SCORE_SHOW						= 2547,
	WORLDSTATE_ARENA_NAGRAND_GREEN_PLAYER_COUNT					= 3600,
	WORLDSTATE_ARENA_NAGRAND_GOLD_PLAYER_COUNT					= 3601,
	WORLDSTATE_ARENA_NAGRAND_SCORE_SHOW							= 2577,
	WORLDSTATE_ARENA_LORDAERON_GREEN_PLAYER_COUNT				= 3600,
	WORLDSTATE_ARENA_LORDAERON_GOLD_PLAYER_COUNT				= 3601,
	WORLDSTATE_ARENA_LORDAERON_SCORE_SHOW						= 3002,
	WORLDSTATE_ARENA_WOTLK_GREEN_PLAYER_COUNT					= 3600,
	WORLDSTATE_ARENA_WOTLK_GOLD_PLAYER_COUNT					= 3601,
	WORLDSTATE_ARENA_WOTLK_SCORE_SHOW							= 3610,
};

//////////////////////////////////////////////////////////////////////////
// AV World States                                                      //
//////////////////////////////////////////////////////////////////////////
enum AV_WORLD_STATES
{
	WORLDSTATE_SOTA_ALLIANCE_DEFENDER							= 3565,
	WORLDSTATE_AV_ALLIANCE_SCORE								= 3127,
	WORLDSTATE_AV_HORDE_SCORE									= 3128,
	WORLDSTATE_AV_ALLIANCE_SCORE_DISPLAY						= 3133,
	WORLDSTATE_AV_HORDE_SCORE_DISPLAY							= 3134,
	WORLDSTATE_AV_STORMPIKE_AID_STATION_ALLIANCE_CONTROLLED		= 1325,
	WORLDSTATE_AV_STORMPIKE_AID_STATION_HORDE_CONTROLLED		= 1327,
	WORLDSTATE_AV_STORMPIKE_AID_STATION_ALLIANCE_ASSAULTING		= 1326,
	WORLDSTATE_AV_STORMPIKE_AID_STATION_HORDE_ASSAULTING		= 1328,
	WORLDSTATE_AV_STORMPIKE_GRAVE_ALLIANCE_CONTROLLED			= 1333,
	WORLDSTATE_AV_STORMPIKE_GRAVE_HORDE_CONTROLLED				= 1334,
	WORLDSTATE_AV_STORMPIKE_GRAVE_ALLIANCE_ASSAULTING			= 1335,
	WORLDSTATE_AV_STORMPIKE_GRAVE_HORDE_ASSAULTING				= 1336,
	WORLDSTATE_AV_STONEHEARTH_GRAVE_ALLIANCE_CONTROLLED			= 1302,
	WORLDSTATE_AV_STONEHEARTH_GRAVE_HORDE_CONTROLLED			= 1301,
	WORLDSTATE_AV_STONEHEARTH_GRAVE_ALLIANCE_ASSAULTING			= 1304,
	WORLDSTATE_AV_STONEHEARTH_GRAVE_HORDE_ASSAULTING			= 1303,
	WORLDSTATE_AV_SNOWFALL_GRAVE_NEUTRAL_CONTROLLED				= 1966,
	WORLDSTATE_AV_SNOWFALL_GRAVE_ALLIANCE_CONTROLLED			= 1341,
	WORLDSTATE_AV_SNOWFALL_GRAVE_HORDE_CONTROLLED				= 1342,
	WORLDSTATE_AV_SNOWFALL_GRAVE_ALLIANCE_ASSAULTING			= 1343,
	WORLDSTATE_AV_SNOWFALL_GRAVE_HORDE_ASSAULTING				= 1344,
	WORLDSTATE_AV_IRONDEEP_MINE_ALLIANCE_CONTROLLED				= 1358,
	WORLDSTATE_AV_IRONDEEP_MINE_HORDE_CONTROLLED				= 1359,
	WORLDSTATE_AV_IRONDEEP_MINE_TROGG_CONTROLLED				= 1360,
	WORLDSTATE_AV_COLDTOOTH_MINE_ALLIANCE_CONTROLLED			= 1355,
	WORLDSTATE_AV_COLDTOOTH_MINE_HORDE_CONTROLLED				= 1356,
	WORLDSTATE_AV_COLDTOOTH_MINE_KOBOLD_CONTROLLED				= 1357,
	WORLDSTATE_AV_ICEBLOOD_GRAVE_ALLIANCE_CONTROLLED			= 1346,
	WORLDSTATE_AV_ICEBLOOD_GRAVE_HORDE_CONTROLLED				= 1347,
	WORLDSTATE_AV_ICEBLOOD_GRAVE_ALLIANCE_ASSAULTING			= 1348,
	WORLDSTATE_AV_ICEBLOOD_GRAVE_HORDE_ASSAULTING				= 1349,
	WORLDSTATE_AV_FROSTWOLF_GRAVE_ALLIANCE_CONTROLLED			= 1337,
	WORLDSTATE_AV_FROSTWOLF_GRAVE_HORDE_CONTROLLED				= 1338,
	WORLDSTATE_AV_FROSTWOLF_GRAVE_ALLIANCE_ASSAULTING			= 1339,
	WORLDSTATE_AV_FROSTWOLF_GRAVE_HORDE_ASSAULTING				= 1340,
	WORLDSTATE_AV_FROSTWOLF_RELIEF_HUT_ALLIANCE_CONTROLLED		= 1329,
	WORLDSTATE_AV_FROSTWOLF_RELIEF_HUT_HORDE_CONTROLLED			= 1330,
	WORLDSTATE_AV_FROSTWOLF_RELIEF_HUT_ALLIANCE_ASSAULTING		= 1331,
	WORLDSTATE_AV_FROSTWOLF_RELIEF_HUT_HORDE_ASSAULTING			= 1332,
	WORLDSTATE_AV_DUN_BALDAR_SOUTH_BUNKER_CONTROLLED			= 1362,
	WORLDSTATE_AV_DUN_BALDAR_SOUTH_BUNKER_DESTROYED				= 1371,
	WORLDSTATE_AV_DUN_BALDAR_SOUTH_BUNKER_ASSAULTING			= 1379,
	WORLDSTATE_AV_DUN_BALDAR_NORTH_BUNKER_CONTROLLED			= 1361,
	WORLDSTATE_AV_DUN_BALDAR_NORTH_BUNKER_DESTROYED				= 1370,
	WORLDSTATE_AV_DUN_BALDAR_NORTH_BUNKER_ASSAULTING			= 1378,
	WORLDSTATE_AV_ICEWING_BUNKER_CONTROLLED						= 1363,
	WORLDSTATE_AV_ICEWING_BUNKER_DESTROYED						= 1372,
	WORLDSTATE_AV_ICEWING_BUNKER_ASSAULTING						= 1380,
	WORLDSTATE_AV_STONEHEARTH_BUNKER_CONTROLLED					= 1364,
	WORLDSTATE_AV_STONEHEARTH_BUNKER_DESTROYED					= 1373,
	WORLDSTATE_AV_STONEHEARTH_BUNKER_ASSAULTING					= 1381,
	WORLDSTATE_AV_ICEBLOOD_TOWER_CONTROLLED						= 1385,
	WORLDSTATE_AV_ICEBLOOD_TOWER_DESTROYED						= 1368,
	WORLDSTATE_AV_ICEBLOOD_TOWER_ASSAULTING						= 1390,
	WORLDSTATE_AV_TOWERPOINT_CONTROLLED							= 1384,
	WORLDSTATE_AV_TOWERPOINT_DESTROYED							= 1367,
	WORLDSTATE_AV_TOWERPOINT_ASSAULTING							= 1389,
	WORLDSTATE_AV_FROSTWOLF_EAST_TOWER_CONTROLLED				= 1383,
	WORLDSTATE_AV_FROSTWOLF_EAST_TOWER_DESTROYED				= 1366,
	WORLDSTATE_AV_FROSTWOLF_EAST_TOWER_ASSAULTING				= 1388,
	WORLDSTATE_AV_FROSTWOLF_WEST_TOWER_CONTROLLED				= 1382,
	WORLDSTATE_AV_FROSTWOLF_WEST_TOWER_DESTROYED				= 1365,
	WORLDSTATE_AV_FROSTWOLF_WEST_TOWER_ASSAULTING				= 1387,
};

//////////////////////////////////////////////////////////////////////////
// Common World States                                                  //
//////////////////////////////////////////////////////////////////////////
enum COMMON_WORLD_STATES
{
	WORLDSTATE_EOTS_PVP_CAPTURE_BAR_DISPLAY						= 2718,
	WORLDSTATE_EOTS_PVP_CAPTURE_BAR_VALUE						= 2719,
};

//////////////////////////////////////////////////////////////////////////
// Battleground Strand of the Ancients                                  //
//////////////////////////////////////////////////////////////////////////
enum SOTA_WORLD_STATES
{
	// Progress bar
	WORLDSTATE_SOTA_CAPTURE_BAR_DISPLAY							= 3536,
	WORLDSTATE_SOTA_CAPTURE_BAR_VALUE							= 3537,
	// Attacker - Defender, they are same
	WORLDSTATE_SOTA_ALLIANCE_ATTACKER							= 4352,
	WORLDSTATE_SOTA_HORDE_ATTACKER								= 4353,
	// Timers
	WORLDSTATE_SOTA_BONUS_TIME									= 3571,
	WORLDSTATE_SOTA_TIMER_1										= 3559, // first digit
	WORLDSTATE_SOTA_TIMER_2										= 3560, // second digit
	WORLDSTATE_SOTA_TIMER_3										= 3561, // third digit
	// gates' poi, etc...
	WORLDSTATE_SOTA_CHAMBER_OF_THE_ANCIENT_RELICS				= 3849,
	WORLDSTATE_SOTA_GATES_OF_THE_BLUE_SAPPHIRE					= 3620,
	WORLDSTATE_SOTA_GATES_OF_THE_GREEN_EMERALD					= 3623,
	WORLDSTATE_SOTA_GATES_OF_THE_PURPLE_AMETHYST				= 3614,
	WORLDSTATE_SOTA_GATES_OF_THE_RED_SUN						= 3617,
	WORLDSTATE_SOTA_GATES_OF_THE_YELLOW_MOON					= 3638,
	WORLDSTATE_SOTA_SOUTH_GRAVEYARD_ALLIANCE_CONTROLLED			= 3637,
	WORLDSTATE_SOTA_SOUTH_GRAVEYARD_HORDE_CONTROLLED			= 3634,
	WORLDSTATE_SOTA_EAST_GRAVEYARD_ALLIANCE_CONTROLLED			= 3636,
	WORLDSTATE_SOTA_EAST_GRAVEYARD_HORDE_CONTROLLED				= 3632,
	WORLDSTATE_SOTA_WEST_GRAVEYARD_ALLIANCE_CONTROLLED			= 3635,
	WORLDSTATE_SOTA_WEST_GRAVEYARD_HORDE_CONTROLLED				= 3633,
	// Boats
	WORLDSTATE_SOTA_THE_BLIGHTBRINGER							= 3628, // Horde offense
	WORLDSTATE_SOTA_THE_CASKET_CARRIER							= 3629, // Horde offense
	WORLDSTATE_SOTA_THE_FROSTBREAKER							= 3626, // Allince offense
	WORLDSTATE_SOTA_THE_GRACEFUL_MAIDEN							= 3627, // Allince offense
};

//////////////////////////////////////////////////////////////////////////
// Battleground Isle of Conquest                                        //
//////////////////////////////////////////////////////////////////////////
enum IOC_WORLD_STATES
{
	WORLDSTATE_IOC_ALLIANCE_SCORE								= 4221,
	WORLDSTATE_IOC_HORDE_SCORE									= 4222,
	WORLDSTATE_IOC_ALLIANCE_EAST_GATE							= 4326,
	WORLDSTATE_IOC_ALLIANCE_GATE_DESTROYED_1					= 4323, // wich gate is it?	(east)
	WORLDSTATE_IOC_ALLIANCE_GATE_DESTROYED_2					= 4325, // wich gate is it? (west)
	WORLDSTATE_IOC_ALLIANCE_GATE_DESTROYED_3					= 4324, // wich gate is it? (fornt)
	WORLDSTATE_IOC_ALLIANCE_WEST_GATE							= 4327,
	WORLDSTATE_IOC_ALLIANCE_FRONT_GATE							= 4328,
	WORLDSTATE_IOC_ALLIANCE_KEEP_ALLIANCE_CONTROLLED			= 4339,	
	WORLDSTATE_IOC_ALLIANCE_KEEP_HORDE_CONTROLLED				= 4340,
	WORLDSTATE_IOC_ALLIANCE_KEEP_ALLIANCE_ASSAULTED				= 4342,
	WORLDSTATE_IOC_ALLIANCE_KEEP_HORDE_ASSAULTED				= 4343,
	WORLDSTATE_IOC_ALLIANCE_KEEP_NETURAL						= 4341,
	WORLDSTATE_IOC_HORDE_KEEP_ALLIANCE_CONTROLLED				= 4344,
	WORLDSTATE_IOC_HORDE_KEEP_HORDE_CONTROLLED					= 4345,
	WORLDSTATE_IOC_HORDE_KEEP_ALLIANCE_ASSAULTED				= 4347,
	WORLDSTATE_IOC_HORDE_KEEP_HORDE_ASSAULTED					= 4348,
	WORLDSTATE_IOC_HORDE_KEEP_NETURAL							= 4346,
	WORLDSTATE_IOC_DOCKS_ALLIANCE_CONTROLLED					= 4304,
	WORLDSTATE_IOC_DOCKS_HORDE_CONTROLLED						= 4303,
	WORLDSTATE_IOC_DOCKS_ALLIANCE_ASSAULTED						= 4305,
	WORLDSTATE_IOC_DOCKS_HORDE_ASSAULTED						= 4302,
	WORLDSTATE_IOC_DOCKS_NETURAL								= 4301,
	WORLDSTATE_IOC_HANGAR_ALLIANCE_CONTROLLED					= 4299,
	WORLDSTATE_IOC_HANGAR_HORDE_CONTROLLED						= 4298,
	WORLDSTATE_IOC_HANGAR_ALLIANCE_ASSAULTED					= 4300,
	WORLDSTATE_IOC_HANGAR_HORDE_ASSAULTED						= 4297,
	WORLDSTATE_IOC_HANGAR_NETURAL								= 4296,
	WORLDSTATE_IOC_QUARRY_ALLIANCE_CONTROLLED					= 4309,
	WORLDSTATE_IOC_QUARRY_HORDE_CONTROLLED						= 4308,
	WORLDSTATE_IOC_QUARRY_ALLIANCE_ASSAULTED					= 4310,
	WORLDSTATE_IOC_QUARRY_HORDE_ASSAULTED						= 4307,
	WORLDSTATE_IOC_QUARRY_NETURAL								= 4306,
	WORLDSTATE_IOC_REFINERY_ALLIANCE_CONTROLLED					= 4314,
	WORLDSTATE_IOC_REFINERY_HORDE_CONTROLLED					= 4313,
	WORLDSTATE_IOC_REFINERY_ALLIANCE_ASSAULTED					= 4315,
	WORLDSTATE_IOC_REFINERY_HORDE_ASSAULTED						= 4312,
	WORLDSTATE_IOC_REFINERY_NETURAL								= 4311,
	WORLDSTATE_IOC_WORKSHOP_ALLIANCE_CONTROLLED					= 4229,
	WORLDSTATE_IOC_WORKSHOP_HORDE_CONTROLLED					= 4230,
	WORLDSTATE_IOC_WORKSHOP_ALLIANCE_ASSAULTED					= 4228,
	WORLDSTATE_IOC_WORKSHOP_HORDE_ASSAULTED						= 4293,
	WORLDSTATE_IOC_WORKSHOP_NETURAL								= 4294,
	WORLDSTATE_IOC_HORDE_EAST_GATE								= 4319,
	WORLDSTATE_IOC_HORDE_GATE_DESTROYED_1						= 4322, // wich gate is it? (front)
	WORLDSTATE_IOC_HORDE_GATE_DESTROYED_2						= 4320, // wich gate is it? (east)
	WORLDSTATE_IOC_HORDE_GATE_DESTROYED_3						= 4321, // wich gate is it? (west)
	WORLDSTATE_IOC_HORDE_WEST_GATE								= 4318,
	WORLDSTATE_IOC_HORDE_FRONT_GATE								= 4317,	
};

//////////////////////////////////////////////////////////////////////////
// World PvP Hellfire Peninsula                                         //
//////////////////////////////////////////////////////////////////////////
enum HELLFIRE_PENINSULA_WORLD_STATES
{
	// Tower Counter Value
	WORLDSTATE_HELLFIRE_ALLIANCE_TOWERS_CONTROLLED				= 2476,
	WORLDSTATE_HELLFIRE_HORDE_TOWERS_CONTROLLED					= 2478,
	// Tower Counter Display
	WORLDSTATE_HELLFIRE_TOWER_DISPLAY_ALLIANCE					= 2490,
	WORLDSTATE_HELLFIRE_TOWER_DISPLAY_HORDE						= 2489,
	// PvP Capture Bar
	WORLDSTATE_HELLFIRE_PVP_CAPTURE_BAR_DISPLAY					= 2473,
	WORLDSTATE_HELLFIRE_PVP_CAPTURE_BAR_VALUE					= 2474,
	// The Stadium Control Point
	WORLDSTATE_HELLFIRE_STADIUM_NEUTRAL							= 2472,
	WORLDSTATE_HELLFIRE_STADIUM_ALLIANCE						= 2471,
	WORLDSTATE_HELLFIRE_STADIUM_HORDE							= 2470,
	// The Overlook Control Point
	WORLDSTATE_HELLFIRE_OVERLOOK_NEUTRAL						= 2482,
	WORLDSTATE_HELLFIRE_OVERLOOK_ALLIANCE						= 2480,
	WORLDSTATE_HELLFIRE_OVERLOOK_HORDE							= 2481,
	// Broken Hill Control Point
	WORLDSTATE_HELLFIRE_BROKENHILL_NEUTRAL						= 2485,
	WORLDSTATE_HELLFIRE_BROKENHILL_ALLIANCE						= 2483,
	WORLDSTATE_HELLFIRE_BROKENHILL_HORDE						= 2484,
	// Zone ID, used in many places.
	ZONE_HELLFIRE_PENINSULA										= 3483,
};

//////////////////////////////////////////////////////////////////////////
// World PvP Nagrand/Halaa                                              //
//////////////////////////////////////////////////////////////////////////
enum NAGRAND_WORLD_STATES
{
	// Guard Display
	WORLDSTATE_HALAA_GUARD_DISPLAY_ALLIANCE						= 2502,
	WORLDSTATE_HALAA_GUARD_DISPLAY_HORDE						= 2503,
	// Guard Fields
	WORLDSTATE_HALAA_GUARDS_REMAINING							= 2491,
	WORLDSTATE_HALAA_GUARDS_REMAINING_MAX						= 3493,
	// Zone ID
	ZONE_NAGRAND												= 3518,
};

//////////////////////////////////////////////////////////////////////////
// World PvP Silithus                                                   //
//////////////////////////////////////////////////////////////////////////
enum SILITHUS_WORLD_STATES
{
	ZONE_SILITHUS												= 1377,
	WORLDSTATE_SILITHUS_GATHERED_ALLIANCE						= 2313,
	WORLDSTATE_SILITHUS_GATHERED_HORDE							= 2314,
	// really not needed
	WORLDSTATE_SILITHUS_SILITHYST_MAX							= 2317,
};

//////////////////////////////////////////////////////////////////////////
// World PvP Zangarmarsh                                                //
//////////////////////////////////////////////////////////////////////////
enum ZANGARMARSH_WORLD_STATES
{
	ZONE_ZANGARMARSH											= 3521,
	// tower stuff
	WORLDSTATE_ZANGARMARSH_EAST_NEUTRAL_MAP						= 2652,
	WORLDSTATE_ZANGARMARSH_EAST_ALLIANCE_MAP					= 2650,
	WORLDSTATE_ZANGARMARSH_EAST_HORDE_MAP						= 2651,
	WORLDSTATE_ZANGARMARSH_EAST_NEUTRAL_UI						= 2560,
	WORLDSTATE_ZANGARMARSH_EAST_ALLIANCE_UI						= 2558,
	WORLDSTATE_ZANGARMARSH_EAST_HORDE_UI						= 2559,
	WORLDSTATE_ZANGARMARSH_WEST_NEUTRAL_MAP						= 2646,
	WORLDSTATE_ZANGARMARSH_WEST_ALLIANCE_MAP					= 2644,
	WORLDSTATE_ZANGARMARSH_WEST_HORDE_MAP						= 2645,
	WORLDSTATE_ZANGARMARSH_WEST_NEUTRAL_UI						= 2557,
	WORLDSTATE_ZANGARMARSH_WEST_ALLIANCE_UI						= 2555,
	WORLDSTATE_ZANGARMARSH_WEST_HORDE_UI						= 2556,
	// capture bars
	WORLDSTATE_ZANGARMARSH_CAPTURE_BAR_DISPLAY_WEST				= 2527,
	WORLDSTATE_ZANGARMARSH_CAPTURE_BAR_VALUE_WEST				= 2528,
	WORLDSTATE_ZANGARMARSH_CAPTURE_BAR_DISPLAY_EAST				= 2533,
	WORLDSTATE_ZANGARMARSH_CAPTURE_BAR_VALUE_EAST				= 2534,
	// flag
	// ally
	WORLDSTATE_ZANGARMARSH_SCOUT_READY_ALLIANCE					= 2655,
	WORLDSTATE_ZANGARMARSH_SCOUT_NOT_READY_ALLIANCE				= 2656,
	// horde
	WORLDSTATE_ZANGARMARSH_SCOUT_READY_HORDE					= 2658,
	WORLDSTATE_ZANGARMARSH_SCOUT_NOT_READY_HORDE				= 2657,
	WORLDSTATE_ZANGARMARSH_CITY_NEUTRAL							= 2647,
	WORLDSTATE_ZANGARMARSH_CITY_ALLIANCE						= 2648,
	WORLDSTATE_ZANGARMARSH_CITY_HORDE							= 2649,
};

//////////////////////////////////////////////////////////////////////////
// World PvP Terokkar Forest                                            //
//////////////////////////////////////////////////////////////////////////
enum TEROKKAR_FOREST_WORLD_STATES
{
	// Zone ID
	ZONE_TEROKKAR_FOREST										= 3519,
	WORLDSTATE_TEROKKAR_TOWER1_NEUTRAL							= 2681,
	WORLDSTATE_TEROKKAR_TOWER1_ALLIANCE							= 2683,
	WORLDSTATE_TEROKKAR_TOWER1_HORDE							= 2682,
	WORLDSTATE_TEROKKAR_TOWER2_NEUTRAL							= 2686,
	WORLDSTATE_TEROKKAR_TOWER2_ALLIANCE							= 2684,
	WORLDSTATE_TEROKKAR_TOWER2_HORDE							= 2685,
	WORLDSTATE_TEROKKAR_TOWER3_NEUTRAL							= 2690,
	WORLDSTATE_TEROKKAR_TOWER3_ALLIANCE							= 2688,
	WORLDSTATE_TEROKKAR_TOWER3_HORDE							= 2689,
	WORLDSTATE_TEROKKAR_TOWER4_NEUTRAL							= 2696,
	WORLDSTATE_TEROKKAR_TOWER4_ALLIANCE							= 2694,
	WORLDSTATE_TEROKKAR_TOWER4_HORDE							= 2695,
	WORLDSTATE_TEROKKAR_TOWER5_NEUTRAL							= 2693,
	WORLDSTATE_TEROKKAR_TOWER5_ALLIANCE							= 2691,
	WORLDSTATE_TEROKKAR_TOWER5_HORDE							= 2692,
	WORLDSTATE_TEROKKAR_ALLIANCE_TOWERS_CONTROLLED				= 2621,
	WORLDSTATE_TEROKKAR_HORDE_TOWERS_CONTROLLED					= 2622,
	WORLDSTATE_TEROKKAR_PVP_CAPTURE_BAR_DISPLAY					= 2623,
	WORLDSTATE_TEROKKAR_PVP_CAPTURE_BAR_VALUE					= 2625,
};

//////////////////////////////////////////////////////////////////////////
// World PvP Wintergrasp                                                //
//////////////////////////////////////////////////////////////////////////
enum WINTERGRASP_WORLD_STATES
{
	// GV == graveyard
	// WS == workshop
	ZONE_WINTERGRASP											= 4197,
	WORLDSTATE_WG_ALLIANCE_CONTROLLED							= 3803,
	WORLDSTATE_WG_HORDE_CONTROLLED								= 3802,
	// Towers
	WORLDSTATE_WG_TOWER_NE										= 3712,
	WORLDSTATE_WG_TOWER_NW										= 3711,
	WORLDSTATE_WG_TOWER_SE										= 3714,
	WORLDSTATE_WG_TOWER_SW										= 3713,
	WORLDSTATE_WG_SHADOW_SHIGHT_TOWER							= 3704,
	WORLDSTATE_WG_FLAMEWATCH_TOWER								= 3706,
	WORLDSTATE_WG_WINTERSEDGE_TOWER								= 3705,
	// ???
	WORLDSTATE_WG_GATE											= 3763,
	// Graveyards
	WORLDSTATE_WG_SE_GV											= 3703,
	WORLDSTATE_WG_SW_GV											= 3702,
	WORLDSTATE_WG_FORTESS_GV									= 3773,
	// Workshops
	WORLDSTATE_WG_SUNKEN_RING_WS								= 3701,
	WORLDSTATE_WG_BROKEN_TEMPLE_WS								= 3700,
	WORLDSTATE_WG_EASTSPARK_WS									= 3703,
	WORLDSTATE_WG_FORTESS_WS_E									= 3699,
	WORLDSTATE_WG_FORTESS_WS_W									= 3698,
	WORLDSTATE_WG_WESTSPARK_WS									= 3702,
	// Walls
	WORLDSTATE_WG_FORTESS_WALL_1								= 3749,
	WORLDSTATE_WG_FORTESS_WALL_2								= 3750,
	WORLDSTATE_WG_FORTESS_WALL_3								= 3751,
	WORLDSTATE_WG_FORTESS_WALL_4								= 3752,
	WORLDSTATE_WG_FORTESS_WALL_5								= 3753,
	WORLDSTATE_WG_FORTESS_WALL_6								= 3754,
	WORLDSTATE_WG_FORTESS_WALL_7								= 3755,
	WORLDSTATE_WG_FORTESS_WALL_8								= 3756,
	WORLDSTATE_WG_FORTESS_WALL_9								= 3757,
	WORLDSTATE_WG_FORTESS_WALL_10								= 3758,
	WORLDSTATE_WG_FORTESS_WALL_11								= 3759,
	WORLDSTATE_WG_FORTESS_WALL_12								= 3760,
	WORLDSTATE_WG_FORTESS_WALL_13								= 3761,
	WORLDSTATE_WG_FORTESS_WALL_14								= 3762,
	WORLDSTATE_WG_FORTESS_WALL_15								= 3764,
	WORLDSTATE_WG_FORTESS_WALL_16								= 3765,
	WORLDSTATE_WG_FORTESS_WALL_17								= 3766,
	WORLDSTATE_WG_FORTESS_WALL_18								= 3767,
	WORLDSTATE_WG_FORTESS_WALL_19								= 3768,
	WORLDSTATE_WG_FORTESS_WALL_20								= 3769,
	WORLDSTATE_WG_FORTESS_WALL_21								= 3770,
	WORLDSTATE_WG_FORTESS_WALL_22								= 3771,
	WORLDSTATE_WG_FORTESS_WALL_23								= 3772,
};