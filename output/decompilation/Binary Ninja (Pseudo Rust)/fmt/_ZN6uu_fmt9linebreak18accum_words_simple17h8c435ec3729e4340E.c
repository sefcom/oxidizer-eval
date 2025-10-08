
  fn uu_fmt::linebreak::accum_words_simple::h8c435ec3729e4340(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i8, arg5: *mut i32) -> u64

{
    let r15: i64 = *arg5.byte_offset(0x28);
    let rdi: *mut c_void = *arg2;
    let mut rbp: i64 = 0;
    let rax: i64 =
        uu_fmt::linebreak::BreakArgs::compute_width::h78d96ea40f73ab18(rdi, arg5, arg3, 0);
    let rcx: i8 = *arg5.byte_offset(0x3a);
    
    if (arg2[6] | rcx) != 0
    {
        rbp = (((arg4 & rcx) | arg5[0xe]) & 1) + 1;
    }
    
    let r12_3: i64 = arg3 + r15 + rax + rbp;
    let r13_1: *mut i64 = arg2[3];
    let mut result: u64;
    let mut rcx_5: *mut i64;
    
    if r12_3 <= *rdi.byte_offset(0x30)
    {
        result = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(*arg5.byte_offset(0x10), 
            *arg5.byte_offset(0x18), rbp, r13_1);
        
        if result == 0
        {
            result = *arg5.byte_offset(0x39);
            rcx_5 = arg1;
            *rcx_5 = r12_3;
        }
        else
        {
            'label_4616b0:
            rcx_5 = arg1;
            *rcx_5 = result;
            result = 2;
        }
    }
    else
    {
        result = uu_fmt::linebreak::write_newline::h38b91d3d5ac133d3(arg2[1], arg2[2], r13_1);
        
        if result != 0
        {
            goto 'label_4616b0;
        }
        
        let r12_4: *mut i8 = *arg5.byte_offset(0x10);
        let rbx_1: i64 = *arg5.byte_offset(0x18);
        let rbp_1: i64 = *arg5.byte_offset(0x20);
        let mut rax_2: *mut c_void;
        let mut rdx_3: u64;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbp_1, r12_4, rbx_1);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r12_4, rbx_1, rbp_1, rbx_1);
            /* no return */
        }
        
        result = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(rax_2, rdx_3, 0, r13_1);
        
        if result != 0
        {
            goto 'label_4616b0;
        }
        
        result = *arg5.byte_offset(0x39);
        rcx_5 = arg1;
        *rcx_5 = r15 + arg2[5];
    }
    
    rcx_5[1] = result;
    result
}
