
  fn uu_dd::Output::write_blocks::hd1d1fad151688f0b(arg1: *mut i64, arg2: *mut i8, arg3: *mut *mut c_void) -> i64

{
    let rax_1: i64 = *(*arg2.byte_offset(0x10)).byte_offset(0x78);
    let mut var_60: *mut *mut c_void;
    
    if rax_1 == 0
    {
        var_60 = &data_53d1a0;
        let var_58_1: i64 = 1;
        let var_50_1: i64 = 8;
        let var_48: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    var_60 = arg3;
    let rcx: i64;
    let var_58: i64 = rcx;
    let var_50: i64 = rax_1;
    let mut result: i64;
    let mut rdx: i64;
    result = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2d70f533d6737a69(&var_60);
    let mut rbp: i64;
    let mut r12: i64;
    let mut r13: i64;
    
    if result == 0
    {
        rbp = 0;
        r13 = 0;
        r12 = 0;
        'label_490dc2:
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
            let mut rdx_1: i64;
            result = uu_dd::Output::write_block::ha48c1850e6d52037(arg2, result, rdx);
            
            if (result & 1) != 0
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
            result = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2d70f533d6737a69(&var_60);
            
            if result == 0
            {
                goto 'label_490dc2;
            }
        }
    }
    result
}
