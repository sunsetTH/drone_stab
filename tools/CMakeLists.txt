PROJECT(DRONE_TOOLS)
SET( CMAKE_INSTALL_PREFIX "/usr/lib")

set(the_target "DRONE_TOOLS")


SET( DRONE_TOOLS_INCLUDE_DIRS
	${DRONE_TOOLS_SOURCE_DIR}
)

INCLUDE_DIRECTORIES( ${linux_mpu9150_INCLUDE_DIRS} /usr/include)


SET( imu_SRCS 
	${DRONE_TOOLS_SOURCE_DIR}/imu.c
)

SET( imu_HDRS 
	${DRONE_TOOLS_SOURCE_DIR}/local_defaults.h
)

SET( imucal_SRCS 
	${DRONE_TOOLS_SOURCE_DIR}/imucal.c
)

ADD_EXECUTABLE(imu ${imu_SRCS} )
TARGET_LINK_LIBRARIES(imu linux_mpu9150 m)

ADD_EXECUTABLE(imucal ${imucal_SRCS} )
TARGET_LINK_LIBRARIES(imucal linux_mpu9150 m)

INCLUDE_DIRECTORIES( ${linux_mpu9150_INCLUDE_DIRS} "/usr/include")
