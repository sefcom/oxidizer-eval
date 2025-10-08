
  fn uu_wc::utf8::Incomplete::try_complete_offsets::h473bfdae9ee1fad0(arg1: *mut c_void, arg2: i64, arg3: i64) -> u64

{
    let r15: u64 = *arg1.byte_offset(4);
    
    if r15 > 4
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r15, 4);
        /* no return */
    }
    
    let result_1: u64 = core::cmp::Ord::min::hb704016e1b3086a2(4 - r15, arg3);
    let mut result: u64 = result_1;
    let mut rax: i64;
    let mut rdx_1: u64;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hb9f4f421da6706df(result_1, arg1.byte_offset(r15), 4 - r15);
    let mut rax_1: i64;
    let mut rdx_3: i64;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, result, arg2, arg3);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h738b473666d6ec1e(rax, rdx_1, 
        rax_1, rdx_3);
    let mut rax_2: *mut i8;
    let mut rdx_6: i64;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, result + r15, arg1, 4);
    let mut r12_1: i8 = rdx_6;
    let mut var_48: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rax_2, rdx_6);
    let var_40: i64;
    
    if (var_48 & 1) != 0
    {
        let var_38: i8;
        
        if var_40 != 0
        {
            result = var_40 - r15;
            
            if var_40 < r15
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            r12_1 = var_40;
        }
        else
        {
            let mut rdx_7: i64;
            
            if (var_38 & 1) == 0
            {
                rdx_7 = 2;
            }
            else
            {
                let var_37: i8;
                r12_1 = var_37;
                
                if r12_1 < r15
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                result = r12_1 - r15;
                rdx_7 = 1;
            }
        }
    }
    *arg1.byte_offset(4) = r12_1;
    result
}
