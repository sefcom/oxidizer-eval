
  fn uu_csplit::do_csplit::hcf79d66f02e2a63d(arg1: *mut c_void, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut r14: *mut c_void = arg1;
    let mut var_88: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h8cfd37faa97e5c9a(&var_88, arg3);
    let mut i: i32;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&i, &var_88);
    
    if i != 3
    {
        let mut var_170: ();
        let mut rdi_3: *mut c_void = &var_170;
        let mut var_e8: i128;
        let mut rsi_2: *mut i32 = &var_e8;
        let var_180_1: *mut c_void = r14;
        
        do
        {
            var_e8 = i;
            rbp = 1;
            let mut rbx: *mut c_void;
            rbx = 1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hf41bf485036a1869(rdi_3, 
                rsi_2);
            rbp = var_e8;
            let mut var_188_1: i32;
            let mut var_184_1: i32;
            let var_168: i64;
            let var_160: u64;
            let mut var_158: i128;
            let mut var_148: i128;
            let mut var_138: i64;
            let mut var_110: i128;
            let var_100: i128;
            let var_58: i128;
            let mut rax_2: i32;
            
            if rbp == 2
            {
                rax_2 = 1;
                var_184_1 = rax_2;
                var_188_1 = 0;
                'label_561efc:
                let var_98_1: i128 = var_58;
                let mut var_a8: i128 = var_e8;
                let rax_3: i32 = *var_e8[4];
                let var_48: i128;
                let r13_1: i64 = *var_48[8];
                let var_38: i64;
                let mut rbx_1: i64;
                
                if r13_1 == 0
                {
                    rbx_1 = 0;
                    let mut rax_5: i64;
                    
                    if rbp != 2
                    {
                        'label_561f9a:
                        rax_5 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                        
                        if rax_5 == 0
                        {
                            goto 'label_561fd3;
                        }
                        
                        'label_5621bc:
                        *var_180_1 = 0;
                        *var_180_1.byte_offset(8) = rax_5;
                        'label_56227d:
                        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(&var_a8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_170);
                        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&var_88);
                    }
                    
                    'label_561f40:
                    arg2[7] = 1;
                    'label_561fd3:
                    uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(&var_110, arg2, var_168, 
                        var_160, var_a8, *var_a8[8], rax_3, arg4);
                    let var_f0: i64;
                    var_138 = var_f0;
                    var_148 = var_100;
                    var_158 = var_110;
                    let var_130_1: i64 = rbx_1;
                    let var_128_1: i64 = var_38;
                    let mut rax_7: i64 = var_158;
                    let mut r15_2: i64;
                    
                    if rax_7 != 0xc
                    {
                        r15_2 = 0;
                        'label_5621dd:
                        let mut r12_1: *mut c_void;
                        
                        if r13_1 == 0
                        {
                            r12_1 = var_180_1;
                            
                            if rax_7 == 3
                            {
                                *r12_1 = 0xc;
                                core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&var_158);
                                goto 'label_56227d;
                            }
                        }
                        else
                        {
                            r12_1 = var_180_1;
                            
                            if rax_7 == 3 && var_38 != 1 && r15_2 != 0
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_110, &var_170);
                                *r12_1.byte_offset(0x20) = var_100;
                                *r12_1.byte_offset(0x10) = var_110;
                                *r12_1 = 4;
                                *r12_1.byte_offset(8) = r15_2;
                                
                                if var_158 == 0xc
                                {
                                    goto 'label_56227d;
                                }
                                
                                core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&var_158);
                                goto 'label_56227d;
                            }
                        }
                        
                        *r12_1.byte_offset(0x20) = var_138;
                        let zmm0_3: i128 = var_158;
                        *r12_1.byte_offset(0x10) = var_148;
                        *r12_1 = zmm0_3;
                        goto 'label_56227d;
                    }
                    
                    r15_2 = 1;
                    
                    if r13_1 == 0
                    {
                        goto 'label_562050;
                    }
                    
                    'label_562030:
                    let mut rbx_2: i64 = 1;
                    
                    if var_38 != r15_2
                    {
                        if rbp == 2
                        {
                            'label_562043:
                            arg2[7] = 1;
                            goto 'label_562093;
                        }
                        
                        loop
                        {
                            rax_5 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                            
                            if rax_5 != 0
                            {
                                goto 'label_5621bc;
                            }
                            
                            'label_562093:
                            uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(&var_110, arg2, 
                                var_168, var_160, var_a8, *var_a8[8], rax_3, arg4);
                            var_138 = var_f0;
                            var_148 = var_100;
                            var_158 = var_110;
                            let var_130_2: i64 = rbx_2;
                            let var_128_2: i64 = var_38;
                            rax_7 = var_158;
                            
                            if rax_7 != 0xc
                            {
                                break;
                            }
                            
                            r15_2 += 1;
                            
                            if r13_1 != 0
                            {
                                goto 'label_562030;
                            }
                            
                            'label_562050:
                            rbx_2 = 0;
                            
                            if rbp == 2
                            {
                                goto 'label_562043;
                            }
                        }
                        
                        goto 'label_5621dd;
                    }
                    
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(
                        &var_a8);
                    r14 = var_180_1;
                }
                else
                {
                    rbx_1 = 1;
                    
                    if var_38 != 0
                    {
                        if rbp != 2
                        {
                            goto 'label_561f9a;
                        }
                        
                        goto 'label_561f40;
                    }
                    
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(
                        &var_a8);
                    r14 = var_180_1;
                }
            }
            else
            {
                if rbp == 1
                {
                    rax_2 = 1;
                    var_188_1 = rax_2;
                    var_184_1 = 0;
                    goto 'label_561efc;
                }
                
                let r15_1: i64 = *var_e8[8];
                let rax_4: i64 = var_58;
                rbx = *var_58[8];
                rbp = 1;
                
                if rax_4 == 0 || rbx != 0
                {
                    let mut rax_10: i64;
                    let mut r14_2: i64;
                    let mut rax_9: i64;
                    
                    if rax_4 == 0
                    {
                        r14_2 = 0;
                        let mut r13_3: i64 = r15_1;
                        
                        loop
                        {
                            rax_9 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                            
                            if rax_9 != 0
                            {
                                goto 'label_5622d5;
                            }
                            
                            uu_csplit::SplitWriter::do_to_line::h079b38feb919ada0(&var_158, arg2, 
                                var_168, var_160, r13_3, arg4);
                            rax_10 = var_158;
                            
                            if rax_10 != 0xc
                            {
                                break;
                            }
                            
                            r13_3 += r15_1;
                            r14_2 += 1;
                        }
                    }
                    else
                    {
                        let mut r13_2: i64 = r15_1;
                        r14_2 = 0;
                        
                        loop
                        {
                            rax_9 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                            
                            if rax_9 != 0
                            {
                                'label_5622d5:
                                *var_180_1 = 0;
                                *var_180_1.byte_offset(8) = rax_9;
                                goto 'label_56234c;
                            }
                            
                            uu_csplit::SplitWriter::do_to_line::h079b38feb919ada0(&var_158, arg2, 
                                var_168, var_160, r13_2, arg4);
                            rax_10 = var_158;
                            
                            if rax_10 != 0xc
                            {
                                break;
                            }
                            
                            r14_2 += 1;
                            r13_2 += r15_1;
                            
                            if rbx == r14_2
                            {
                                rbx = 1;
                                r14 = var_180_1;
                                goto 'label_56210e;
                            }
                        }
                    }
                    
                    if r14_2 == 0 || rax_10 != 1
                    {
                        *var_180_1.byte_offset(0x20) = var_138;
                        let zmm0_4: i128 = var_158;
                        *var_180_1.byte_offset(0x10) = var_148;
                        *var_180_1 = zmm0_4;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_110, &var_170);
                        *var_180_1.byte_offset(0x20) = var_100;
                        *var_180_1.byte_offset(0x10) = var_110;
                        *var_180_1 = 2;
                        *var_180_1.byte_offset(8) = r14_2;
                        rbx = 1;
                        rbp = 1;
                        core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&var_158);
                    }
                    
                    'label_56234c:
                    rbx = 1;
                    rbp = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                        &var_170);
                    return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&var_88);
                }
                
                rbx = 1;
            }
            'label_56210e:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_170);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&i, &var_88);
            rdi_3 = &var_170;
            rsi_2 = &var_e8;
        } while i != 3;
    }
    
    let result: i64 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&var_88);
    *r14 = 0xc;
    result
}
