# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\windeployBancoD_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\windeployBancoD_autogen.dir\\ParseCache.txt"
  "windeployBancoD_autogen"
  )
endif()
