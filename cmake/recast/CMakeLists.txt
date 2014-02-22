project(recast)

SET( prefix ${DEPENDENCY_SOURCES}/${PROJECT_NAME} )

SET(sources
    ChunkyTriMesh.cpp
    InputGeom.cpp
    MeshLoaderObj.cpp
    Detour/DetourCommon.cpp
    Detour/DetourNavMesh.cpp
    Detour/DetourNavMeshBuilder.cpp
    Detour/DetourNode.cpp
    Recast/Recast.cpp
    Recast/RecastArea.cpp
    Recast/RecastContour.cpp
    Recast/RecastFilter.cpp
    Recast/RecastLog.cpp
    Recast/RecastMesh.cpp
    Recast/RecastMeshDetail.cpp
    Recast/RecastRasterization.cpp
    Recast/RecastRegion.cpp
    Recast/RecastTimer.cpp)

SET(headers
   ChunkyTriMesh.h
   InputGeom.h
   MeshLoaderObj.h
   Detour/DetourCommon.h
   Detour/DetourNavMesh.h
   Detour/DetourNavMeshBuilder.h
   Detour/DetourNode.h
   Recast/Recast.h
   Recast/RecastLog.h
   Recast/RecastTimer.h)

foreach(src IN ITEMS ${sources} )
  SET( SRCS ${SRCS} ${prefix}/${src} )
endforeach(src)
foreach(src IN ITEMS ${headers} )
  SET( HEADERS ${HEADERS} ${prefix}/${src} )
endforeach(src)

include_directories( ${GLOBAL_INCLUDE_DIRS} )
add_library(${PROJECT_NAME} STATIC ${SRCS} )
#Set it to the project name.
set(RECAST_LIBRARIES ${PROJECT_NAME} CACHE INTERNAL "recast Libraries")