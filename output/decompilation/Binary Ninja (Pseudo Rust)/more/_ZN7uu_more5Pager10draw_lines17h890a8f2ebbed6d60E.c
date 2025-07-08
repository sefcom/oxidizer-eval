
  fn uu_more::Pager::draw_lines::h890a8f2ebbed6d60(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let mut rax: *mut *mut [i8; 0x81] =
        crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg2, 4);
    
    if rax == 0
    {
        rax = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
            arg2);
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(rax);
    *arg1.byte_offset(0x38) = 0;
    let mut var_e8: i64 = 0;
    let var_e0: i64 = 8;
    let var_d8: i64 = 0;
    let rax_1: i64 = *arg1.byte_offset(8);
    let rcx: i64 = *arg1.byte_offset(0x10);
    let mut rbp: i64 = *arg1.byte_offset(0x18);
    let mut var_d0: i64 = rax_1;
    let var_c8: i64 = rax_1 + rcx * 0x18;
    let mut var_c0: i64 = rbp;
    let r13: u64 = *arg1.byte_offset(0x40);
    
    if r13 != 0
    {
        if *arg1.byte_offset(0x43) == 0
        {
            loop
            {
                let rsi_4: i64 = var_c0;
                let mut rax_3: i64;
                
                if rsi_4 == 0
                {
                    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&var_d0);
                    
                    if rax_3 == 0
                    {
                        break;
                    }
                }
                else
                {
                    var_c0 = 0;
                    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&var_d0, rsi_4);
                    
                    if rax_3 == 0
                    {
                        break;
                    }
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&var_e8, rax_3);
                
                if var_d8 >= r13
                {
                    goto 'label_4dd5d7;
                }
            }
        }
        else
        {
            let mut r15_1: i8 = 0;
            let mut r12_1: i64 = 0;
            
            loop
            {
                let rsi_2: i64 = var_c0;
                let mut rax_2: *mut c_void;
                
                if rsi_2 == 0
                {
                    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&var_d0);
                    
                    if rax_2 == 0
                    {
                        break;
                    }
                }
                else
                {
                    var_c0 = 0;
                    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&var_d0, rsi_2);
                    
                    if rax_2 == 0
                    {
                        break;
                    }
                }
                
                if *rax_2.byte_offset(0x10) != 0
                {
                    if (r15_1 & 1) != 0
                    {
                        r15_1 = 0;
                    }
                    
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&var_e8, rax_2);
                }
                else if (r15_1 & 1) == 0
                {
                    r15_1 = 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&var_e8, rax_2);
                }
                else
                {
                    r12_1 += 1;
                    *arg1.byte_offset(0x38) = r12_1;
                    rbp += 1;
                    *arg1.byte_offset(0x18) = rbp;
                }
                
                if var_d8 >= r13
                {
                    goto 'label_4dd5d7;
                }
            }
        }
        
        *arg1.byte_offset(0x18) = *arg1.byte_offset(0x30);
    }
    
    'label_4dd5d7:
    let mut var_68: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha758e961b2d597f5(&var_68, &var_e8);
    
    for let mut i: i64 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&var_68); i != 0; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&var_68)
    {
        let mut i_1: i64 = i;
        let mut var_78: *mut i64 = &i_1;
        let var_70_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h11343ef90598214f;
        let mut var_a8: *mut *mut [i8; 0xa7] = &data_562a38;
        let var_a0_1: i64 = 2;
        let var_88_1: i64 = 0;
        let var_98_1: *mut *mut i64 = &var_78;
        let var_90_1: i64 = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_48, &var_a8);
        var_a8 = var_48;
        let var_38: u64;
        let var_98_2: u64 = var_38;
        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(
            arg2, var_a0_1, var_38));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_a8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h28fddf8dcd9d6d5f(&var_68)
}
