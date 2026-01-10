# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VRegularConvFull_SA_Tiled.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VRegularConvFull_SA_Tiled \
	VRegularConvFull_SA_Tiled___024root__DepSet_hd5ee0efe__0 \
	VRegularConvFull_SA_Tiled___024root__DepSet_hb97ed2e8__0 \
	VRegularConvFull_SA_Tiled___024root__DepSet_hb97ed2e8__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VRegularConvFull_SA_Tiled___024root__Slow \
	VRegularConvFull_SA_Tiled___024root__DepSet_hd5ee0efe__0__Slow \
	VRegularConvFull_SA_Tiled___024root__DepSet_hb97ed2e8__0__Slow \
	VRegularConvFull_SA_Tiled___024root__DepSet_hb97ed2e8__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VRegularConvFull_SA_Tiled__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VRegularConvFull_SA_Tiled__Syms \
	VRegularConvFull_SA_Tiled__Trace__0__Slow \
	VRegularConvFull_SA_Tiled__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
