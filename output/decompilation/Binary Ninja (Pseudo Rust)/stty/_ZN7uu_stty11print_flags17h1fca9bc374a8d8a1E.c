
  fn uu_stty::print_flags::h1fca9bc374a8d8a1(arg1: *mut c_void, arg2: i8) -> *mut c_void

{
    let mut r15: i8 = 0;
    let mut r13: i64 = 0;
    
    loop
    {
        r13 += 0x20;
        
        loop
        {
            let mut var_40: i128 = *(r13 + 0x4e2fa0);
            let mut var_88: *mut *mut [i8; 0x87];
            let mut var_70: i64;
            
            if *(r13 + 0x4e2fb4) != 0
            {
                let rbx_1: i8 = *(r13 + 0x4e2fb5);
                let rbp_1: i32 = *(r13 + &data_4e2f98);
                let rax_1: i8 = _$LT$nix..sys..termios..InputFlags$u20$as$u20$uu_stty..TermiosFlag$GT$::is_in::h7a378cd8bdb34370(*(r13 + 0x4e2fb0), *arg1.byte_offset(0x70), rbp_1, 
                    *(r13 + &*data_4e2f98.byte_offset(4)));
                
                if rbp_1 != 0
                {
                    if (rax_1 & ((rbx_1 ^ 1) | arg2)) == 0
                    {
                        goto 'label_4591e0;
                    }
                    
                    goto 'label_459235;
                }
                
                if (arg2 & 1) != 0 || rbx_1 != rax_1
                {
                    if rax_1 != 0
                    {
                        goto 'label_459235;
                    }
                    
                    var_88 = &data_4e3858;
                    let var_80_1: i64 = 1;
                    let var_78_1: i64 = 8;
                    var_70 = {0};
                    std::io::stdio::_print::h5e446ff973c02de6(&var_88);
                    'label_459235:
                    let mut var_58: *mut i128 = &var_40;
                    let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65652a1c6501a73;
                    var_88 = &data_4e3838;
                    let var_80_2: i64 = 2;
                    let var_68_1: i64 = 0;
                    let var_78_2: *mut *mut i128 = &var_58;
                    var_70 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_88);
                    r15 = 1;
                    
                    if r13 != 0x180
                    {
                        break;
                    }
                }
                else
                {
                    'label_4591e0:
                    
                    if r13 != 0x180
                    {
                        break;
                    }
                }
            }
            else
            {
                r13 += 0x20;
                
                if r13 != 0x1a0
                {
                    continue;
                }
            }
            
            if (r15 & 1) == 0
            {
                return arg1;
            }
            
            var_88 = &data_4e2ac0;
            let var_80_3: i64 = 1;
            let var_78_3: i64 = 8;
            var_70 = {0};
            return std::io::stdio::_print::h5e446ff973c02de6(&var_88);
        }
    }
}
