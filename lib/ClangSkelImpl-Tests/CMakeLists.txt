set(SYMBOL_FILE libClangSkelImpl-Tests.exports)
 
set (CLANG_LIBS
  clang
  clangFrontend
  clangAST
  clangAnalysis
  clangBasic
  clangCodeGen
  clangDriver
  clangFrontendTool
  clangLex
  clangParse
  clangSema
  clangEdit
  clangSerialization
  clangStaticAnalyzerCheckers
  clangStaticAnalyzerCore
  clangStaticAnalyzerFrontend
)
 
 
add_clang_plugin(libClangSkelImpl-Tests
  PluginMain.cpp
)
 
set_target_properties(libClangSkelImpl-Tests PROPERTIES
  LINKER_LANGUAGE CXX
  PREFIX "")
