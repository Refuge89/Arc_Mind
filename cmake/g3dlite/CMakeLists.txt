PROJECT(g3dlite)

set(prefix ${DEPENDENCY_SOURCES}/${PROJECT_NAME} )

set(sources
    AABox.cpp
    Box.cpp
    Crypto.cpp
    format.cpp
    Matrix3.cpp
    Plane.cpp
    System.cpp
    Triangle.cpp
    Vector3.cpp
    Vector4.cpp
    G3D/AABox.h
    G3D/Array.h
    G3D/Box.h
    G3D/CollisionDetection.h
    G3D/CoordinateFrame.h
    G3D/Crypto.h
    G3D/debug.h
    G3D/format.h
    G3D/g3dmath.h
    G3D/GCamera.h
    G3D/Line.h
    G3D/Matrix3.h
    G3D/Plane.h
    G3D/platform.h
    G3D/Quat.h
    G3D/Ray.h
    G3D/RegistryUtil.h
    G3D/Sphere.h
    G3D/stringutils.h
    G3D/System.h
    G3D/Table.h
    G3D/Triangle.h
    G3D/Vector2.h
    G3D/Vector2int16.h
    G3D/Vector3.h
    G3D/Vector3int16.h
    G3D/Vector4.h
    G3D/g3dmath.inl
    G3D/Quat.inl
    G3D/Vector2.inl
    G3D/Vector3.inl
    G3D/Vector4.inl )

foreach(src IN ITEMS ${sources} )
  SET( SRCS ${SRCS} ${prefix}/${src} )
endforeach(src)

include_directories( ${GLOBAL_INCLUDE_DIRS} )
add_library(${PROJECT_NAME} STATIC ${SRCS} )

unset(sources)
unset(SRCS)
unset(prefix)

