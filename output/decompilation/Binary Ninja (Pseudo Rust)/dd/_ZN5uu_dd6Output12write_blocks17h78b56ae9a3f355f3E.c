
  fn uu_dd::Output::write_blocks::h78b56ae9a3f355f3(arg1: *mut i64, arg2: *mut i8, arg3: *mut *mut c_void) -> *mut i64

{
    let rax_1: i64 = *(*arg2.byte_offset(0x10)).byte_offset(0x78);
    let mut var_60: *mut *mut c_void;
    
    if rax_1 == 0
    {
        var_60 = &data_5610a0;
        let var_58_1: i64 = 1;
        let var_50_1: i64 = 8;
        let var_48: i128 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_60);
        /* no return */
    }
    
    var_60 = arg3;
    let rcx: i64;
    let var_58: i64 = rcx;
    let var_50: i64 = rax_1;
    let mut rax_2: *mut c_void;
    let mut rdx: i64;
    rax_2 = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45c1de6715574df6(&var_60);
    let mut rbp: i64;
    let mut r12: i64;
    let mut r13: i64;
    
    if rax_2 == 0
    {
        rbp = 0;
        r13 = 0;
        r12 = 0;
        'label_4d7d73:
        arg1[2] = rbp;
        arg1[3] = 0;
        arg1[4] = r12;
        arg1[5] = r13;
        *arg1 = 0;
    }
    else
    {
        r12 = 0;
        r13 = 0;
        rbp = 0;
        
        loop
        {
            let mut rax_3: i64;
            let mut rdx_1: i64;
            rax_3 = uu_dd::Output::write_block::h75bb814762c2a847(arg2, rax_2, rdx);
            
            if rax_3 != 0
            {
                arg1[1] = rdx_1;
                *arg1 = 1;
                break;
            }
            
            let temp0_1: i64 = *(*arg2.byte_offset(0x10)).byte_offset(0x78);
            let mut rcx_1: i64;
            rcx_1 = temp0_1 <= rdx_1;
            let mut rsi_1: i64;
            rsi_1 = temp0_1 > rdx_1;
            r13 += rsi_1;
            r12 += rcx_1;
            rbp += rdx_1;
            rax_2 = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45c1de6715574df6(&var_60);
            
            if rax_2 == 0
            {
                goto 'label_4d7d73;
            }
        }
    }
    arg1
}
