#!/bin/sh

#gcc
#myopts="-o carbon-gcc-32 -Os -m32"
#myopts="-o carbon-gcc-64 -Os"
#mycc="g++ -Wall -Wno-attributes -Wno-return-type"

#clang
#myopts="-o carbon-clang-32 -Os"
#myopts="-o carbon-clang-64 -Os"
#mycc="clang-15-env clang++ -Wall"

#not used on wasm
#mylibs="-lpthread -lcurses"

#wasm
myopts="-o carbon.js -Os"
mycc="emsdk-env em++ -Wall -sALLOW_MEMORY_GROWTH"
mylibs="-D__DUMMY__"  #only because em++ was not compiling the last cpp file


echo $mycc $myopts $mylibs

/usr/bin/time $mycc $myopts \
	-I. -Iexplorer -Iexplorer/fromllvm/include \
	-std=c++17 -no-canonical-prefixes  -fno-rtti \
        explorer/ast/ast_node.cpp \
        explorer/ast/ast_rtti.cpp \
        explorer/ast/bindings.cpp \
        explorer/ast/declaration.cpp \
        explorer/ast/expression.cpp \
        explorer/ast/member.cpp \
        explorer/ast/pattern.cpp \
        explorer/ast/statement.cpp \
        explorer/ast/static_scope.cpp \
        common/string_helpers.cpp \
        explorer/interpreter/action.cpp \
        explorer/interpreter/action_stack.cpp \
        explorer/interpreter/builtins.cpp \
        explorer/interpreter/exec_program.cpp \
        explorer/interpreter/heap.cpp \
        explorer/interpreter/impl_scope.cpp \
        explorer/interpreter/interpreter.cpp \
        explorer/interpreter/pattern_analysis.cpp \
        explorer/interpreter/resolve_control_flow.cpp \
        explorer/interpreter/resolve_names.cpp \
        explorer/interpreter/resolve_unformed.cpp \
        explorer/interpreter/type_checker.cpp \
        explorer/interpreter/value.cpp \
        explorer/syntax/lex_scan_helper.cpp \
        explorer/syntax/lexer.cpp \
        explorer/syntax/parse.cpp \
        explorer/syntax/parse_and_lex_context.cpp \
        explorer/syntax/parser.cpp \
        explorer/syntax/prelude.cpp \
	explorer/main.cpp \
	explorer/main_bin.cpp \
	explorer/fromllvm/lib/Support/Unicode.cpp \
	explorer/fromllvm/lib/Support/MemoryBufferRef.cpp \
	explorer/fromllvm/lib/Support/Error.cpp \
	explorer/fromllvm/lib/Support/Host.cpp \
	explorer/fromllvm/lib/Support/circular_raw_ostream.cpp \
	explorer/fromllvm/lib/Support/ConvertUTFWrapper.cpp \
	explorer/fromllvm/lib/Support/ARMTargetParser.cpp \
	explorer/fromllvm/lib/Support/Allocator.cpp \
	explorer/fromllvm/lib/Support/DebugCounter.cpp \
	explorer/fromllvm/lib/Support/NativeFormatting.cpp \
	explorer/fromllvm/lib/Support/Program.cpp \
	explorer/fromllvm/lib/Support/CommandLine.cpp \
	explorer/fromllvm/lib/Support/VirtualFileSystem.cpp \
	explorer/fromllvm/lib/Support/SmallVector.cpp \
	explorer/fromllvm/lib/Support/APSInt.cpp \
	explorer/fromllvm/lib/Support/StringRef.cpp \
	explorer/fromllvm/lib/Support/APFloat.cpp \
	explorer/fromllvm/lib/Support/MD5.cpp \
	explorer/fromllvm/lib/Support/Statistic.cpp \
	explorer/fromllvm/lib/Support/Threading.cpp \
	explorer/fromllvm/lib/Support/MemAlloc.cpp \
	explorer/fromllvm/lib/Support/VersionTuple.cpp \
	explorer/fromllvm/lib/Support/Debug.cpp \
	explorer/fromllvm/lib/Support/GraphWriter.cpp \
	explorer/fromllvm/lib/Support/Errno.cpp \
	explorer/fromllvm/lib/Support/Timer.cpp \
	explorer/fromllvm/lib/Support/StringSaver.cpp \
	explorer/fromllvm/lib/Support/WithColor.cpp \
	explorer/fromllvm/lib/Support/ErrorHandling.cpp \
	explorer/fromllvm/lib/Support/PrettyStackTrace.cpp \
	explorer/fromllvm/lib/Support/raw_os_ostream.cpp \
	explorer/fromllvm/lib/Support/MemoryBuffer.cpp \
	explorer/fromllvm/lib/Support/StringExtras.cpp \
	explorer/fromllvm/lib/Support/APInt.cpp \
	explorer/fromllvm/lib/Support/SourceMgr.cpp \
	explorer/fromllvm/lib/Support/Watchdog.cpp \
	explorer/fromllvm/lib/Support/Path.cpp \
	explorer/fromllvm/lib/Support/FileUtilities.cpp \
	explorer/fromllvm/lib/Support/Signposts.cpp \
	explorer/fromllvm/lib/Support/X86TargetParser.cpp \
	explorer/fromllvm/lib/Support/RandomNumberGenerator.cpp \
	explorer/fromllvm/lib/Support/FormatVariadic.cpp \
	explorer/fromllvm/lib/Support/ManagedStatic.cpp \
	explorer/fromllvm/lib/Support/InitLLVM.cpp \
	explorer/fromllvm/lib/Support/Triple.cpp \
	explorer/fromllvm/lib/Support/ABIBreak.cpp \
	explorer/fromllvm/lib/Support/Process.cpp \
	explorer/fromllvm/lib/Support/Locale.cpp \
	explorer/fromllvm/lib/Support/raw_ostream.cpp \
	explorer/fromllvm/lib/Support/Signals.cpp \
	explorer/fromllvm/lib/Support/ThreadLocal.cpp \
	explorer/fromllvm/lib/Support/CrashRecoveryContext.cpp \
	explorer/fromllvm/lib/Support/ConvertUTF.cpp \
	explorer/fromllvm/lib/Support/StringMap.cpp \
	explorer/fromllvm/lib/Support/SmallPtrSet.cpp \
	explorer/fromllvm/lib/Support/Optional.cpp \
	explorer/fromllvm/lib/Support/YAMLParser.cpp \
	explorer/fromllvm/lib/Support/TypeSize.cpp \
	explorer/fromllvm/lib/Support/Twine.cpp \
	explorer/fromllvm/lib/Support/Hashing.cpp \
	$mylibs

