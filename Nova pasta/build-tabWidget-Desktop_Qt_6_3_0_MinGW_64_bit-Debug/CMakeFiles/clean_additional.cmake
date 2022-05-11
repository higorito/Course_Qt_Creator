# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\tabWidget_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\tabWidget_autogen.dir\\ParseCache.txt"
  "tabWidget_autogen"
  )
endif()
