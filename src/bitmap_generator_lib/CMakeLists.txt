project(bitmap_generator_lib)

set(HEADER_FILES
    utils.h
    drawing_utils.h
    printing_utils.h
    )

set(SOURCE_FILES
    drawing_utils.c
    printing_utils.c
    )

add_library(bitmap_generator_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})