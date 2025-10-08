
  fn uu_tr::operation::Sequence::solve_set_characters::hf591f1b89257870f(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i8, arg7: i8, arg8: i8) -> *mut i64

{
    let mut var_188: i32;
    uu_tr::operation::Sequence::from_str::h4181ffdd5168ac11(&var_188, arg2, arg3);
    let rax: i32 = var_188;
    let var_184: i32;
    let mut var_180: i128;
    let mut var_170: i64;
    
    if rax != 0xc
    {
        arg1[1] = rax;
        *arg1.byte_offset(0xc) = var_184;
        *arg1.byte_offset(0x10) = var_180;
        arg1[4] = var_170;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let rax_1: i64 = var_180;
        let rbx_1: *mut i8 = *var_180[8];
        let r13_3: *mut c_void = &rbx_1[var_170 << 4];
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3ae9e0df8fd0afde(rbx_1, r13_3) == 0
        {
            uu_tr::operation::Sequence::from_str::h4181ffdd5168ac11(&var_188, arg4, arg5);
            let rax_3: i32 = var_188;
            
            if rax_3 != 0xc
            {
                arg1[1] = rax_3;
                *arg1.byte_offset(0xc) = var_184;
                *arg1.byte_offset(0x10) = var_180;
                arg1[4] = var_170;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                let mut var_138_1: *mut i8 = var_180;
                let rdi_3: *mut i8 = *var_180[8];
                let r12_3: *mut c_void = &rdi_3[var_170 << 4];
                let mut rsi_18: *mut i8;
                let mut rdi_25: *mut i8;
                
                if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3ae9e0df8fd0afde(rdi_3, r12_3) <= 1
                {
                    if arg8 != 0
                    {
                        var_188 = rdi_3;
                        var_180 = r12_3;
                        
                        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h78da172df07bdda7(&var_188) != 0
                        {
                            arg1[1] = 6;
                            goto 'label_470aa5;
                        }
                    }
                    
                    var_188 = rbx_1;
                    var_180 = r13_3;
                    *var_180[8] = 0;
                    let var_168_1: i64 = 0;
                    let mut var_128: i64;
                    core::iter::traits::iterator::Iterator::collect::hdf6c0e97b7534283(&var_128, 
                        &var_188);
                    let mut var_150: *mut i8;
                    let mut var_148: i16;
                    let var_120: i64;
                    let mut var_118: u64;
                    
                    if arg6 != 0
                    {
                        var_148 = 0;
                        let var_146_1: i8 = 0xff;
                        var_150 = &var_128;
                        core::iter::traits::iterator::Iterator::collect::h33eaaef4d8a943ac(
                            &var_188, &var_150);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd84321348a921e7b(var_128, var_120);
                        var_118 = *var_180[8];
                        var_128 = var_188;
                    }
                    
                    let mut var_60: *mut i8 = rdi_3;
                    let var_58_1: *mut c_void = r12_3;
                    let var_50_1: i64 = 0;
                    let var_40_1: i64 = 0;
                    let rax_11: i64 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hbc4b3051cd2622eb(&var_60);
                    let mut rcx_2: i64 = 0;
                    
                    if var_118 >= rax_11
                    {
                        rcx_2 = var_118 - rax_11;
                    }
                    
                    let mut var_d8: i64 = rcx_2;
                    var_188 = rdi_3;
                    var_180 = r12_3;
                    *var_180[8] = &var_d8;
                    core::iter::traits::iterator::Iterator::collect::h494a9bd301803bca(&var_150, 
                        &var_188);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::hc196a6e0e0492a55(var_138_1, rdi_3);
                    var_138_1 = var_150;
                    let rax_13: *mut i8 = var_148;
                    let var_140: i64;
                    let rcx_5: *mut c_void = &rax_13[var_140 << 4];
                    var_150 = rax_13;
                    var_148 = rcx_5;
                    let var_140_1: u64 = 0;
                    let mut rax_14: i64;
                    let mut rdx_5: *mut i8;
                    rax_14 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h58e9c59f58a776f0(&var_150);
                    
                    if rdx_5 != 0
                    {
                        loop
                        {
                            if *rdx_5 == 4
                            {
                                let mut r14_3: i64;
                                
                                if rax_14 == 0
                                {
                                    r14_3 = 0;
                                }
                                else
                                {
                                    let var_b0_1: *mut i8 = rax_13;
                                    let var_a8_1: *mut c_void = rcx_5;
                                    let var_a0_1: i64 = rax_14;
                                    let mut var_d0: i64 = 0;
                                    let var_c0_1: i64 = 0;
                                    r14_3 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h691c31dfb5941d63(&var_d0);
                                }
                                
                                var_188 = rbx_1;
                                var_180 = r13_3;
                                *var_180[8] = 0;
                                
                                loop
                                {
                                    let mut rax_17: i64;
                                    let mut rdx_6: *mut i8;
                                    rax_17 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h58e9c59f58a776f0(&var_188);
                                    
                                    if rdx_6 == 0
                                    {
                                        arg1[1] = 7;
                                        *arg1 = -0x8000000000000000;
                                        break;
                                    }
                                    
                                    if *rdx_6 == 4
                                    {
                                        let mut rax_16: i64;
                                        
                                        if rax_17 == 0
                                        {
                                            rax_16 = 0;
                                        }
                                        else
                                        {
                                            let var_78_1: *mut i8 = rbx_1;
                                            let var_70_1: *mut c_void = r13_3;
                                            let var_68_1: i64 = rax_17;
                                            let mut var_98: i64 = 0;
                                            let var_88_1: i64 = 0;
                                            rax_16 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h691c31dfb5941d63(&var_98);
                                        }
                                        
                                        if rax_16 == r14_3
                                        {
                                            goto 'label_470cb5;
                                        }
                                    }
                                }
                                
                                break;
                            }
                            
                            'label_470cb5:
                            rax_14 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h58e9c59f58a776f0(&var_150);
                            
                            if rdx_5 == 0
                            {
                                goto 'label_470dac;
                            }
                        }
                        
                        goto 'label_470e8c;
                    }
                    
                    'label_470dac:
                    var_188 = rax_13;
                    var_180 = rcx_5;
                    *var_180[8] = 0;
                    let var_168_2: i64 = 0;
                    let mut var_f8: i64;
                    core::iter::traits::iterator::Iterator::collect::hdf6c0e97b7534283(&var_f8, 
                        &var_188);
                    let var_f0: i64;
                    let var_e8: u64;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7552a5668a592e56(&var_150, var_f0, var_e8);
                    
                    if var_140_1 >= 2
                    {
                        let rax_27: *mut i8 = var_148;
                        let mut var_151: ();
                        
                        if var_140_1 >= 0x15
                        {
                            core::slice::sort::unstable::ipnsort::h256cb113d496b33e(rax_27, 
                                var_140_1, &var_151);
                        }
                        else
                        {
                            core::slice::sort::shared::smallsort::insertion_sort_shift_left::h2bc1249c7cc2cafa(rax_27, var_140_1, 1);
                        }
                    }
                    
                    alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::hb373246bfc5e7da5(&var_150);
                    var_188 = rbx_1;
                    var_180 = r13_3;
                    let rcx_8: i8 = arg8 & _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h5c4ddfbfb7bba7c1(&var_188);
                    let mut rdx_8: i32;
                    
                    if (rcx_8 & arg6) != 0
                    {
                        rdx_8 = 9;
                    }
                    
                    if (rcx_8 & arg6) != 0 && (var_140_1 > 1 || var_e8 > var_118)
                    {
                        'label_470e52:
                        arg1[1] = rdx_8;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd84321348a921e7b(var_150, var_148);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd84321348a921e7b(var_f8, var_f0);
                        'label_470e8c:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd84321348a921e7b(var_128, var_120);
                        rsi_18 = rax_13;
                        rdi_25 = var_138_1;
                    }
                    else
                    {
                        rdx_8 = var_e8 >= var_118;
                        rdx_8 |= arg7;
                        
                        if rdx_8 == 0 && (rcx_5 == 0x10 | var_140 == 0) == 0
                            && *rcx_5.byte_offset(-0x10) == 4
                        {
                            let rsi_16: u32 = *rcx_5.byte_offset(-0xf);
                            rdx_8 = 8;
                            
                            if rsi_16 == 0xa || rsi_16 == 6
                            {
                                goto 'label_470e52;
                            }
                        }
                        
                        let mut rcx_9: u64;
                        rcx_9 = var_e8 <= var_118;
                        
                        if (arg7 & rcx_9) != 0
                        {
                            var_118 = var_e8;
                        }
                        
                        *var_180[8] = var_118;
                        let zmm0_4: i128 = var_128;
                        var_188 = zmm0_4;
                        var_170 = var_f8;
                        arg1[4] = var_168_2;
                        arg1[5] = var_e8;
                        arg1[2] = *var_180[8];
                        arg1[3] = var_170;
                        *arg1 = zmm0_4;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd84321348a921e7b(var_150, var_148);
                        rdi_25 = var_138_1;
                        rsi_18 = rax_13;
                    }
                }
                else
                {
                    arg1[1] = 2;
                    'label_470aa5:
                    *arg1 = -0x8000000000000000;
                    rsi_18 = rdi_3;
                    rdi_25 = var_138_1;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::hc196a6e0e0492a55(rdi_25, rsi_18);
            }
        }
        else
        {
            arg1[1] = 3;
            *arg1 = -0x8000000000000000;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::hc196a6e0e0492a55(rax_1, rbx_1);
    }
    arg1
}
