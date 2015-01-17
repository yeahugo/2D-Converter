cmake_minimum_required(VERSION 2.8)

project( ModelMaker )
   find_package( OpenCV REQUIRED )
   add_executable( ModelMaker ModelMaker )
   target_link_libraries( ModelMaker ${OpenCV_LIBS} )
