
  fn uu_sort::chunks::parse_lines::h5a9b866e0c2ef2e8(arg1: i64, arg2: i64, arg3: *mut i64, arg4: *mut c_void, arg5: i8) -> i64

{
    let rbp: u32 = arg5;
    let mut var_c8: i32 = 0;
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(rbp, &var_c8);
    let mut rax_1: i64;
    let mut rdx_2: i64;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(
        rax, rdx, arg1, arg2);
    let mut r12: i64 = rdx_2;
    
    if rax_1 == 0
    {
        r12 = arg2;
    }
    
    if rax_1 == 0
    {
        rax_1 = arg1;
    }
    
    if arg3[2] != 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: lines.is_empty…");
        /* no return */
    }
    
    if *arg4.byte_offset(0x10) != 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.sele…");
        /* no return */
    }
    
    if *arg4.byte_offset(0x28) != 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.num_…");
        /* no return */
    }
    
    if *arg4.byte_offset(0x40) != 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.pars…");
        /* no return */
    }
    
    let mut var_e0: i64 = 0;
    let var_d8: i64 = 8;
    let var_d0: i64 = 0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_c8, 
        rbp, rax_1, r12);
    let var_a8: i128;
    let var_48: i128 = var_a8;
    let var_b8: i128;
    let var_58: i128 = var_b8;
    let var_68: i128 = var_c8;
    let var_80: i128 = {0};
    let var_70: i64 = r12;
    let var_38: i16 = 1;
    let mut var_98: *mut c_void = arg4;
    let var_90: *mut i64 = &var_e0;
    let r9: i64;
    let var_88: i64 = r9;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::ha92d856ec75aa721(arg3, &var_98);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&var_e0)
}
