#include "clang/Frontend/FrontendPluginRegistry.h"
#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/Frontend/CompilerInstance.h"

#include "clang/Parse/Parser.h"

using namespace clang;

extern "C" SkeletonArgType getArgTypesForSkeletonOfKind_Loop2dAccumulate(size_t argN){
	return SkeletonArgType::NO_SUCH_ARG;
}

extern "C" const char * getArgNamesForSkeletonOfKind_Loop2dAccumulate(size_t argN){
	return nullptr;
}
