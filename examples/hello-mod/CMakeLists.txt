add_library(hello_mod SHARED src/hello_mod.cpp)
target_link_libraries(hello_mod PRIVATE fusion_sdk)
target_compile_features(hello_mod PRIVATE cxx_std_17)
set_target_properties(hello_mod PROPERTIES
    OUTPUT_NAME "hello_mod"
    CXX_VISIBILITY_PRESET hidden
    VISIBILITY_INLINES_HIDDEN YES
)
