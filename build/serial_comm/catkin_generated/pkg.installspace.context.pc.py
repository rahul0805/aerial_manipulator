# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/home/rahul/catkin_ws/devel/include/eigen3".split(';') if "${prefix}/include;/home/rahul/catkin_ws/devel/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;mav_msgs;nav_msgs;roscpp;sensor_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lserial_comm".split(';') if "-lserial_comm" != "" else []
PROJECT_NAME = "serial_comm"
PROJECT_SPACE_DIR = "/home/rahul/catkin_ws/install"
PROJECT_VERSION = "2.1.1"