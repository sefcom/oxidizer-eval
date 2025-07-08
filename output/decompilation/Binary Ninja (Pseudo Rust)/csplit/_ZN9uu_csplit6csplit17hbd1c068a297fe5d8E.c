
  fn uu_csplit::csplit::hbd1c068a297fe5d8(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut i128) -> i64

{
    let mut var_d0: ();
    std::io::BufRead::lines::hb5077b34f6593e01(&var_d0, arg5);
    let var_a0: i64 = 0;
    let mut var_e8: i64 = 0;
    let var_e0: i64 = 8;
    let var_d8: i64 = 0;
    let var_98: i64 = 1;
    let var_90: i8 = 0;
    let var_108: *mut c_void = arg2;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x11);
    let mut var_128: i64 = -0x8000000000000000;
    let mut rbp: i64;
    rbp = 1;
    let mut var_188: i64;
    uu_csplit::patterns::get_patterns::h1caf3c5952747e62(&var_188);
    let rax: i64 = var_188;
    let mut var_180: i128;
    let mut var_1e8: i128 = var_180;
    let mut result: i64;
    let var_170: i64;
    let mut var_168: i64;
    
    if rax != 0xc
    {
        arg1[3] = var_170;
        *arg1.byte_offset(8) = var_1e8;
        *arg1 = rax;
        arg1[4] = var_168;
        rbp = 1;
        result =
            core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_128);
    }
    else
    {
        let mut var_88: i128 = var_1e8;
        let var_78_1: i64 = var_170;
        uu_csplit::do_csplit::hcf79d66f02e2a63d(&var_1e8, &var_128, &var_88, &var_e8);
        let mut rax_2: bool = true;
        rbp = 1;
        
        if var_1e8 != 0xc
        {
            goto 'label_560dce;
        }
        
        let var_90_1: i8 = 1;
        rbp = 1;
        let mut var_50: ();
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_50, &var_e8);
        rbp = 1;
        let var_48: i64;
        
        if var_48 != -0x7fffffffffffffff
        {
            let mut var_1b8: i128 = var_48;
            let rax_5: i64 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(&var_128);
            
            if rax_5 == 0
            {
                let rax_6: i64 = var_1b8;
                let rsi_3: i64 = *var_1b8[8];
                
                if rax_6 != -0x8000000000000000
                {
                    var_188 = rax_6;
                    var_180 = rsi_3;
                    let var_38: u64;
                    *var_180[8] = var_38;
                    let rax_7: *mut *mut c_void =
                        uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&var_128, rsi_3, var_38);
                    
                    if rax_7 == 0
                    {
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_188);
                        let var_138_1: i128 = var_98;
                        let var_a8: i128;
                        let var_148_1: i128 = var_a8;
                        let var_b8: i128;
                        let var_158_1: i128 = var_b8;
                        let var_c8: i128;
                        var_168 = var_c8;
                        var_180 = var_d8;
                        var_188 = var_e8;
                        
                        loop
                        {
                            let mut var_70: ();
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_70, &var_188);
                            let var_68: i64;
                            
                            if var_68 == -0x7fffffffffffffff
                            {
                                core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&var_188);
                                uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(&var_128);
                                rbp = 0;
                                goto 'label_560dc2;
                            }
                            
                            let var_60: i64;
                            
                            if var_68 == -0x8000000000000000
                            {
                                *arg1 = 0;
                                arg1[1] = var_60;
                            }
                            else
                            {
                                let mut var_1a0: i64 = var_68;
                                let var_198_1: i64 = var_60;
                                let var_58: u64;
                                let var_190_1: u64 = var_58;
                                let rax_9: *mut *mut c_void =
                                    uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&var_128, 
                                    var_60, var_58);
                                
                                if rax_9 != 0
                                {
                                    *arg1 = 0;
                                    arg1[1] = rax_9;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_1a0);
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_1a0);
                                    continue;
                                }
                            }
                            core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&var_188);
                            rbp = 0;
                            break;
                        }
                    }
                    else
                    {
                        *arg1 = 0;
                        arg1[1] = rax_7;
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_188);
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
                arg1[1] = rax_5;
                rbp = 1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hee3cf79169426f18(&var_1b8);
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1e8);
            result =
                core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_128);
        }
        else
        {
            'label_560dc2:
            rax_2 = var_1e8 != 0xc;
            'label_560dce:
            let mut rax_3: *mut *mut c_void;
            
            if rax_2 != 0 && *arg2.byte_offset(0x60) == 0
            {
                rax_3 = uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(&var_128);
            }
            
            if rax_2 == 0 || *arg2.byte_offset(0x60) != 0 || rax_3 == 0
            {
                let var_1c8: i64;
                arg1[4] = var_1c8;
                let zmm0_1: i128 = var_1e8;
                *arg1.byte_offset(0x10) = var_170;
                *arg1 = zmm0_1;
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_128);
            }
            else
            {
                *arg1 = 0;
                arg1[1] = rax_3;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1e8);
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_128);
            }
        }
    }
    
    if rbp == 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&var_e8)
}
