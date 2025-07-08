
  fn uu_dd::Input::fill_consecutive::h7d4bc8ab92dd656e(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut c_void

{
    let rax_1: i64 = *(*arg2.byte_offset(8)).byte_offset(0x70);
    let mut var_60: *mut *mut c_void;
    
    if rax_1 == 0
    {
        var_60 = &data_5610a0;
        let var_58: i64 = 1;
        let var_50_1: i64 = 8;
        let var_48: i128 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_60);
        /* no return */
    }
    
    var_60 = *arg3.byte_offset(8);
    let var_50: i64 = rax_1;
    let mut result: *mut c_void;
    let mut rdx: i64;
    result = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0385640c4904d04f(&var_60);
    let mut rbp: i64;
    let mut r12: i64;
    let mut r14: i64;
    
    if result == 0
    {
        r12 = 0;
        r14 = 0;
        rbp = 0;
        'label_4d7126:
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::h705e1c902b347a7b(arg3, r12);
        arg1[1] = rbp;
        arg1[2] = r14;
        arg1[3] = r12;
        arg1[4] = 0;
        *arg1 = 0;
    }
    else
    {
        rbp = 0;
        r14 = 0;
        r12 = 0;
        
        loop
        {
            let mut rdx_1: i64;
            result = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h91bb47559be41a26(arg2, 
                result, rdx);
            
            if result != 0
            {
                arg1[1] = rdx_1;
                *arg1 = 1;
                break;
            }
            
            result = *arg2.byte_offset(8);
            
            if *result.byte_offset(0x70) == rdx_1
            {
                rbp += 1;
            }
            else
            {
                if rdx_1 == 0
                {
                    goto 'label_4d7126;
                }
                
                r14 += 1;
            }
            
            r12 += rdx_1;
            result = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0385640c4904d04f(&var_60);
            
            if result == 0
            {
                goto 'label_4d7126;
            }
        }
    }
    result
}
