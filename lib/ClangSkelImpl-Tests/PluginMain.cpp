#include "clang/Frontend/FrontendPluginRegistry.h"
#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/Frontend/CompilerInstance.h"

#include "clang/Parse/Parser.h"

using namespace clang;

extern "C" Parser::StmtResult doParseSkeletonWithName_Loop2dAccumulate(SourceLocation kindLoc){
	return StmtResult();
}
