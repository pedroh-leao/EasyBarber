# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\EasyBarber_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\EasyBarber_autogen.dir\\ParseCache.txt"
  "EasyBarber_autogen"
  )
endif()
