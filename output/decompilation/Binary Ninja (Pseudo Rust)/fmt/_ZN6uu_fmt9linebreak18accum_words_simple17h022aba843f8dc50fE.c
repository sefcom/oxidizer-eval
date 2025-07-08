
  fn uu_fmt::linebreak::accum_words_simple::h022aba843f8dc50f(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i8, arg5: *mut i64) -> u64

{
    let rax: i64 = arg5[5];
    let rbp: *mut c_void = *arg2;
    let mut rbx: i64 = 0;
    let rax_1: i64 =
        uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(rbp, arg5, arg3, 0);
    let rcx: bool = *arg5.byte_offset(0x3a);
    
    if (arg2[6] | rcx) != 0
    {
        rbx = ((rcx != 0 & arg4) | arg5[7] != 0) + 1;
    }
    
    let r12_3: i64 = arg3 + rax + rax_1 + rbx;
    let r13_1: *mut i64 = arg2[3];
    let mut result: u64;
    let mut rcx_2: *mut i64;
    
    if r12_3 <= *rbp.byte_offset(0x30)
    {
        result =
            uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(arg5[2], arg5[3], rbx, r13_1);
        
        if result == 0
        {
            result = *arg5.byte_offset(0x39);
            rcx_2 = arg1;
            *rcx_2 = r12_3;
        }
        else
        {
            'label_4bb5ce:
            rcx_2 = arg1;
            *rcx_2 = result;
            result = 2;
        }
    }
    else
    {
        result = uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(arg2[1], arg2[2], r13_1);
        
        if result != 0
        {
            goto 'label_4bb5ce;
        }
        
        let r12_4: *mut i8 = arg5[2];
        let rbx_2: *mut c_void = arg5[3];
        let rbp_1: *mut c_void = arg5[4];
        let mut rax_2: *mut c_void;
        let mut rdx_3: u64;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(rbp_1, r12_4, rbx_2);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(r12_4, rbx_2, rbp_1, rbx_2);
            /* no return */
        }
        
        result = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(rax_2, rdx_3, 0, r13_1);
        
        if result != 0
        {
            goto 'label_4bb5ce;
        }
        
        result = *arg5.byte_offset(0x39);
        rcx_2 = arg1;
        *rcx_2 = rax + arg2[5];
    }
    
    rcx_2[1] = result;
    result
}
