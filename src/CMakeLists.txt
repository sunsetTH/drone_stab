PROJECT(DRONE_LIB)
SET( CMAKE_INSTALL_PREFIX "/usr/lib")

set(the_target "DRONE_LIB")


SET( DRONE_LIB_INCLUDE_DIRS
	${DRONE_LIB_SOURCE_DIR}
)

INCLUDE_DIRECTORIES( ${linux_mpu9150_INCLUDE_DIRS} /usr/include)


SET( drone_SRCS 
	${DRONE_LIB_SOURCE_DIR}/drone_motor.c
	CACHE INTERNAL "include directories" FORCE
)

SET( drone_HDRS 
	${DRONE_LIB_SOURCE_DIR}/drone_motor.h
	CACHE INTERNAL "include directories" FORCE
)

ADD_LIBRARY(drone SHARED ${drone_SRCS})
