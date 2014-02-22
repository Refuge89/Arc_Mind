if(NOT BUILD_LUABRIDGE )
  message("\tluabridge was skipped because BUILD_LUABRIDGE is unchecked.")
  return()
endif(NOT BUILD_LUABRIDGE)
if( BUILD_LUAENGINE)
	message(ERROR, "\tBUILD_LUAENGINE is enabled but the LuaEngine cannot run together with luabridge.")
	return()
endif( BUILD_LUAENGINE)

project(luabridge)

#prefix variable - points to the folder which contains the source files.
#	used to point Cmake to the source files.
SET( prefix ${SCRIPTS_PATH}/${PROJECT_NAME} )

#SRCS - contains the source files that compose this project.
SET( SRCS  
  ${prefix}/interpreter/LUAEngine.cpp 
  ${prefix}/object_functions/GameObjectFunctions.cpp 
  ${prefix}/object_functions/ItemFunctions.cpp 
  ${prefix}/object_functions/UnitFunctions.cpp 
)

SET( HEADERS
  ${prefix}/interpreter/LUAEngine.h
  ${prefix}/interpreter/LUAFunctions.h
  ${prefix}/luabridge_src/FunctionTables.h
)

include_directories( ${include_dirs} ${prefix} )
IF( IS_LINUX )
	add_definitions(-Wno-deprecated)
ENDIF()


add_library(${PROJECT_NAME} SHARED ${SRCS} ${HEADERS})
add_dependencies( ${PROJECT_NAME} ${dependancies} lualib)
target_link_libraries( ${PROJECT_NAME} ${linkages} lualib)
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${ARCEMU_SCRIPTLIB_PATH} LIBRARY DESTINATION ${ARCEMU_SCRIPTLIB_PATH})

#Cleap up our variables(Not required.)
unset( prefix)
unset( SRCS )
unset( HEADERS )
