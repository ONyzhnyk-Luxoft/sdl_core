execute_process(
  COMMAND ${CMAKE_SOURCE_DIR}/FindQt5.sh file Qt5QmlConfig.cmake
  OUTPUT_VARIABLE config_file
)

include(${config_file})
