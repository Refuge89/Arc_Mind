PROJECT(vmap)

set(prefix ${DEPENDENCY_SOURCES}/${PROJECT_NAME} )

set(sources
    BaseModel.cpp
    CoordModelMapping.cpp
    ManagedModelContainer.cpp
    ModelContainer.cpp
    SubModel.cpp
    TileAssembler.cpp
    TreeNode.cpp
    VMapManager.cpp
    AABSPTree.h
    BaseModel.h
    CoordModelMapping.h
    IVMapManager.h
    ManagedModelContainer.h
    ModelContainer.h
    NodeValueAccess.h
    RayIntersectionIterator.h
    ShortBox.h
    ShortVector.h
    SubModel.h
    TileAssembler.h
    TreeNode.h
    VMapManager.h)

foreach(src IN ITEMS ${sources} )
  SET( SRCS ${SRCS} ${prefix}/${src} )
endforeach(src)

include_directories( ${GLOBAL_INCLUDE_DIRS} )
link_directories( ${DEPENDENCY_LIBS} ${EXTRA_LIBS_PATH} )
add_library(${PROJECT_NAME} STATIC ${SRCS} )
target_link_libraries( ${PROJECT_NAME} g3dlite )

unset(sources)
unset(SRCS)
unset(prefix)

