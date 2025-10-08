
  int64_t uu_sort::chunks::parse_lines::hfd3f718875d5181e(int64_t arg1, int64_t arg2, int64_t* arg3, void* arg4, char arg5)

{
    uint32_t rbp = arg5;
    int32_t var_b8 = 0;
    char* rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rbp, &var_b8);
    int64_t rax_1;
    int64_t rdx_2;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(
        rax, rdx, arg1, arg2);
    int64_t r13 = rdx_2;
    
    if (!rax_1)
        r13 = arg2;
    
    if (!rax_1)
        rax_1 = arg1;
    
    if (arg3[2])
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: lines.is_empty…");
        /* no return */
    }
    
    if (*(arg4 + 0x10))
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.sele…");
        /* no return */
    }
    
    if (*(arg4 + 0x28))
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.num_…");
        /* no return */
    }
    
    if (*(arg4 + 0x40))
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.pars…");
        /* no return */
    }
    
    if (*(arg4 + 0x58))
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.line…");
        /* no return */
    }
    
    var_b8 = 0;
    int64_t var_b0 = 8;
    int64_t var_a8 = 0;
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        rbp, rax_1, r13);
    int128_t var_80 = {0};
    int64_t var_70 = r13;
    int16_t var_38 = 1;
    void* var_98 = arg4;
    int32_t* var_90 = &var_b8;
    int64_t r9;
    int64_t var_88 = r9;
    alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h22a929e18423d947(arg3, &var_98);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpmc..array..Slot$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd036655fcae2cd02(var_b8, var_b0);
}
