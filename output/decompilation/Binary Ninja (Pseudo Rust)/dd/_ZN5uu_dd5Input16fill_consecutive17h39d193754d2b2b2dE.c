
  fn uu_dd::Input::fill_consecutive::h39d193754d2b2b2d(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut i64

{
    let rax_1: i64 = *(*arg2.byte_offset(8)).byte_offset(0x70);
    let mut var_60: *mut *mut c_void;
    
    if rax_1 == 0
    {
        var_60 = &data_53d1a0;
        let var_58: i64 = 1;
        let var_50_1: i64 = 8;
        let var_48: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    var_60 = *arg3.byte_offset(8);
    let var_50: i64 = rax_1;
    let mut i: *mut i64;
    let mut rdx: i64;
    i = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h042a7a090798bd25(&var_60);
    let mut rbp: i64;
    let mut r13: i64;
    let mut r14: i64;
    
    if i == 0
    {
        r13 = 0;
        rbp = 0;
        r14 = 0;
        *arg3.byte_offset(0x10) = r14;
    }
    else
    {
        r13 = 0;
        rbp = 0;
        r14 = 0;
        
        do
        {
            let mut rax_2: i8;
            let mut rdx_1: i64;
            rax_2 = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h4a29ff4f57f9a098(arg2, 
                i, rdx);
            
            if (rax_2 & 1) != 0
            {
                i = arg1;
                i[1] = rdx_1;
                *i = 1;
                goto 'label_49013d;
            }
            
            i = *arg2.byte_offset(8);
            
            if i[0xe] == rdx_1
            {
                r13 += 1;
            }
            else
            {
                if rdx_1 == 0
                {
                    break;
                }
                
                rbp += 1;
            }
            
            r14 += rdx_1;
            i = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h042a7a090798bd25(&var_60);
        } while i != 0;
        
        if r14 <= *arg3.byte_offset(0x10)
        {
            *arg3.byte_offset(0x10) = r14;
        }
    }
    
    arg1[1] = r13;
    arg1[2] = rbp;
    arg1[3] = r14;
    arg1[4] = 0;
    *arg1 = 0;
    'label_49013d:
    i
}
