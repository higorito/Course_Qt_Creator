# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BD_agendaV1_autogen"
  "CMakeFiles\\BD_agendaV1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BD_agendaV1_autogen.dir\\ParseCache.txt"
  )
endif()
