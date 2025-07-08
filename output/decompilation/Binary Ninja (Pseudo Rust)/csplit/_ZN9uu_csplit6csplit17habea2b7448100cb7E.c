
  fn uu_csplit::csplit::habea2b7448100cb7(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i32) -> i64

{
    let mut rax: i64;
    let mut rdx: i8;
    rax = std::io::BufRead::lines::hd6d1bf3903bf6678(arg5, arg6);
    let var_f8: i8 = rdx & 1;
    let mut var_120: i64 = 0;
    let var_118: i64 = 8;
    let var_110: i128 = {0};
    let var_f0: i64 = 1;
    let var_e8: i8 = 0;
    let var_a8: *mut c_void = arg2;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x11);
    let mut var_c8: i64 = -0x8000000000000000;
    let mut rbp: i64;
    rbp = 1;
    let mut var_178: i64;
    uu_csplit::patterns::get_patterns::h1caf3c5952747e62(&var_178);
    let rax_1: i64 = var_178;
    let mut var_170: i128;
    let mut var_1a8: i128 = var_170;
    let mut result: i64;
    let var_160: i64;
    let mut var_158: i64;
    
    if rax_1 != 0xc
    {
        arg1[3] = var_160;
        *arg1.byte_offset(8) = var_1a8;
        *arg1 = rax_1;
        arg1[4] = var_158;
        rbp = 1;
        result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_c8);
    }
    else
    {
        let mut var_88: i128 = var_1a8;
        let var_78_1: i64 = var_160;
        uu_csplit::do_csplit::h9017a56c540dfa97(&var_1a8, &var_c8, &var_88, &var_120);
        let mut rax_3: bool = true;
        rbp = 1;
        
        if var_1a8 != 0xc
        {
            goto 'label_56097b;
        }
        
        let var_e8_1: i8 = 1;
        rbp = 1;
        let mut var_50: ();
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&var_50, &var_120);
        rbp = 1;
        let var_48: i64;
        
        if var_48 != -0x7fffffffffffffff
        {
            let mut var_138: i128 = var_48;
            let rax_6: i64 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(&var_c8);
            
            if rax_6 == 0
            {
                let rax_7: i64 = var_138;
                let rsi_3: i64 = *var_138[8];
                
                if rax_7 != -0x8000000000000000
                {
                    var_178 = rax_7;
                    var_170 = rsi_3;
                    let var_38: u64;
                    *var_170[8] = var_38;
                    let rax_8: *mut *mut c_void =
                        uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&var_c8, rsi_3, var_38);
                    
                    if rax_8 == 0
                    {
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_178);
                        let var_148_1: i128 = var_f0;
                        var_158 = rax;
                        var_170 = var_110;
                        var_178 = var_120;
                        
                        loop
                        {
                            let mut var_70: ();
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&var_70, &var_178);
                            let var_68: i64;
                            
                            if var_68 == -0x7fffffffffffffff
                            {
                                core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::h7600f799ef9ed619(&var_178);
                                uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(&var_c8);
                                rbp = 0;
                                goto 'label_56096f;
                            }
                            
                            let var_60: i64;
                            
                            if var_68 == -0x8000000000000000
                            {
                                *arg1 = 0;
                                arg1[1] = var_60;
                            }
                            else
                            {
                                let mut var_e0: i64 = var_68;
                                let var_d8_1: i64 = var_60;
                                let var_58: u64;
                                let var_d0_1: u64 = var_58;
                                let rax_10: *mut *mut c_void =
                                    uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&var_c8, 
                                    var_60, var_58);
                                
                                if rax_10 != 0
                                {
                                    *arg1 = 0;
                                    arg1[1] = rax_10;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
                                    continue;
                                }
                            }
                            core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::h7600f799ef9ed619(&var_178);
                            rbp = 0;
                            break;
                        }
                    }
                    else
                    {
                        *arg1 = 0;
                        arg1[1] = rax_8;
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_178);
                        rbp = 1;
                    }
                }
                else
                {
                    *arg1 = 0;
                    arg1[1] = rsi_3;
                    rbp = 1;
                }
            }
            else
            {
                *arg1 = 0;
                arg1[1] = rax_6;
                rbp = 1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hee3cf79169426f18(&var_138);
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1a8);
            result =
                core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_c8);
        }
        else
        {
            'label_56096f:
            rax_3 = var_1a8 != 0xc;
            'label_56097b:
            let mut rax_4: *mut *mut c_void;
            
            if rax_3 != 0 && *arg2.byte_offset(0x60) == 0
            {
                rax_4 = uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(&var_c8);
            }
            
            if rax_3 == 0 || *arg2.byte_offset(0x60) != 0 || rax_4 == 0
            {
                let var_188: i64;
                arg1[4] = var_188;
                let zmm0_1: i128 = var_1a8;
                *arg1.byte_offset(0x10) = var_160;
                *arg1 = zmm0_1;
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_c8);
            }
            else
            {
                *arg1 = 0;
                arg1[1] = rax_4;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1a8);
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_c8);
            }
        }
    }
    
    if rbp == 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::h7600f799ef9ed619(&var_120)
}
