
  fn uu_cat::write_nonprint_to_end::h8a88ce313d35316b(arg1: i64, arg2: i64, arg3: *mut i64, arg4: *mut i8, arg5: u64) -> i64

{
    let mut var_40: i64 = arg1;
    let var_38: i64 = arg2 + arg1;
    let mut i: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b5a5efb688e09cf(&var_40);
    let mut result: i64 = 0;
    
    for ; i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b5a5efb688e09cf(&var_40)
    {
        let mut rax_1: u32 = *i;
        let mut rdx: u64;
        let mut rsi_1: *mut i8;
        let mut rdi_1: *mut i64;
        
        if rax_1 == 9
        {
            rdi_1 = arg3;
            rsi_1 = arg4;
            rdx = arg5;
        }
        else if rax_1 == 0x7f
        {
            rdx = 2;
            rdi_1 = arg3;
            rsi_1 = "^?unknown filetype: Is a directo…";
        }
        else
        {
            if rax_1 == 0xa
            {
                break;
            }
            
            let mut var_4c: i8;
            
            if rax_1 < 0x20
            {
                rax_1 |= 0x40;
                var_4c = 0x5e;
                let var_4b_1: i8 = rax_1;
                rdx = 2;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
            else if rax_1 - 0x20 < 0x5f
            {
                var_4c = rax_1;
                rdx = 1;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
            else if rax_1 < 0xa0
            {
                rax_1 -= 0x40;
                var_4c = 0x2d4d;
                let var_4a_1: i8 = 0x5e;
                let var_49_1: i8 = rax_1;
                rdx = 4;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
            else if rax_1 + 0x60 >= 0x5f
            {
                rdx = 4;
                rdi_1 = arg3;
                rsi_1 = "M-^?\x1b[2mAnsi -- \x1b[8mhelpNo…";
            }
            else
            {
                rax_1 &= 0x7f;
                var_4c = 0x2d4d;
                let var_4a_2: i8 = rax_1;
                rdx = 3;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(rdi_1, rsi_1, rdx));
        result += 1;
    }
    
    result
}
