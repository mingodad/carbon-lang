#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=clang-15-env clang
CCC=clang-15-env clang++ -std=c++17 -no-canonical-prefixes -fno-rtti
CXX=clang-15-env clang++ -std=c++17 -no-canonical-prefixes -fno-rtti
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Standalone_Clang-15
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/b4460d1a/string_helpers.o \
	${OBJECTDIR}/_ext/127f7ca1/ast_node.o \
	${OBJECTDIR}/_ext/127f7ca1/ast_rtti.o \
	${OBJECTDIR}/_ext/127f7ca1/bindings.o \
	${OBJECTDIR}/_ext/127f7ca1/declaration.o \
	${OBJECTDIR}/_ext/127f7ca1/expression.o \
	${OBJECTDIR}/_ext/127f7ca1/member.o \
	${OBJECTDIR}/_ext/127f7ca1/pattern.o \
	${OBJECTDIR}/_ext/127f7ca1/statement.o \
	${OBJECTDIR}/_ext/127f7ca1/static_scope.o \
	${OBJECTDIR}/_ext/d02c43b8/ABIBreak.o \
	${OBJECTDIR}/_ext/d02c43b8/APFloat.o \
	${OBJECTDIR}/_ext/d02c43b8/APInt.o \
	${OBJECTDIR}/_ext/d02c43b8/APSInt.o \
	${OBJECTDIR}/_ext/d02c43b8/ARMTargetParser.o \
	${OBJECTDIR}/_ext/d02c43b8/Allocator.o \
	${OBJECTDIR}/_ext/d02c43b8/CommandLine.o \
	${OBJECTDIR}/_ext/d02c43b8/ConvertUTF.o \
	${OBJECTDIR}/_ext/d02c43b8/ConvertUTFWrapper.o \
	${OBJECTDIR}/_ext/d02c43b8/CrashRecoveryContext.o \
	${OBJECTDIR}/_ext/d02c43b8/Debug.o \
	${OBJECTDIR}/_ext/d02c43b8/DebugCounter.o \
	${OBJECTDIR}/_ext/d02c43b8/Errno.o \
	${OBJECTDIR}/_ext/d02c43b8/Error.o \
	${OBJECTDIR}/_ext/d02c43b8/ErrorHandling.o \
	${OBJECTDIR}/_ext/d02c43b8/FileUtilities.o \
	${OBJECTDIR}/_ext/d02c43b8/FormatVariadic.o \
	${OBJECTDIR}/_ext/d02c43b8/GraphWriter.o \
	${OBJECTDIR}/_ext/d02c43b8/Hashing.o \
	${OBJECTDIR}/_ext/d02c43b8/Host.o \
	${OBJECTDIR}/_ext/d02c43b8/InitLLVM.o \
	${OBJECTDIR}/_ext/d02c43b8/Locale.o \
	${OBJECTDIR}/_ext/d02c43b8/MD5.o \
	${OBJECTDIR}/_ext/d02c43b8/ManagedStatic.o \
	${OBJECTDIR}/_ext/d02c43b8/MemAlloc.o \
	${OBJECTDIR}/_ext/d02c43b8/MemoryBuffer.o \
	${OBJECTDIR}/_ext/d02c43b8/MemoryBufferRef.o \
	${OBJECTDIR}/_ext/d02c43b8/NativeFormatting.o \
	${OBJECTDIR}/_ext/d02c43b8/Optional.o \
	${OBJECTDIR}/_ext/d02c43b8/Path.o \
	${OBJECTDIR}/_ext/d02c43b8/PrettyStackTrace.o \
	${OBJECTDIR}/_ext/d02c43b8/Process.o \
	${OBJECTDIR}/_ext/d02c43b8/Program.o \
	${OBJECTDIR}/_ext/d02c43b8/RandomNumberGenerator.o \
	${OBJECTDIR}/_ext/d02c43b8/Signals.o \
	${OBJECTDIR}/_ext/d02c43b8/Signposts.o \
	${OBJECTDIR}/_ext/d02c43b8/SmallPtrSet.o \
	${OBJECTDIR}/_ext/d02c43b8/SmallVector.o \
	${OBJECTDIR}/_ext/d02c43b8/SourceMgr.o \
	${OBJECTDIR}/_ext/d02c43b8/Statistic.o \
	${OBJECTDIR}/_ext/d02c43b8/StringExtras.o \
	${OBJECTDIR}/_ext/d02c43b8/StringMap.o \
	${OBJECTDIR}/_ext/d02c43b8/StringRef.o \
	${OBJECTDIR}/_ext/d02c43b8/StringSaver.o \
	${OBJECTDIR}/_ext/d02c43b8/ThreadLocal.o \
	${OBJECTDIR}/_ext/d02c43b8/Threading.o \
	${OBJECTDIR}/_ext/d02c43b8/Timer.o \
	${OBJECTDIR}/_ext/d02c43b8/Triple.o \
	${OBJECTDIR}/_ext/d02c43b8/Twine.o \
	${OBJECTDIR}/_ext/d02c43b8/TypeSize.o \
	${OBJECTDIR}/_ext/d02c43b8/Unicode.o \
	${OBJECTDIR}/_ext/d02c43b8/VersionTuple.o \
	${OBJECTDIR}/_ext/d02c43b8/VirtualFileSystem.o \
	${OBJECTDIR}/_ext/d02c43b8/Watchdog.o \
	${OBJECTDIR}/_ext/d02c43b8/WithColor.o \
	${OBJECTDIR}/_ext/d02c43b8/X86TargetParser.o \
	${OBJECTDIR}/_ext/d02c43b8/YAMLParser.o \
	${OBJECTDIR}/_ext/d02c43b8/circular_raw_ostream.o \
	${OBJECTDIR}/_ext/d02c43b8/raw_os_ostream.o \
	${OBJECTDIR}/_ext/d02c43b8/raw_ostream.o \
	${OBJECTDIR}/_ext/b9f5a999/action.o \
	${OBJECTDIR}/_ext/b9f5a999/action_stack.o \
	${OBJECTDIR}/_ext/b9f5a999/builtins.o \
	${OBJECTDIR}/_ext/b9f5a999/exec_program.o \
	${OBJECTDIR}/_ext/b9f5a999/heap.o \
	${OBJECTDIR}/_ext/b9f5a999/impl_scope.o \
	${OBJECTDIR}/_ext/b9f5a999/interpreter.o \
	${OBJECTDIR}/_ext/b9f5a999/pattern_analysis.o \
	${OBJECTDIR}/_ext/b9f5a999/resolve_control_flow.o \
	${OBJECTDIR}/_ext/b9f5a999/resolve_names.o \
	${OBJECTDIR}/_ext/b9f5a999/resolve_unformed.o \
	${OBJECTDIR}/_ext/b9f5a999/type_checker.o \
	${OBJECTDIR}/_ext/b9f5a999/value.o \
	${OBJECTDIR}/_ext/6be22bae/main.o \
	${OBJECTDIR}/_ext/6be22bae/main_bin.o \
	${OBJECTDIR}/_ext/c0d30164/lex_scan_helper.o \
	${OBJECTDIR}/_ext/c0d30164/lexer.o \
	${OBJECTDIR}/_ext/c0d30164/parse.o \
	${OBJECTDIR}/_ext/c0d30164/parse_and_lex_context.o \
	${OBJECTDIR}/_ext/c0d30164/parser.o \
	${OBJECTDIR}/_ext/c0d30164/prelude.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lpthread -lcurses

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/carbon-nb

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/carbon-nb: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	clang-15-env clang++ -std=c++17 -no-canonical-prefixes -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/carbon-nb ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/b4460d1a/string_helpers.o: ../common/string_helpers.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b4460d1a
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b4460d1a/string_helpers.o ../common/string_helpers.cpp

${OBJECTDIR}/_ext/127f7ca1/ast_node.o: ../explorer/ast/ast_node.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/ast_node.o ../explorer/ast/ast_node.cpp

${OBJECTDIR}/_ext/127f7ca1/ast_rtti.o: ../explorer/ast/ast_rtti.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/ast_rtti.o ../explorer/ast/ast_rtti.cpp

${OBJECTDIR}/_ext/127f7ca1/bindings.o: ../explorer/ast/bindings.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/bindings.o ../explorer/ast/bindings.cpp

${OBJECTDIR}/_ext/127f7ca1/declaration.o: ../explorer/ast/declaration.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/declaration.o ../explorer/ast/declaration.cpp

${OBJECTDIR}/_ext/127f7ca1/expression.o: ../explorer/ast/expression.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/expression.o ../explorer/ast/expression.cpp

${OBJECTDIR}/_ext/127f7ca1/member.o: ../explorer/ast/member.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/member.o ../explorer/ast/member.cpp

${OBJECTDIR}/_ext/127f7ca1/pattern.o: ../explorer/ast/pattern.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/pattern.o ../explorer/ast/pattern.cpp

${OBJECTDIR}/_ext/127f7ca1/statement.o: ../explorer/ast/statement.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/statement.o ../explorer/ast/statement.cpp

${OBJECTDIR}/_ext/127f7ca1/static_scope.o: ../explorer/ast/static_scope.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/127f7ca1
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/127f7ca1/static_scope.o ../explorer/ast/static_scope.cpp

${OBJECTDIR}/_ext/d02c43b8/ABIBreak.o: ../explorer/fromllvm/lib/Support/ABIBreak.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/ABIBreak.o ../explorer/fromllvm/lib/Support/ABIBreak.cpp

${OBJECTDIR}/_ext/d02c43b8/APFloat.o: ../explorer/fromllvm/lib/Support/APFloat.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/APFloat.o ../explorer/fromllvm/lib/Support/APFloat.cpp

${OBJECTDIR}/_ext/d02c43b8/APInt.o: ../explorer/fromllvm/lib/Support/APInt.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/APInt.o ../explorer/fromllvm/lib/Support/APInt.cpp

${OBJECTDIR}/_ext/d02c43b8/APSInt.o: ../explorer/fromllvm/lib/Support/APSInt.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/APSInt.o ../explorer/fromllvm/lib/Support/APSInt.cpp

${OBJECTDIR}/_ext/d02c43b8/ARMTargetParser.o: ../explorer/fromllvm/lib/Support/ARMTargetParser.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/ARMTargetParser.o ../explorer/fromllvm/lib/Support/ARMTargetParser.cpp

${OBJECTDIR}/_ext/d02c43b8/Allocator.o: ../explorer/fromllvm/lib/Support/Allocator.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Allocator.o ../explorer/fromllvm/lib/Support/Allocator.cpp

${OBJECTDIR}/_ext/d02c43b8/CommandLine.o: ../explorer/fromllvm/lib/Support/CommandLine.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/CommandLine.o ../explorer/fromllvm/lib/Support/CommandLine.cpp

${OBJECTDIR}/_ext/d02c43b8/ConvertUTF.o: ../explorer/fromllvm/lib/Support/ConvertUTF.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/ConvertUTF.o ../explorer/fromllvm/lib/Support/ConvertUTF.cpp

${OBJECTDIR}/_ext/d02c43b8/ConvertUTFWrapper.o: ../explorer/fromllvm/lib/Support/ConvertUTFWrapper.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/ConvertUTFWrapper.o ../explorer/fromllvm/lib/Support/ConvertUTFWrapper.cpp

${OBJECTDIR}/_ext/d02c43b8/CrashRecoveryContext.o: ../explorer/fromllvm/lib/Support/CrashRecoveryContext.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/CrashRecoveryContext.o ../explorer/fromllvm/lib/Support/CrashRecoveryContext.cpp

${OBJECTDIR}/_ext/d02c43b8/Debug.o: ../explorer/fromllvm/lib/Support/Debug.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Debug.o ../explorer/fromllvm/lib/Support/Debug.cpp

${OBJECTDIR}/_ext/d02c43b8/DebugCounter.o: ../explorer/fromllvm/lib/Support/DebugCounter.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/DebugCounter.o ../explorer/fromllvm/lib/Support/DebugCounter.cpp

${OBJECTDIR}/_ext/d02c43b8/Errno.o: ../explorer/fromllvm/lib/Support/Errno.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Errno.o ../explorer/fromllvm/lib/Support/Errno.cpp

${OBJECTDIR}/_ext/d02c43b8/Error.o: ../explorer/fromllvm/lib/Support/Error.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Error.o ../explorer/fromllvm/lib/Support/Error.cpp

${OBJECTDIR}/_ext/d02c43b8/ErrorHandling.o: ../explorer/fromllvm/lib/Support/ErrorHandling.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/ErrorHandling.o ../explorer/fromllvm/lib/Support/ErrorHandling.cpp

${OBJECTDIR}/_ext/d02c43b8/FileUtilities.o: ../explorer/fromllvm/lib/Support/FileUtilities.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/FileUtilities.o ../explorer/fromllvm/lib/Support/FileUtilities.cpp

${OBJECTDIR}/_ext/d02c43b8/FormatVariadic.o: ../explorer/fromllvm/lib/Support/FormatVariadic.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/FormatVariadic.o ../explorer/fromllvm/lib/Support/FormatVariadic.cpp

${OBJECTDIR}/_ext/d02c43b8/GraphWriter.o: ../explorer/fromllvm/lib/Support/GraphWriter.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/GraphWriter.o ../explorer/fromllvm/lib/Support/GraphWriter.cpp

${OBJECTDIR}/_ext/d02c43b8/Hashing.o: ../explorer/fromllvm/lib/Support/Hashing.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Hashing.o ../explorer/fromllvm/lib/Support/Hashing.cpp

${OBJECTDIR}/_ext/d02c43b8/Host.o: ../explorer/fromllvm/lib/Support/Host.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Host.o ../explorer/fromllvm/lib/Support/Host.cpp

${OBJECTDIR}/_ext/d02c43b8/InitLLVM.o: ../explorer/fromllvm/lib/Support/InitLLVM.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/InitLLVM.o ../explorer/fromllvm/lib/Support/InitLLVM.cpp

${OBJECTDIR}/_ext/d02c43b8/Locale.o: ../explorer/fromllvm/lib/Support/Locale.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Locale.o ../explorer/fromllvm/lib/Support/Locale.cpp

${OBJECTDIR}/_ext/d02c43b8/MD5.o: ../explorer/fromllvm/lib/Support/MD5.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/MD5.o ../explorer/fromllvm/lib/Support/MD5.cpp

${OBJECTDIR}/_ext/d02c43b8/ManagedStatic.o: ../explorer/fromllvm/lib/Support/ManagedStatic.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/ManagedStatic.o ../explorer/fromllvm/lib/Support/ManagedStatic.cpp

${OBJECTDIR}/_ext/d02c43b8/MemAlloc.o: ../explorer/fromllvm/lib/Support/MemAlloc.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/MemAlloc.o ../explorer/fromllvm/lib/Support/MemAlloc.cpp

${OBJECTDIR}/_ext/d02c43b8/MemoryBuffer.o: ../explorer/fromllvm/lib/Support/MemoryBuffer.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/MemoryBuffer.o ../explorer/fromllvm/lib/Support/MemoryBuffer.cpp

${OBJECTDIR}/_ext/d02c43b8/MemoryBufferRef.o: ../explorer/fromllvm/lib/Support/MemoryBufferRef.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/MemoryBufferRef.o ../explorer/fromllvm/lib/Support/MemoryBufferRef.cpp

${OBJECTDIR}/_ext/d02c43b8/NativeFormatting.o: ../explorer/fromllvm/lib/Support/NativeFormatting.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/NativeFormatting.o ../explorer/fromllvm/lib/Support/NativeFormatting.cpp

${OBJECTDIR}/_ext/d02c43b8/Optional.o: ../explorer/fromllvm/lib/Support/Optional.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Optional.o ../explorer/fromllvm/lib/Support/Optional.cpp

${OBJECTDIR}/_ext/d02c43b8/Path.o: ../explorer/fromllvm/lib/Support/Path.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Path.o ../explorer/fromllvm/lib/Support/Path.cpp

${OBJECTDIR}/_ext/d02c43b8/PrettyStackTrace.o: ../explorer/fromllvm/lib/Support/PrettyStackTrace.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/PrettyStackTrace.o ../explorer/fromllvm/lib/Support/PrettyStackTrace.cpp

${OBJECTDIR}/_ext/d02c43b8/Process.o: ../explorer/fromllvm/lib/Support/Process.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Process.o ../explorer/fromllvm/lib/Support/Process.cpp

${OBJECTDIR}/_ext/d02c43b8/Program.o: ../explorer/fromllvm/lib/Support/Program.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Program.o ../explorer/fromllvm/lib/Support/Program.cpp

${OBJECTDIR}/_ext/d02c43b8/RandomNumberGenerator.o: ../explorer/fromllvm/lib/Support/RandomNumberGenerator.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/RandomNumberGenerator.o ../explorer/fromllvm/lib/Support/RandomNumberGenerator.cpp

${OBJECTDIR}/_ext/d02c43b8/Signals.o: ../explorer/fromllvm/lib/Support/Signals.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Signals.o ../explorer/fromllvm/lib/Support/Signals.cpp

${OBJECTDIR}/_ext/d02c43b8/Signposts.o: ../explorer/fromllvm/lib/Support/Signposts.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Signposts.o ../explorer/fromllvm/lib/Support/Signposts.cpp

${OBJECTDIR}/_ext/d02c43b8/SmallPtrSet.o: ../explorer/fromllvm/lib/Support/SmallPtrSet.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/SmallPtrSet.o ../explorer/fromllvm/lib/Support/SmallPtrSet.cpp

${OBJECTDIR}/_ext/d02c43b8/SmallVector.o: ../explorer/fromllvm/lib/Support/SmallVector.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/SmallVector.o ../explorer/fromllvm/lib/Support/SmallVector.cpp

${OBJECTDIR}/_ext/d02c43b8/SourceMgr.o: ../explorer/fromllvm/lib/Support/SourceMgr.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/SourceMgr.o ../explorer/fromllvm/lib/Support/SourceMgr.cpp

${OBJECTDIR}/_ext/d02c43b8/Statistic.o: ../explorer/fromllvm/lib/Support/Statistic.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Statistic.o ../explorer/fromllvm/lib/Support/Statistic.cpp

${OBJECTDIR}/_ext/d02c43b8/StringExtras.o: ../explorer/fromllvm/lib/Support/StringExtras.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/StringExtras.o ../explorer/fromllvm/lib/Support/StringExtras.cpp

${OBJECTDIR}/_ext/d02c43b8/StringMap.o: ../explorer/fromllvm/lib/Support/StringMap.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/StringMap.o ../explorer/fromllvm/lib/Support/StringMap.cpp

${OBJECTDIR}/_ext/d02c43b8/StringRef.o: ../explorer/fromllvm/lib/Support/StringRef.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/StringRef.o ../explorer/fromllvm/lib/Support/StringRef.cpp

${OBJECTDIR}/_ext/d02c43b8/StringSaver.o: ../explorer/fromllvm/lib/Support/StringSaver.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/StringSaver.o ../explorer/fromllvm/lib/Support/StringSaver.cpp

${OBJECTDIR}/_ext/d02c43b8/ThreadLocal.o: ../explorer/fromllvm/lib/Support/ThreadLocal.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/ThreadLocal.o ../explorer/fromllvm/lib/Support/ThreadLocal.cpp

${OBJECTDIR}/_ext/d02c43b8/Threading.o: ../explorer/fromllvm/lib/Support/Threading.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Threading.o ../explorer/fromllvm/lib/Support/Threading.cpp

${OBJECTDIR}/_ext/d02c43b8/Timer.o: ../explorer/fromllvm/lib/Support/Timer.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Timer.o ../explorer/fromllvm/lib/Support/Timer.cpp

${OBJECTDIR}/_ext/d02c43b8/Triple.o: ../explorer/fromllvm/lib/Support/Triple.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Triple.o ../explorer/fromllvm/lib/Support/Triple.cpp

${OBJECTDIR}/_ext/d02c43b8/Twine.o: ../explorer/fromllvm/lib/Support/Twine.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Twine.o ../explorer/fromllvm/lib/Support/Twine.cpp

${OBJECTDIR}/_ext/d02c43b8/TypeSize.o: ../explorer/fromllvm/lib/Support/TypeSize.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/TypeSize.o ../explorer/fromllvm/lib/Support/TypeSize.cpp

${OBJECTDIR}/_ext/d02c43b8/Unicode.o: ../explorer/fromllvm/lib/Support/Unicode.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Unicode.o ../explorer/fromllvm/lib/Support/Unicode.cpp

${OBJECTDIR}/_ext/d02c43b8/VersionTuple.o: ../explorer/fromllvm/lib/Support/VersionTuple.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/VersionTuple.o ../explorer/fromllvm/lib/Support/VersionTuple.cpp

${OBJECTDIR}/_ext/d02c43b8/VirtualFileSystem.o: ../explorer/fromllvm/lib/Support/VirtualFileSystem.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/VirtualFileSystem.o ../explorer/fromllvm/lib/Support/VirtualFileSystem.cpp

${OBJECTDIR}/_ext/d02c43b8/Watchdog.o: ../explorer/fromllvm/lib/Support/Watchdog.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/Watchdog.o ../explorer/fromllvm/lib/Support/Watchdog.cpp

${OBJECTDIR}/_ext/d02c43b8/WithColor.o: ../explorer/fromllvm/lib/Support/WithColor.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/WithColor.o ../explorer/fromllvm/lib/Support/WithColor.cpp

${OBJECTDIR}/_ext/d02c43b8/X86TargetParser.o: ../explorer/fromllvm/lib/Support/X86TargetParser.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/X86TargetParser.o ../explorer/fromllvm/lib/Support/X86TargetParser.cpp

${OBJECTDIR}/_ext/d02c43b8/YAMLParser.o: ../explorer/fromllvm/lib/Support/YAMLParser.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/YAMLParser.o ../explorer/fromllvm/lib/Support/YAMLParser.cpp

${OBJECTDIR}/_ext/d02c43b8/circular_raw_ostream.o: ../explorer/fromllvm/lib/Support/circular_raw_ostream.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/circular_raw_ostream.o ../explorer/fromllvm/lib/Support/circular_raw_ostream.cpp

${OBJECTDIR}/_ext/d02c43b8/raw_os_ostream.o: ../explorer/fromllvm/lib/Support/raw_os_ostream.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/raw_os_ostream.o ../explorer/fromllvm/lib/Support/raw_os_ostream.cpp

${OBJECTDIR}/_ext/d02c43b8/raw_ostream.o: ../explorer/fromllvm/lib/Support/raw_ostream.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/d02c43b8
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/d02c43b8/raw_ostream.o ../explorer/fromllvm/lib/Support/raw_ostream.cpp

${OBJECTDIR}/_ext/b9f5a999/action.o: ../explorer/interpreter/action.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/action.o ../explorer/interpreter/action.cpp

${OBJECTDIR}/_ext/b9f5a999/action_stack.o: ../explorer/interpreter/action_stack.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/action_stack.o ../explorer/interpreter/action_stack.cpp

${OBJECTDIR}/_ext/b9f5a999/builtins.o: ../explorer/interpreter/builtins.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/builtins.o ../explorer/interpreter/builtins.cpp

${OBJECTDIR}/_ext/b9f5a999/exec_program.o: ../explorer/interpreter/exec_program.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/exec_program.o ../explorer/interpreter/exec_program.cpp

${OBJECTDIR}/_ext/b9f5a999/heap.o: ../explorer/interpreter/heap.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/heap.o ../explorer/interpreter/heap.cpp

${OBJECTDIR}/_ext/b9f5a999/impl_scope.o: ../explorer/interpreter/impl_scope.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/impl_scope.o ../explorer/interpreter/impl_scope.cpp

${OBJECTDIR}/_ext/b9f5a999/interpreter.o: ../explorer/interpreter/interpreter.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/interpreter.o ../explorer/interpreter/interpreter.cpp

${OBJECTDIR}/_ext/b9f5a999/pattern_analysis.o: ../explorer/interpreter/pattern_analysis.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/pattern_analysis.o ../explorer/interpreter/pattern_analysis.cpp

${OBJECTDIR}/_ext/b9f5a999/resolve_control_flow.o: ../explorer/interpreter/resolve_control_flow.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/resolve_control_flow.o ../explorer/interpreter/resolve_control_flow.cpp

${OBJECTDIR}/_ext/b9f5a999/resolve_names.o: ../explorer/interpreter/resolve_names.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/resolve_names.o ../explorer/interpreter/resolve_names.cpp

${OBJECTDIR}/_ext/b9f5a999/resolve_unformed.o: ../explorer/interpreter/resolve_unformed.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/resolve_unformed.o ../explorer/interpreter/resolve_unformed.cpp

${OBJECTDIR}/_ext/b9f5a999/type_checker.o: ../explorer/interpreter/type_checker.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/type_checker.o ../explorer/interpreter/type_checker.cpp

${OBJECTDIR}/_ext/b9f5a999/value.o: ../explorer/interpreter/value.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/b9f5a999
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/b9f5a999/value.o ../explorer/interpreter/value.cpp

${OBJECTDIR}/_ext/6be22bae/main.o: ../explorer/main.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/6be22bae
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/6be22bae/main.o ../explorer/main.cpp

${OBJECTDIR}/_ext/6be22bae/main_bin.o: ../explorer/main_bin.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/6be22bae
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/6be22bae/main_bin.o ../explorer/main_bin.cpp

${OBJECTDIR}/_ext/c0d30164/lex_scan_helper.o: ../explorer/syntax/lex_scan_helper.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d30164
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d30164/lex_scan_helper.o ../explorer/syntax/lex_scan_helper.cpp

${OBJECTDIR}/_ext/c0d30164/lexer.o: ../explorer/syntax/lexer.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d30164
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d30164/lexer.o ../explorer/syntax/lexer.cpp

${OBJECTDIR}/_ext/c0d30164/parse.o: ../explorer/syntax/parse.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d30164
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d30164/parse.o ../explorer/syntax/parse.cpp

${OBJECTDIR}/_ext/c0d30164/parse_and_lex_context.o: ../explorer/syntax/parse_and_lex_context.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d30164
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d30164/parse_and_lex_context.o ../explorer/syntax/parse_and_lex_context.cpp

${OBJECTDIR}/_ext/c0d30164/parser.o: ../explorer/syntax/parser.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d30164
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d30164/parser.o ../explorer/syntax/parser.cpp

${OBJECTDIR}/_ext/c0d30164/prelude.o: ../explorer/syntax/prelude.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d30164
	${RM} "$@.d"
	$(COMPILE.cc) -g -I.. -I../explorer -I../explorer/fromllvm/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d30164/prelude.o ../explorer/syntax/prelude.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
