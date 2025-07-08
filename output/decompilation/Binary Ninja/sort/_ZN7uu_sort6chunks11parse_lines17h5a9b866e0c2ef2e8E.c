
  int64_t uu_sort::chunks::parse_lines::h5a9b866e0c2ef2e8(int64_t arg1, int64_t arg2, int64_t* arg3, void* arg4, char arg5)

{
    uint32_t rbp = arg5;
    int32_t var_c8 = 0;
    int64_t rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(rbp, &var_c8);
    int64_t rax_1;
    int64_t rdx_2;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(
        rax, rdx, arg1, arg2);
    int64_t r12 = rdx_2;
    
    if (!rax_1)
        r12 = arg2;
    
    if (!rax_1)
        rax_1 = arg1;
    
    if (arg3[2])
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: lines.is_empty…");
        /* no return */
    }
    
    if (*(arg4 + 0x10))
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.sele…");
        /* no return */
    }
    
    if (*(arg4 + 0x28))
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.num_…");
        /* no return */
    }
    
    if (*(arg4 + 0x40))
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.pars…");
        /* no return */
    }
    
    int64_t var_e0 = 0;
    int64_t var_d8 = 8;
    int64_t var_d0 = 0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_c8, 
        rbp, rax_1, r12);
    int128_t var_a8;
    int128_t var_48 = var_a8;
    int128_t var_b8;
    int128_t var_58 = var_b8;
    int128_t var_68 = var_c8;
    int128_t var_80 = {0};
    int64_t var_70 = r12;
    int16_t var_38 = 1;
    void* var_98 = arg4;
    int64_t* var_90 = &var_e0;
    int64_t r9;
    int64_t var_88 = r9;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::ha92d856ec75aa721(arg3, &var_98);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&var_e0);
}
