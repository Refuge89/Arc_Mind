PROJECT(shared)

SET( prefix ${ROOT_PATH}/src/arcemu-shared )
SET( sources
    arcemu_getopt.cpp 
    Auth/BigNumber.cpp 
    Auth/HMAC.cpp 
    Auth/MD5.cpp 
    Auth/Sha1.cpp 
    Auth/WowCrypt.cpp 
    BufferPool.cpp
    CallBack.cpp 
    Config/Config.cpp 
    Console/CConsole.cpp 
    Console/ConsoleListener.cpp 
    CrashHandler.cpp 
    crc32.cpp 
    Database/Database.cpp 
    Database/DBC.cpp 
    Database/dbcfile.cpp 
    Database/DBCStores.cpp 
    hashmap.cpp 
    Log.cpp 
    MemoryLeaks.cpp 
    MersenneTwister.cpp 
    Network/CircularBuffer.cpp 
    Network/Socket.cpp 
    Network/SocketMgrWin32.cpp 
    Network/SocketOpsWin32.cpp 
    Network/SocketWin32.cpp 
    StackWalker.cpp 
    Threading/Mutex.cpp 
    Threading/ThreadPool.cpp 
    Util.cpp )
	
set( headers 
    arcemu_getopt.h 
    arcemuConfig.h 
    Auth/BigNumber.h 
    Auth/HMAC.h 
    Auth/MD5.h 
    Auth/Sha1.h 
    Auth/WowCrypt.h 
    AuthCodes.h 
    BufferPool.h 
    ByteBuffer.h 
    CallBack.h 
    Common.h 
    Config/Config.h 
    Config/ConfigEnv.h 
    Console/BaseConsole.h 
    Console/CConsole.h 
    CrashHandler.h 
    crc32.h 
    CThreads.h 
    Database/Database.h 
    Database/DatabaseEnv.h 
    Database/DataStore.h 
    Database/DBC.h 
    Database/dbcfile.h 
    Database/DBCStores.h 
    Database/Field.h 
    Errors.h 
    FastQueue.h 
    hashmap.h 
    LocationVector.h 
    Log.h 
    NGLog.h
    MemoryLeaks.h 
    MersenneTwister.h 
    Network/CircularBuffer.h 
    Network/ListenSocketWin32.h 
    Network/Network.h 
    Network/Socket.h 
    Network/SocketDefines.h 
    Network/SocketMgrWin32.h 
    Network/SocketOps.h 
    NGLog.h 
    PreallocatedQueue.h 
    Singleton.h 
    StackBuffer.h 
    StackWalker.h 
    Storage.h 
    Threading/Condition.h 
    Threading/Guard.h 
    Threading/LockedQueue.h 
    Threading/Mutex.h 
    Threading/Queue.h 
    Threading/RWLock.h 
    Threading/Threading.h 
    Threading/ThreadPool.h 
    Threading/ThreadStarter.h 
    Timer.h 
    Util.h 
    WoWGuid.h 
)

IF(WIN32)
	SET( sources ${sources} Network/SocketMgrWin32.cpp  Network/SocketOpsWin32.cpp  Network/SocketWin32.cpp StackWalker.cpp )
ELSEIF(IS_FREEBSD OR APPLE)
	SET( sources ${sources}  Network/SocketMgrFreeBSD.cpp  Network/SocketFreeBSD.cpp  Network/SocketOpsFreeBSD.cpp )
ELSE(WIN32)
	SET( sources ${sources}  Network/SocketMgrLinux.cpp  Network/SocketLinux.cpp  Network/SocketOpsLinux.cpp )
ENDIF(WIN32)

foreach(src IN ITEMS ${sources} )
  SET( SRCS ${SRCS} ${prefix}/${src} )
endforeach(src)
foreach(src IN ITEMS ${headers} )
  SET(HEADERS ${HEADERS} ${prefix}/${src} )
endforeach(src)

include_directories( ${GLOBAL_INCLUDE_DIRS} )
IF( IS_64BIT )
	link_directories( ${DEPENDENCY_DLLS64} )
ELSE()
	link_directories( ${DEPENDENCY_DLLS} )
ENDIF()
link_directories( ${DEPENDENCY_LIBS} )

ADD_LIBRARY( ${PROJECT_NAME} STATIC ${SRCS} ${HEADERS} )

target_link_libraries( ${PROJECT_NAME} ${ZLIB_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT} ${MYSQL_LIBRARY} ${OPENSSL_LIBRARIES} ${EXTRA_LIBS} )

