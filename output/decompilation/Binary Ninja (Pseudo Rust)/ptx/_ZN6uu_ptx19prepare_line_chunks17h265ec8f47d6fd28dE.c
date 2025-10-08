
  fn uu_ptx::prepare_line_chunks::h265ec8f47d6fd28d(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64, arg7: [i32; 0x4] @ zmm0, arg8: i64, arg9: i64, arg10: *mut i8, arg11: i64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg3, arg5, arg6);
    
    if rax == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg5, arg6, 0, arg3);
        /* no return */
    }
    
    let r12_1: *mut c_void = &rax[rdx_1];
    let mut rax_1: i64;
    let mut zmm0: [i32; 0x4];
    rax_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax, r12_1, arg7);
    let mut rax_2: *mut c_void;
    let mut rdx_3: u64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(arg3, arg4, arg5, arg6);
    
    if rax_2 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg5, arg6, arg3, arg4);
        /* no return */
    }
    
    let mut rbp_1: i64 = arg9;
    let mut rax_3: i64;
    let mut zmm0_1: [i32; 0x4];
    rax_3 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax_2, rax_2.byte_offset(rdx_3), zmm0);
    let r15_2: i64 = rax_3 + rax_1;
    let mut rax_9: i64;
    let mut rdx_8: i64;
    let mut r13_1: i64;
    
    if *arg2.byte_offset(0x5a) == 0
    {
        rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(0, rax_1, arg8, rbp_1);
        r13_1 = arg8;
    }
    else
    {
        let r14_2: i64 = rbp_1;
        let rax_5: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax, r12_1, zmm0_1);
        rbp_1 = r14_2;
        let mut rax_6: i64;
        let mut rdx_5: i64;
        rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h0b3398452a83d790(rax, rdx_1, 
            arg10, arg11);
        let mut rax_7: *mut i8;
        let mut rdx_6: *mut c_void;
        let mut zmm0_2: [i32; 0x4];
        rax_7 =
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h4916abcead74b5de(rax_6, rdx_5);
        r13_1 = arg8;
        rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(
            rax_5 - _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax_7, rdx_6.byte_offset(rax_7), zmm0_2), 
            rax_5, r13_1, r14_2);
    }
    
    let mut var_a8: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_a8, rax_2, rdx_3);
    
    if rbp_1 < r15_2
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r15_2, rbp_1);
        /* no return */
    }
    
    let result: i64;
    let mut var_90: i128;
    uu_ptx::get_output_chunks::h0c2bb66b7373631a(&var_90, rax_9, rdx_8, result, 
        (r15_2 << 2) + r13_1, rbp_1 - r15_2, arg2);
    let var_80: i64;
    arg1[1] = var_80;
    *arg1 = var_90;
    let var_68: i64;
    *arg1.byte_offset(0x28) = var_68;
    let var_78: i128;
    *arg1.byte_offset(0x18) = var_78;
    let var_50: i64;
    *arg1.byte_offset(0x58) = var_50;
    let var_60: i128;
    *arg1.byte_offset(0x48) = var_60;
    let var_38: i64;
    arg1[7] = var_38;
    let var_48: i128;
    arg1[6] = var_48;
    arg1[4] = result;
    arg1[3] = var_a8;
    result
}
