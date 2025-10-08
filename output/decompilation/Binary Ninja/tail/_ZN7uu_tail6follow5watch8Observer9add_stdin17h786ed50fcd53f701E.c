
  uint64_t uu_tail::follow::watch::Observer::add_stdin::h786ed50fcd53f701(void* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    int64_t rbx = arg4;
    bool rax = *(arg1 + 0x8e);
    arg4 = rax != 2;
    
    if (!(arg4 & !(rax & 1)))
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(rbx, &data_573ad0);
        return 0;
    }
    
    int64_t var_48;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_48, "/dev/stdinToo many open files ca…", 0xa);
    int64_t r13_1 = var_48;
    char* var_40;
    uint64_t var_38;
    uint64_t result;
    int64_t rdx_1;
    result = uu_tail::follow::watch::Observer::add_path::h2513ec520b230a37(arg1, var_40, var_38, 
        arg2, arg3, rbx, &data_573ad0, 1);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(r13_1, var_40);
    return result;
}
