# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\staff_details_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\staff_details_autogen.dir\\ParseCache.txt"
  "staff_details_autogen"
  )
endif()
