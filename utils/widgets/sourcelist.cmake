file(GLOB CUR_SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)
file(GLOB CUR_HDR_FILES ${CMAKE_CURRENT_LIST_DIR}/*.h)
set(SRC_FILES ${SRC_FILES} ${CUR_SRC_FILES})
set(HDR_FILES ${HDR_FILES} ${CUR_HDR_FILES})

file(GLOB CUR_SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/generated/*.cpp)
file(GLOB CUR_HDR_FILES ${CMAKE_CURRENT_LIST_DIR}/generated/*.h)
set(SRC_FILES ${SRC_FILES} ${CUR_SRC_FILES})
set(HDR_FILES ${HDR_FILES} ${CUR_HDR_FILES})

file(GLOB CUR_UI_FILES ${CMAKE_CURRENT_LIST_DIR}/*.ui)
set(UI_FILES ${UI_FILES} ${CUR_UI_FILES})

