# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\projBlocoNotas_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\projBlocoNotas_autogen.dir\\ParseCache.txt"
  "projBlocoNotas_autogen"
  )
endif()
