#!/bin/sh

#list of used llvm support files

LLVM_SRC=/tmp/llvm-15.0.2.src
LLVM_DEST=.

mk_llvm_folders() {
	folder=$LLVM_DEST/$1
	if [ ! -e $folder ]
	then
		echo building $folder
		mkdir $folder
	fi
}

get_from_llvm() {
	src_file=$LLVM_SRC/$1
	dest_file=$LLVM_DEST/$1
	if [ ! -e $dest_file ]
	then
		echo $src_file $dest_file
		cp $src_file $dest_file
	fi
}

mk_llvm_folders include
mk_llvm_folders include/llvm
mk_llvm_folders include/llvm/ADT
mk_llvm_folders include/llvm/Config
mk_llvm_folders include/llvm/Demangle
mk_llvm_folders include/llvm/Support
mk_llvm_folders include/llvm/Support/FileSystem
mk_llvm_folders include/llvm-c
mk_llvm_folders lib
mk_llvm_folders lib/Support
mk_llvm_folders lib/Support/Unix


get_from_llvm include/llvm/ADT
get_from_llvm include/llvm/ADT/APSInt.h
get_from_llvm include/llvm/ADT/ilist_node.h
get_from_llvm include/llvm/ADT/DenseMap.h
get_from_llvm include/llvm/ADT/bit.h
get_from_llvm include/llvm/ADT/BitVector.h
get_from_llvm include/llvm/ADT/StringSwitch.h
get_from_llvm include/llvm/ADT/StringRef.h
get_from_llvm include/llvm/ADT/DenseSet.h
get_from_llvm include/llvm/ADT/IntrusiveRefCntPtr.h
get_from_llvm include/llvm/ADT/None.h
get_from_llvm include/llvm/ADT/edit_distance.h
get_from_llvm include/llvm/ADT/PointerUnion.h
get_from_llvm include/llvm/ADT/GraphTraits.h
get_from_llvm include/llvm/ADT/Statistic.h
get_from_llvm include/llvm/ADT/SmallPtrSet.h
get_from_llvm include/llvm/ADT/Hashing.h
get_from_llvm include/llvm/ADT/AllocatorList.h
get_from_llvm include/llvm/ADT/PointerIntPair.h
get_from_llvm include/llvm/ADT/STLForwardCompat.h
get_from_llvm include/llvm/ADT/APFloat.h
get_from_llvm include/llvm/ADT/identity.h
get_from_llvm include/llvm/ADT/StringExtras.h
get_from_llvm include/llvm/ADT/ilist_node_options.h
get_from_llvm include/llvm/ADT/Twine.h
get_from_llvm include/llvm/ADT/StringSet.h
get_from_llvm include/llvm/ADT/MapVector.h
get_from_llvm include/llvm/ADT/StringMapEntry.h
get_from_llvm include/llvm/ADT/ilist_base.h
get_from_llvm include/llvm/ADT/ilist_iterator.h
get_from_llvm include/llvm/ADT/FloatingPointMode.h
get_from_llvm include/llvm/ADT/SmallVector.h
get_from_llvm include/llvm/ADT/STLFunctionalExtras.h
get_from_llvm include/llvm/ADT/DenseMapInfo.h
get_from_llvm include/llvm/ADT/simple_ilist.h
get_from_llvm include/llvm/ADT/StringMap.h
get_from_llvm include/llvm/ADT/Triple.h
get_from_llvm include/llvm/ADT/ilist_node_base.h
get_from_llvm include/llvm/ADT/FoldingSet.h
get_from_llvm include/llvm/ADT/Optional.h
get_from_llvm include/llvm/ADT/UniqueVector.h
get_from_llvm include/llvm/ADT/SmallString.h
get_from_llvm include/llvm/ADT/STLArrayExtras.h
get_from_llvm include/llvm/ADT/APInt.h
get_from_llvm include/llvm/ADT/iterator_range.h
get_from_llvm include/llvm/ADT/ArrayRef.h
get_from_llvm include/llvm/ADT/STLExtras.h
get_from_llvm include/llvm/ADT/EpochTracker.h
get_from_llvm include/llvm/ADT/iterator.h
get_from_llvm include/llvm/ADT/ScopeExit.h
get_from_llvm include/llvm/Config/config.h
get_from_llvm include/llvm/Config/llvm-config.h
get_from_llvm include/llvm/Config/abi-breaking.h
get_from_llvm include/llvm/Demangle/Demangle.h
get_from_llvm include/llvm/Support/DataTypes.h
get_from_llvm include/llvm/Support/FormatProviders.h
get_from_llvm include/llvm/Support/CBindingWrapping.h
get_from_llvm include/llvm/Support/YAMLTraits.h
get_from_llvm include/llvm/Support/Host.h
get_from_llvm include/llvm/Support/MathExtras.h
get_from_llvm include/llvm/Support/Unicode.h
get_from_llvm include/llvm/Support/WithColor.h
get_from_llvm include/llvm/Support/raw_ostream.h
get_from_llvm include/llvm/Support/VersionTuple.h
get_from_llvm include/llvm/Support/FormatCommon.h
get_from_llvm include/llvm/Support/TypeSize.h
get_from_llvm include/llvm/Support/GraphWriter.h
get_from_llvm include/llvm/Support/Compiler.h
get_from_llvm include/llvm/Support/Path.h
get_from_llvm include/llvm/Support/ReverseIteration.h
get_from_llvm include/llvm/Support/MemoryBuffer.h
get_from_llvm include/llvm/Support/Process.h
get_from_llvm include/llvm/Support/Locale.h
get_from_llvm include/llvm/Support/YAMLParser.h
get_from_llvm include/llvm/Support/PrettyStackTrace.h
get_from_llvm include/llvm/Support/ThreadLocal.h
get_from_llvm include/llvm/Support/Debug.h
get_from_llvm include/llvm/Support/Endian.h
get_from_llvm include/llvm/Support/DebugCounter.h
get_from_llvm include/llvm/Support/VirtualFileSystem.h
get_from_llvm include/llvm/Support/Casting.h
get_from_llvm include/llvm/Support/AlignOf.h
get_from_llvm include/llvm/Support/NativeFormatting.h
get_from_llvm include/llvm/Support/FileSystem.h
get_from_llvm include/llvm/Support/thread.h
get_from_llvm include/llvm/Support/UnicodeCharRanges.h
get_from_llvm include/llvm/Support/Mutex.h
get_from_llvm include/llvm/Support/FileUtilities.h
get_from_llvm include/llvm/Support/ARMTargetParser.h
get_from_llvm include/llvm/Support/ErrorOr.h
get_from_llvm include/llvm/Support/Signals.h
get_from_llvm include/llvm/Support/FileSystem
get_from_llvm include/llvm/Support/FileSystem/UniqueID.h
get_from_llvm include/llvm/Support/ARMBuildAttributes.h
get_from_llvm include/llvm/Support/Threading.h
get_from_llvm include/llvm/Support/Chrono.h
get_from_llvm include/llvm/Support/Timer.h
get_from_llvm include/llvm/Support/WindowsError.h
get_from_llvm include/llvm/Support/MemAlloc.h
get_from_llvm include/llvm/Support/CrashRecoveryContext.h
get_from_llvm include/llvm/Support/ManagedStatic.h
get_from_llvm include/llvm/Support/SMLoc.h
get_from_llvm include/llvm/Support/Allocator.h
get_from_llvm include/llvm/Support/Error.h
get_from_llvm include/llvm/Support/CommandLine.h
get_from_llvm include/llvm/Support/Watchdog.h
get_from_llvm include/llvm/Support/Alignment.h
get_from_llvm include/llvm/Support/Errno.h
get_from_llvm include/llvm/Support/AllocatorBase.h
get_from_llvm include/llvm/Support/Errc.h
get_from_llvm include/llvm/Support/SourceMgr.h
get_from_llvm include/llvm/Support/raw_os_ostream.h
get_from_llvm include/llvm/Support/ExitCodes.h
get_from_llvm include/llvm/Support/SmallVectorMemoryBuffer.h
get_from_llvm include/llvm/Support/PointerLikeTypeTraits.h
get_from_llvm include/llvm/Support/Program.h
get_from_llvm include/llvm/Support/X86TargetParser.h
get_from_llvm include/llvm/Support/ARMTargetParser.def
get_from_llvm include/llvm/Support/Duration.h
get_from_llvm include/llvm/Support/Signposts.h
get_from_llvm include/llvm/Support/ELFAttributes.h
get_from_llvm include/llvm/Support/DJB.h
get_from_llvm include/llvm/Support/FormatVariadic.h
get_from_llvm include/llvm/Support/MemoryBufferRef.h
get_from_llvm include/llvm/Support/Format.h
get_from_llvm include/llvm/Support/X86TargetParser.def
get_from_llvm include/llvm/Support/circular_raw_ostream.h
get_from_llvm include/llvm/Support/ErrorHandling.h
get_from_llvm include/llvm/Support/InitLLVM.h
get_from_llvm include/llvm/Support/RandomNumberGenerator.h
get_from_llvm include/llvm/Support/FormatVariadicDetails.h
get_from_llvm include/llvm/Support/SaveAndRestore.h
get_from_llvm include/llvm/Support/SwapByteOrder.h
get_from_llvm include/llvm/Support/MD5.h
get_from_llvm include/llvm/Support/StringSaver.h
get_from_llvm include/llvm/Support/DOTGraphTraits.h
get_from_llvm include/llvm/Support/ConvertUTF.h
get_from_llvm include/llvm/Support/type_traits.h
get_from_llvm include/llvm-c/DataTypes.h
get_from_llvm include/llvm-c/ExternC.h
get_from_llvm include/llvm-c/Types.h
get_from_llvm include/llvm-c/Error.h
get_from_llvm include/llvm-c/Support.h
get_from_llvm include/llvm-c/ErrorHandling.h
get_from_llvm lib/Support/Unicode.cpp
get_from_llvm lib/Support/MemoryBufferRef.cpp
get_from_llvm lib/Support/Error.cpp
get_from_llvm lib/Support/Host.cpp
get_from_llvm lib/Support/circular_raw_ostream.cpp
get_from_llvm lib/Support/ConvertUTFWrapper.cpp
get_from_llvm lib/Support/ARMTargetParser.cpp
get_from_llvm lib/Support/Allocator.cpp
get_from_llvm lib/Support/DebugCounter.cpp
get_from_llvm lib/Support/DebugOptions.h
get_from_llvm lib/Support/NativeFormatting.cpp
get_from_llvm lib/Support/Unix/ThreadLocal.inc
get_from_llvm lib/Support/Unix/Host.inc
get_from_llvm lib/Support/Unix/Program.inc
get_from_llvm lib/Support/Unix/Process.inc
get_from_llvm lib/Support/Unix/Path.inc
get_from_llvm lib/Support/Unix/Signals.inc
get_from_llvm lib/Support/Unix/Watchdog.inc
get_from_llvm lib/Support/Unix/Unix.h
get_from_llvm lib/Support/Unix/Threading.inc
get_from_llvm lib/Support/Program.cpp
get_from_llvm lib/Support/CommandLine.cpp
get_from_llvm lib/Support/VirtualFileSystem.cpp
get_from_llvm lib/Support/SmallVector.cpp
get_from_llvm lib/Support/APSInt.cpp
get_from_llvm lib/Support/StringRef.cpp
get_from_llvm lib/Support/APFloat.cpp
get_from_llvm lib/Support/MD5.cpp
get_from_llvm lib/Support/Statistic.cpp
get_from_llvm lib/Support/Threading.cpp
get_from_llvm lib/Support/MemAlloc.cpp
get_from_llvm lib/Support/VersionTuple.cpp
get_from_llvm lib/Support/Debug.cpp
get_from_llvm lib/Support/GraphWriter.cpp
get_from_llvm lib/Support/Errno.cpp
get_from_llvm lib/Support/Timer.cpp
get_from_llvm lib/Support/StringSaver.cpp
get_from_llvm lib/Support/WithColor.cpp
get_from_llvm lib/Support/ErrorHandling.cpp
get_from_llvm lib/Support/PrettyStackTrace.cpp
get_from_llvm lib/Support/raw_os_ostream.cpp
get_from_llvm lib/Support/MemoryBuffer.cpp
get_from_llvm lib/Support/StringExtras.cpp
get_from_llvm lib/Support/APInt.cpp
get_from_llvm lib/Support/SourceMgr.cpp
get_from_llvm lib/Support/Watchdog.cpp
get_from_llvm lib/Support/Path.cpp
get_from_llvm lib/Support/FileUtilities.cpp
get_from_llvm lib/Support/Signposts.cpp
get_from_llvm lib/Support/X86TargetParser.cpp
get_from_llvm lib/Support/RandomNumberGenerator.cpp
get_from_llvm lib/Support/FormatVariadic.cpp
get_from_llvm lib/Support/ManagedStatic.cpp
get_from_llvm lib/Support/InitLLVM.cpp
get_from_llvm lib/Support/Triple.cpp
get_from_llvm lib/Support/ABIBreak.cpp
get_from_llvm lib/Support/Process.cpp
get_from_llvm lib/Support/Locale.cpp
get_from_llvm lib/Support/raw_ostream.cpp
get_from_llvm lib/Support/Signals.cpp
get_from_llvm lib/Support/ThreadLocal.cpp
get_from_llvm lib/Support/CrashRecoveryContext.cpp
get_from_llvm lib/Support/ConvertUTF.cpp
get_from_llvm lib/Support/StringMap.cpp
get_from_llvm lib/Support/SmallPtrSet.cpp
get_from_llvm lib/Support/Optional.cpp
get_from_llvm lib/Support/YAMLParser.cpp
get_from_llvm lib/Support/TypeSize.cpp
get_from_llvm lib/Support/Twine.cpp
get_from_llvm lib/Support/Hashing.cpp
