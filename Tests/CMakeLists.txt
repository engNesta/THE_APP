project(The_App_Test VERSION 0.1)

set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)

include(CTest)

#Declaring that we want 'catch2', a testing framework.
#Instructions on how to find it would appear under CMake/findcatch2.cmake
add_subdirectory(Catch2)

juce_add_console_app(The_App_Test PRODUCT_NAME "The_App_Test")

target_sources(The_App_Test PRIVATE MainComponentTest.cpp)

target_compile_definitions(The_App_Test PRIVATE
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0)

target_link_libraries(The_App_Test PRIVATE
        Catch2WithMain
        juce_recommended_config_flags
        juce_recommended_lto_flags
        juce_recommended_warning_flags
        juce_core
        juce_gui_basics)

