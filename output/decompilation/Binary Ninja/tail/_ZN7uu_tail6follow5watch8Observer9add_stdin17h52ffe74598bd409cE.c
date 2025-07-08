
  int128_t* uu_tail::follow::watch::Observer::add_stdin::h52ffe74598bd409c(void* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, int64_t* arg5, char arg6)

{
    char rax = *(arg1 + 0x8e);
    
    if (rax == 2 || rax & 1)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(arg4, arg5);
        return nullptr;
    }
    
    int128_t var_48;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_48, 
        "/dev/stdinToo many open files:  …", 0xa);
    size_t var_38;
    size_t var_58_1 = var_38;
    int128_t var_68 = var_48;
    int128_t* result;
    int64_t* rdx_1;
    result = uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(arg1, *var_68[8], 
        var_38, arg2, arg3, arg4, arg5, arg6);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_68);
    return result;
}
