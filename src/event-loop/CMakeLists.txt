set(SRC
    event_loop.c
)

include_directories(${SANCUS_INCLUDES})
add_library(event-loop STATIC ${SRC})
target_link_libraries(event-loop loader sm-control tools packet)
install(TARGETS event-loop
        EXPORT ExportTargets
        ARCHIVE DESTINATION ${INSTALL_LIBS_DIR})
