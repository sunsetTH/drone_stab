PROJECT(linux_mpu9150)
SET( CMAKE_INSTALL_PREFIX "/usr/lib")

set(the_target "linux_mpu9150")


SET( linux_mpu9150_INCLUDE_DIRS
	${linux_mpu9150_SOURCE_DIR}/eMPL
	${linux_mpu9150_SOURCE_DIR}/glue
	${linux_mpu9150_SOURCE_DIR}/mpu9150
	CACHE INTERNAL "include directories" FORCE
)

INCLUDE_DIRECTORIES( ${linux_mpu9150_INCLUDE_DIRS} )

SET( linux_mpu9150_SRCS 
	${linux_mpu9150_SOURCE_DIR}/eMPL/inv_mpu.c
	${linux_mpu9150_SOURCE_DIR}/eMPL/inv_mpu_dmp_motion_driver.c
	
	${linux_mpu9150_SOURCE_DIR}/glue/linux_glue.c
	
	${linux_mpu9150_SOURCE_DIR}/mpu9150/mpu9150.c
	${linux_mpu9150_SOURCE_DIR}/mpu9150/quaternion.c
	${linux_mpu9150_SOURCE_DIR}/mpu9150/vector3d.c
	CACHE INTERNAL "include directories" FORCE
)

SET( linux_mpu9150_HDRS 
	${linux_mpu9150_SOURCE_DIR}/eMPL/inv_mpu_dmp_motion_driver.h
	${linux_mpu9150_SOURCE_DIR}/eMPL/inv_mpu.h
	${linux_mpu9150_SOURCE_DIR}/eMPL/dmpKey.h
	${linux_mpu9150_SOURCE_DIR}/eMPL/dmpmap.h
	
	${linux_mpu9150_SOURCE_DIR}/glue/linux_glue.h
	
	${linux_mpu9150_SOURCE_DIR}/mpu9150/mpu9150.h
	${linux_mpu9150_SOURCE_DIR}/mpu9150/quaternion.h
	${linux_mpu9150_SOURCE_DIR}/mpu9150/vector3d.h
	CACHE INTERNAL "include directories" FORCE
)

ADD_DEFINITIONS( -DEMPL_TARGET_LINUX -DMPU9150 -Wall -shared )

ADD_LIBRARY(${the_target} SHARED ${linux_mpu9150_SRCS})



