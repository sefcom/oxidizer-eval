
  fn uu_tr::operation::Sequence::solve_set_characters::hf6b9e7c9837a7276(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i8, arg7: i8, arg8: i8) -> *mut i64

{
    let mut var_1e8: *mut i8;
    uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&var_1e8, arg2, arg3);
    let cond:0: bool = var_1e8 == 0;
    let mut var_1e0: i128;
    let mut var_228: i128 = var_1e0;
    let mut var_1d0: i64;
    
    if cond:0
    {
        let mut var_1b8: i128 = var_228;
        let rdi_1: *mut i8 = *var_1b8[8];
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811(rdi_1, &rdi_1[var_1d0 << 4]) == 0
        {
            uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&var_1e8, arg4, arg5);
            let cond:1_1: bool = var_1e8 == 0;
            var_228 = var_1e0;
            
            if cond:1_1
            {
                let mut var_208: i128 = var_228;
                let r15_1: *mut i8 = *var_208[8];
                let r14_3: *mut c_void = &r15_1[var_1d0 << 4];
                let mut rcx: i64;
                
                if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811(r15_1, r14_3) <= 1
                {
                    let r12_1: u32 = arg8;
                    let mut rax_6: i8;
                    
                    if r12_1 != 0
                    {
                        var_1e8 = r15_1;
                        var_1e0 = r14_3;
                        rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h7bb18215294ee2ea(&var_1e8);
                    }
                    
                    if r12_1 != 0 && rax_6 != 0
                    {
                        rcx = -0x7ffffffffffffffa;
                        goto 'label_4bd697;
                    }
                    
                    let rax_7: i64 = *var_1b8[8];
                    let mut var_c0: i64 = rax_7;
                    let var_b8_1: i64 = (var_1d0 << 4) + rax_7;
                    let var_b0_1: i64 = 0;
                    let var_a0_1: i64 = 0;
                    let mut var_198: i128;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&var_198, &var_c0);
                    let mut var_188: i64;
                    
                    if arg6 != 0
                    {
                        let var_158_1: i16 = 0;
                        let var_156_1: i8 = 0xff;
                        let mut var_160: *mut i128 = &var_198;
                        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3fc2f6d282a93e56(&var_1e8, &var_160);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_198);
                        var_188 = *var_1e0[8];
                        var_198 = var_1e8;
                    }
                    
                    let mut r13_1: i64 = var_188;
                    let rax_9: i64 = *var_208[8];
                    let mut var_60: i64 = rax_9;
                    let var_58_1: i64 = (var_1d0 << 4) + rax_9;
                    let var_50_1: i64 = 0;
                    let var_40_1: i64 = 0;
                    let rax_10: i64 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h5221240c85754c5c(&var_60);
                    let mut rcx_7: i64 = 0;
                    
                    if r13_1 >= rax_10
                    {
                        rcx_7 = r13_1 - rax_10;
                    }
                    
                    let mut var_150: i64 = rcx_7;
                    let rax_11: i64 = *var_208[8];
                    let mut var_148: i64 = rax_11;
                    let var_140_1: i64 = (var_1d0 << 4) + rax_11;
                    let var_138_1: *mut i64 = &var_150;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h475caf593186536a(&var_1e8, &var_148);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                    let mut r14_4: i64 = *var_1e0[8];
                    let var_1f8_2: i64 = r14_4;
                    var_208 = var_1e8;
                    let mut r15_2: i64 = *var_208[8];
                    var_228 = r15_2;
                    *var_228[8] = (r14_4 << 4) + r15_2;
                    let var_218_2: i64 = 0;
                    let mut rax_15: i64;
                    let mut i: *mut i8;
                    rax_15 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&var_228);
                    
                    if i != 0
                    {
                        let var_168_1: i64 = r13_1;
                        
                        do
                        {
                            if *i == 4
                            {
                                let mut r12_2: i64;
                                
                                if rax_15 == 0
                                {
                                    r12_2 = 0;
                                }
                                else
                                {
                                    let rcx_11: i64 = *var_208[8];
                                    let var_110_1: i64 = rcx_11;
                                    let var_108_1: i64 = (var_1f8_2 << 4) + rcx_11;
                                    let var_100_1: i64 = rax_15;
                                    let mut var_130: i64 = 0;
                                    let var_120_1: i64 = 0;
                                    r12_2 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&var_130);
                                }
                                
                                let rax_17: *mut i8 = *var_1b8[8];
                                var_1e8 = rax_17;
                                var_1e0 = &rax_17[var_1d0 << 4];
                                *var_1e0[8] = 0;
                                
                                loop
                                {
                                    let mut rax_19: i64;
                                    let mut rdx_6: *mut i8;
                                    rax_19 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&var_1e8);
                                    
                                    if rdx_6 == 0
                                    {
                                        arg1[1] = -0x7ffffffffffffff9;
                                        *arg1 = -0x8000000000000000;
                                        goto 'label_4bd9c6;
                                    }
                                    
                                    if *rdx_6 == 4
                                    {
                                        let mut rax_18: i64;
                                        
                                        if rax_19 == 0
                                        {
                                            rax_18 = 0;
                                        }
                                        else
                                        {
                                            let rcx_15: i64 = *var_1b8[8];
                                            let var_d8_1: i64 = rcx_15;
                                            let var_d0_1: i64 = (var_1d0 << 4) + rcx_15;
                                            let var_c8_1: i64 = rax_19;
                                            let mut var_f8: i64 = 0;
                                            let var_e8_1: i64 = 0;
                                            rax_18 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&var_f8);
                                        }
                                        
                                        if rax_18 == r12_2
                                        {
                                            r13_1 = var_168_1;
                                            break;
                                        }
                                    }
                                }
                            }
                            
                            rax_15 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&var_228);
                        } while i != 0;
                        
                        r15_2 = *var_208[8];
                        r14_4 = var_1f8_2;
                    }
                    
                    let mut var_90: i64 = r15_2;
                    let var_88_1: i64 = (r14_4 << 4) + r15_2;
                    let var_80_1: i64 = 0;
                    let var_70_1: i64 = 0;
                    let mut var_180: i128;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&var_180, &var_90);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3c1bb440d2de9642(&var_228, &var_180);
                    alloc::slice::stable_sort::h08e6667fddf878a8(*var_228[8], var_218_2);
                    alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h94896181a17f53f7(&var_228);
                    let rax_21: *mut i8 = *var_1b8[8];
                    var_1e8 = rax_21;
                    var_1e0 = &rax_21[var_1d0 << 4];
                    let var_170: i64;
                    let mut rcx_19: i64;
                    let mut rsi_11: i64;
                    
                    if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hd7cdadf0fcbb5b0b(&var_1e8) == 0 || r12_1 == 0 || arg6 == 0
                    {
                        rsi_11 = var_170;
                        'label_4bdad4:
                        
                        if rsi_11 < var_188 && arg7 == 0 && var_1f8_2 != 0
                        {
                            let rdx_10: i64 = *var_208[8];
                            let rcx_21: i64 = var_1f8_2 << 4;
                            
                            if *(rcx_21 + rdx_10 - 0x10) != 4
                            {
                                goto 'label_4bdb4c;
                            }
                            
                            let rdx_11: u32 = *(rcx_21 + rdx_10).byte_offset(-0xf);
                            rcx_19 = -0x7ffffffffffffff8;
                            
                            if rdx_11 == 0xa || rdx_11 == 6
                            {
                                goto 'label_4bdb1f;
                            }
                            
                            goto 'label_4bdb4c;
                        }
                        
                        'label_4bdb4c:
                        
                        if arg7 != 0
                        {
                            alloc::vec::Vec$LT$T$C$A$GT$::truncate::h04589a5fa11b67b9(&var_198, 
                                rsi_11);
                        }
                        
                        *var_1e0[8] = var_188;
                        let zmm0_4: i128 = var_198;
                        var_1e8 = zmm0_4;
                        var_1d0 = var_180;
                        *arg1 = zmm0_4;
                        let var_1c8: i64;
                        arg1[4] = var_1c8;
                        arg1[5] = var_170;
                        arg1[2] = *var_1e0[8];
                        arg1[3] = var_1d0;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_228);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                    }
                    else
                    {
                        rcx_19 = -0x7ffffffffffffff7;
                        
                        if var_218_2 <= 1
                        {
                            rsi_11 = var_170;
                            
                            if rsi_11 <= r13_1
                            {
                                goto 'label_4bdad4;
                            }
                            
                            goto 'label_4bdb1f;
                        }
                        
                        'label_4bdb1f:
                        arg1[1] = rcx_19;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_228);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_180);
                        'label_4bd9c6:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_198);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                    }
                }
                else
                {
                    rcx = -0x7ffffffffffffffe;
                    'label_4bd697:
                    arg1[1] = rcx;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                }
            }
            else
            {
                arg1[3] = var_1d0;
                *arg1.byte_offset(8) = var_228;
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            arg1[1] = -0x7ffffffffffffffd;
            *arg1 = -0x8000000000000000;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_1b8);
    }
    else
    {
        arg1[3] = var_1d0;
        *arg1.byte_offset(8) = var_228;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
