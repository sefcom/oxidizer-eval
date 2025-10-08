
  fn uu_sort::chunks::parse_lines::hfd3f718875d5181e(arg1: i64, arg2: i64, arg3: *mut i64, arg4: *mut c_void, arg5: i8) -> i64

{
    let rbp: u32 = arg5;
    let mut var_b8: i32 = 0;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rbp, &var_b8);
    let mut rax_1: i64;
    let mut rdx_2: i64;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(
        rax, rdx, arg1, arg2);
    let mut r13: i64 = rdx_2;
    
    if rax_1 == 0
    {
        r13 = arg2;
    }
    
    if rax_1 == 0
    {
        rax_1 = arg1;
    }
    
    if arg3[2] != 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: lines.is_empty…");
        /* no return */
    }
    
    if *arg4.byte_offset(0x10) != 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.sele…");
        /* no return */
    }
    
    if *arg4.byte_offset(0x28) != 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.num_…");
        /* no return */
    }
    
    if *arg4.byte_offset(0x40) != 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.pars…");
        /* no return */
    }
    
    if *arg4.byte_offset(0x58) != 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: line_data.line…");
        /* no return */
    }
    
    var_b8 = 0;
    let var_b0: i64 = 8;
    let var_a8: i64 = 0;
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        rbp, rax_1, r13);
    let var_80: i128 = {0};
    let var_70: i64 = r13;
    let var_38: i16 = 1;
    let mut var_98: *mut c_void = arg4;
    let var_90: *mut i32 = &var_b8;
    let r9: i64;
    let var_88: i64 = r9;
    alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h22a929e18423d947(arg3, &var_98);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpmc..array..Slot$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd036655fcae2cd02(var_b8, var_b0)
}
