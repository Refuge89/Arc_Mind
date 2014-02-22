PROJECT(world)
SET( prefix ${ROOT_PATH}/src/arcemu-world )
SET(sources
	AchievementInterface.cpp 
	AddonMgr.cpp 
	AIInterface.cpp 
	AlteracValley.cpp 
	ArathiBasin.cpp 
	AreaTrigger.cpp 
	Arenas.cpp 
	ArenaTeam.cpp 
	AuctionHouse.cpp 
	AuctionMgr.cpp 
	BattlegroundCommands.cpp 
	BattlegroundHandler.cpp 
	BattlegroundMgr.cpp 
	CalendarHandler.cpp 
	ChainAggroEntity.cpp 
	Channel.cpp 
	ChannelHandler.cpp 
	CharacterHandler.cpp 
	Chat.cpp 
	ChatHandler.cpp 
	ClusterInterface.cpp 
	CollideInterface.cpp 
	CombatHandler.cpp 
	ConsoleCommands.cpp 
	ConsoleListener.cpp 
	Container.cpp 
	Corpse.cpp 
	Creature.cpp 
	DayWatcherThread.cpp 
	debugcmds.cpp 
	DuelHandler.cpp 
	DynamicObject.cpp 
	EventableObject.cpp 
	EventMgr.cpp 
	EyeOfTheStorm.cpp 
	faction.cpp 
	GameObject.cpp 
	GMTicket.cpp 
	Group.cpp 
	GroupHandler.cpp 
	Guild.cpp 
	GuildHandler.cpp 
	HonorHandler.cpp 
	IsleOfConquest.cpp 
	Item.cpp 
	ItemHandler.cpp 
	ItemInterface.cpp 
	Level0.cpp 
	Level1.cpp 
	Level2.cpp 
	Level3.cpp 
	LfgHandler.cpp 
	LfgMgr.cpp 
	LogonCommClient.cpp 
	LogonCommHandler.cpp 
	LootMgr.cpp 
	MailSystem.cpp 
	Main.cpp 
	Map.cpp 
	MapCell.cpp 
	MapMgr.cpp 
	MapScriptInterface.cpp 
	Master.cpp 
	MiscHandler.cpp 
	MovementHandler.cpp 
	NPCHandler.cpp 
	Object.cpp 
	ObjectMgr.cpp 
	ObjectStorage.cpp 
	Opcodes.cpp 
	Pet.cpp 
	PetHandler.cpp 
	Player.cpp 
	PlayerPacketWrapper.cpp 
	QueryHandler.cpp 
	Quest.cpp 
	QuestCommands.cpp 
	QuestHandler.cpp 
	QuestMgr.cpp 
	RaidHandler.cpp 
	RecallCommands.cpp 
	ReputationHandler.cpp 
	ScriptMgr.cpp 
	SkillHandler.cpp 
	SocialHandler.cpp 
	Spell.cpp 
	SpellAuras.cpp 
	SpellEffects.cpp 
	SpellFixes.cpp 
	SpellHandler.cpp 
	SpellTarget.cpp 
	Stats.cpp 
	StdAfx.cpp 
	StrandOfTheAncients.cpp 
	TaxiHandler.cpp 
	TaxiMgr.cpp 
	TerrainMgr.cpp 
	TradeHandler.cpp 
	TransporterHandler.cpp 
	Unit.cpp 
	Vehicle.cpp 
	VehicleHandler.cpp 
	VoiceChatHandler.cpp 
	WarsongGulch.cpp 
	WayPoints.cpp 
	WeatherMgr.cpp 
	Wintergrasp.cpp 
>	WintergraspInternal.cpp 
	WordFilter.cpp 
	WorkerServerClient.cpp 
	World.cpp 
	WorldCreator.cpp 
	WorldRunnable.cpp 
	WorldSession.cpp 
	WorldSocket.cpp 
	WorldSocketCluster.cpp 
	WorldStateManager.cpp )

SET( headers
	AchievementDefines.h
	AchievementInterface.h
	AddonMgr.h
	AIInterface.h
	AlteracValley.h
	ArathiBasin.h
	AreaTrigger.h
	Arenas.h
	ArenaTeam.h
	AuctionHouse.h
	AuctionMgr.h
	BaseConsole.h
	BattlegroundMgr.h
	CellHandler.h
	ChainAggroEntity.h
	Channel.h
	ChannelMgr.h
	Chat.h
	ClassSpells.h
	ClusterInterface.h
	CollideInterface.h
	ConsoleCommands.h
	Const.h
	Corpse.h
	Creature.h
	DayWatcherThread.h
	DynamicObject.h
	EventableObject.h
	EventMgr.h
	EyeOfTheStorm.h
	faction.h
	GameObject.h
	Group.h
	Guild.h
	GuildDefines.h
	HonorHandler.h
	IsleOfConquest.h
	Item.h
	ItemInterface.h
	ItemPrototype.h
	LfgMgr.h
	LogonCommClient.h
	LogonCommHandler.h
	LootMgr.h
	MailSystem.h
	MainServerDefines.h
	Map.h
	MapCell.h
	MapMgr.h
	MapScriptInterface.h
	Master.h
	MiscHandler.h
	NameTables.h
	NPCHandler.h
	Object.h
	ObjectMgr.h
	ObjectStorage.h
	Opcodes.h
	Packets.h
	Pet.h
	Player.h
	Quest.h
	QuestMgr.h
	ScriptMgr.h
	ScriptSetup.h
	Skill.h
	SkillNameMgr.h
	Spell.h
	SpellAuras.h
	SpellDefines.h
	SpellNameHashes.h
	Stats.h
	StdAfx.h
	StrandOfTheAncients.h
	TaxiMgr.h
	TerrainMgr.h
	TransporterHandler.h
	Unit.h
	UpdateFields.h
	Vehicle.h
	WarsongGulch.h
	WeatherMgr.h
	Wintergrasp.h
	WintergraspInternal.h
	WordFilter.h
	WorkerServerClient.h
	World.h
	World.rc
	WorldCreator.h
	WorldRunnable.h
	WorldSession.h
	WorldSocket.h
	WorldStateManager.h
	WorldStates.h
)
	

foreach(src IN ITEMS ${sources} )
  SET( SRCS ${SRCS} ${prefix}/${src} )
endforeach(src)
foreach(src IN ITEMS ${headers} )
  SET( HEADERS ${HEADERS} ${prefix}/${src} )
endforeach(src)

include(PCHSupport)
include_directories( ${GLOBAL_INCLUDE_DIRS} )
link_directories( ${DEPENDENCY_LIBS} ${EXTRA_LIBS_PATH} )

add_executable( ${PROJECT_NAME} ${SRCS} ${HEADERS} )

IF( CMAKE_GENERATOR MATCHES Visual*)
	ADD_NATIVE_PRECOMPILED_HEADER(${PROJECT_NAME} StdAfx.h ${prefix}/StdAfx.cpp)
ENDIF()
set_target_properties(${PROJECT_NAME} PROPERTIES ENABLE_EXPORTS TRUE)

add_dependencies( ${PROJECT_NAME} shared g3dlite vmap recast)
target_link_libraries( ${PROJECT_NAME} shared  g3dlite vmap recast ${PCRE_LIBRARIES} )
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION .)





