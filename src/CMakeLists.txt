set(HEADER_LIST "${base_SOURCE_DIR}/include/vector.h")

add_library(base vector.c ${HEADER_LIST})

target_include_directories(base PUBLIC ../include)

source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST}
)
