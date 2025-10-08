
  fn ruff_python_formatter::string::docstring::contains_unescaped_newline::h725af0d29cbc1dc9(arg1: *mut i8, arg2: i64) -> u64

{
    let rax: i64;
    let mut var_38: i64 = rax;
    let mut r14: i64 = arg2;
    let mut r12: *mut i8 = arg1;
    let mut rdx_2: i64;
    
    loop
    {
        *var_38[3] = 0x5c;
        let mut rax_1: i32;
        rax_1 = memchr::arch::generic::memchr::search_slice_with_raw::hb25a568564df487c(r12, r14, 
            &*var_38[3]);
        
        if (rax_1 & 1) != 0
        {
            let mut rax_2: *mut c_void;
            let mut rdx_4: i64;
            rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rdx_2 + 1, r12, r14);
            
            if rax_2 == 0
            {
                break;
            }
            
            let mut rax_3: *mut i8;
            let mut rdx_5: i64;
            rax_3 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace_start::h664fc8ac076cf662(rax_2, rdx_4);
            r12 = rax_3;
            r14 = rdx_5;
            *var_38[4] = 0;
            let mut rax_4: *mut i8;
            let mut rdx_6: u64;
            rax_4 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &*var_38[4]);
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(r12, r14, 
                rax_4, rdx_6) == 0
            {
                continue;
            }
        }
        
        let mut r13_1: i32;
        r13_1 = rax_1 & 1;
        return r13_1;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(r12, r14, rdx_2 + 1, r14);
    /* no return */
}
