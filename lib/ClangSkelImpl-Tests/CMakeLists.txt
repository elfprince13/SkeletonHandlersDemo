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
 
 
add_clang_plugin(ClangSkelTestsPlugin
  PluginMain.cpp
)
 
set_target_properties(ClangSkelTestsPlugin PROPERTIES
  LINKER_LANGUAGE CXX
  PREFIX "")
