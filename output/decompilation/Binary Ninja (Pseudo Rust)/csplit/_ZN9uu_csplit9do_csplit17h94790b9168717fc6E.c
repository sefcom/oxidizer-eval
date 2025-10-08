
  fn uu_csplit::do_csplit::h94790b9168717fc6(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let mut rbp: *mut i64 = arg2;
    let mut r12: *mut i64 = arg1;
    let mut var_88: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfcf31d9b258cc2e0(&var_88, arg3);
    let mut var_68: i32;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14e6f3a775451a37(&var_68, &var_88);
    
    if var_68 != 3
    {
        let mut var_108: i128;
        let mut rsi_2: *mut i128 = &var_108;
        let var_178_1: *mut i64 = rbp;
        let var_170_1: *mut i64 = r12;
        
        loop
        {
            var_108 = var_68;
            let mut var_160: ();
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h37c42c1dc99d122a(
                &var_160, rsi_2);
            let r13_1: i32 = var_108;
            let var_158: i64;
            let var_150: u64;
            let mut var_148: i64;
            let mut var_138: i128;
            let mut var_128: i64;
            let mut var_d0: i128;
            let var_c0: i64;
            let var_58: i128;
            
            if r13_1 != 0
            {
                let mut rax_2: i32;
                rax_2 = 1;
                
                if r13_1 != 1
                {
                    let var_17c_2: i32 = rax_2;
                    let var_180_2: i32 = 0;
                }
                else
                {
                    let var_180_1: i32 = rax_2;
                    let var_17c_1: i32 = 0;
                }
                
                let var_98_1: i128 = var_58;
                let mut var_a8: i128 = var_108;
                let rbp_1: i32 = *var_108[4];
                let var_48: i128;
                let r12_1: i64 = *var_48[8];
                let mut r14_2: i64 = 0;
                
                if r12_1 != 0
                {
                    goto 'label_519a10;
                }
                
                'label_5199e0:
                let mut r15_2: i64 = 0;
                let mut rsi_4: *mut i64;
                
                if r13_1 != 2
                {
                    loop
                    {
                        let rax_6: i64 =
                            uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(var_178_1);
                        rsi_4 = var_178_1;
                        
                        if rax_6 == 0
                        {
                            'label_519a52:
                            uu_csplit::SplitWriter::do_to_match::h17829ad82477f465(&var_d0, rsi_4, 
                                var_158, var_150, var_a8, *var_a8[8], rbp_1, arg4);
                            let var_b0: i64;
                            var_128 = var_b0;
                            var_138 = var_c0;
                            var_148 = var_d0;
                            let var_120_1: i64 = r15_2;
                            let var_38: i64;
                            let var_118_1: i64 = var_38;
                            let mut rax_8: i64 = var_148;
                            
                            if rax_8 == 0xd
                            {
                                r14_2 += 1;
                                
                                if r12_1 == 0
                                {
                                    goto 'label_5199e0;
                                }
                                
                                'label_519a10:
                                r15_2 = r12_1;
                                
                                if var_38 == r14_2
                                {
                                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h0ef14e510ab06315(&var_a8);
                                    r12 = var_170_1;
                                    rbp = var_178_1;
                                    goto 'label_519ac7;
                                }
                                
                                if r13_1 == 2
                                {
                                    break;
                                }
                                
                                continue;
                            }
                            else
                            {
                                let mut r15_3: *mut i64;
                                
                                if r15_2 == 0
                                {
                                    r15_3 = var_170_1;
                                    
                                    if rax_8 != 3
                                    {
                                        'label_519b89:
                                        r15_3[4] = var_128;
                                        let zmm0_4: i128 = var_148;
                                        *r15_3.byte_offset(0x10) = var_138;
                                        *r15_3 = zmm0_4;
                                    }
                                    else
                                    {
                                        *r15_3 = 0xd;
                                        core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hcd386fc76ec93e3b(&var_148);
                                    }
                                }
                                else
                                {
                                    r15_3 = var_170_1;
                                    
                                    if rax_8 != 3
                                    {
                                        goto 'label_519b89;
                                    }
                                    
                                    rax_8 = var_38 == 1;
                                    
                                    if (r14_2 == 0 | rax_8) != 0
                                    {
                                        goto 'label_519b89;
                                    }
                                    
                                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_d0, &var_160);
                                    r15_3[4] = var_c0;
                                    *r15_3.byte_offset(0x10) = var_d0;
                                    *r15_3 = 4;
                                    r15_3[1] = r14_2;
                                    core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hcd386fc76ec93e3b(&var_148);
                                }
                            }
                        }
                        else
                        {
                            *var_170_1 = 0;
                            var_170_1[1] = rax_6;
                        }
                        
                        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h0ef14e510ab06315(&var_a8);
                        goto 'label_519bb2;
                    }
                }
                
                rsi_4 = var_178_1;
                rsi_4[7] = 1;
                goto 'label_519a52;
            }
            
            let rax_3: i8 = var_58;
            let r15_1: i64 = *var_58[8];
            
            if (rax_3 & r15_1 == 0) == 0
            {
                let rbx_1: i64 = *var_108[8];
                let mut rax_5: i64;
                let mut r14_1: i64;
                let mut rax_4: i64;
                
                if (rax_3 & 1) == 0
                {
                    r14_1 = 0;
                    let mut r13_3: i64 = rbx_1;
                    
                    loop
                    {
                        rax_4 = uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(var_178_1);
                        
                        if rax_4 != 0
                        {
                            goto 'label_519c23;
                        }
                        
                        uu_csplit::SplitWriter::do_to_line::h77b5b4ed91319959(&var_148, var_178_1, 
                            var_158, var_150, r13_3, arg4);
                        rax_5 = var_148;
                        
                        if rax_5 != 0xd
                        {
                            break;
                        }
                        
                        r13_3 += rbx_1;
                        r14_1 += 1;
                    }
                }
                else
                {
                    let mut r13_2: i64 = rbx_1;
                    r14_1 = 0;
                    
                    loop
                    {
                        rax_4 = uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(rbp);
                        
                        if rax_4 != 0
                        {
                            'label_519c23:
                            *r12 = 0;
                            r12[1] = rax_4;
                            goto 'label_519bb2;
                        }
                        
                        uu_csplit::SplitWriter::do_to_line::h77b5b4ed91319959(&var_148, rbp, 
                            var_158, var_150, r13_2, arg4);
                        rax_5 = var_148;
                        
                        if rax_5 != 0xd
                        {
                            break;
                        }
                        
                        r14_1 += 1;
                        r13_2 += rbx_1;
                        
                        if r15_1 == r14_1
                        {
                            goto 'label_519ac7;
                        }
                    }
                }
                rax_5 = rax_5 != 1;
                
                if (r14_1 == 0 | rax_5) == 0
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_d0, &var_160);
                    r12[4] = var_c0;
                    *r12.byte_offset(0x10) = var_d0;
                    *r12 = 2;
                    r12[1] = r14_1;
                    let mut rax_12: i64;
                    rax_12 = 1;
                    let var_17c_3: i32 = rax_12;
                    rax_12 = 1;
                    let var_180_3: i32 = rax_12;
                    core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hcd386fc76ec93e3b(&var_148);
                }
                else
                {
                    r12[4] = var_128;
                    let zmm0_3: i128 = var_148;
                    *r12.byte_offset(0x10) = var_138;
                    *r12 = zmm0_3;
                }
                
                'label_519bb2:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_160);
                return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h1f8d6e2fb4b3b420(&var_88);
            }
            
            'label_519ac7:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_160);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14e6f3a775451a37(&var_68, &var_88);
            rsi_2 = &var_108;
            
            if var_68 == 3
            {
                break;
            }
        }
    }
    
    let result: i64 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h1f8d6e2fb4b3b420(&var_88);
    *r12 = 0xd;
    result
}
