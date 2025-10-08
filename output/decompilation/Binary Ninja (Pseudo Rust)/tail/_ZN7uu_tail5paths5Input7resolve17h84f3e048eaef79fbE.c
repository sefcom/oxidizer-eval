
  fn uu_tail::paths::Input::resolve::h84f3e048eaef79fb(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_48: i64;
    let var_40: i64;
    let var_38: i64;
    let mut rax_1: i8;
    let mut r14_1: i64;
    
    if !(0 + -(*arg2.byte_offset(0x18)))
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_48, "/dev/stdinToo many open files ca…", 0xa);
        let r13_1: i64 = var_48;
        r14_1 = *arg2.byte_offset(0x20);
        rax_1 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(
            r14_1, *arg2.byte_offset(0x28), var_40, var_38);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(r13_1, var_40);
    }
    
    if !(0 + -(*arg2.byte_offset(0x18))) && rax_1 == 0
    {
        std::fs::canonicalize::h51813c249f73b0e1(&var_48, r14_1);
        
        if var_48 != -0x8000000000000000
        {
            arg1[2] = var_38;
            *arg1 = var_48;
        }
        else
        {
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd5adcfe716321922(&var_48);
        }
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_48, "/dev/fd/0 <==\n", 9);
        let r15_3: i64 = var_48;
        std::fs::canonicalize::h51813c249f73b0e1(&var_48, var_40);
        
        if var_48 != -0x8000000000000000
        {
            arg1[2] = var_38;
            *arg1 = var_48;
        }
        else
        {
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd5adcfe716321922(&var_48);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(r15_3, var_40);
    }
    
    arg1
}
