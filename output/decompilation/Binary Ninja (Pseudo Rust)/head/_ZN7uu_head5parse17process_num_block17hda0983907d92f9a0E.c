
  fn uu_head::parse::process_num_block::hda0983907d92f9a0(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: i32, arg5: *mut i64) -> u64

{
    let mut r12: i32 = arg4;
    let mut var_b8: i8;
    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_b8, arg2, arg3);
    let mut result: u64;
    
    if var_b8 != 1
    {
        let result_2: u64;
        result = result_2;
        'label_465568:
        let result_3: u64 = result;
        let mut result_4: u64 = result;
        let mut rbp_1: i8 = 0;
        let mut var_ec_1: i8 = 0;
        let mut rbx_1: i8 = 0;
        let mut r13_1: i8 = 0;
        
        loop
        {
            result = r12 - 0x62;
            
            if result > 0x18
            {
                if r12 == 0
                {
                    goto 'label_46562c;
                }
                
                *arg1 = -0x8000000000000000;
                break;
            }
            
            result = jump_table_41a68c[result] + &jump_table_41a68c;
            let mut var_e8: i128;
            let mut var_d0: i64;
            let mut result_1: u64;
            let var_a8: i64;
            let mut var_88: i64;
            let mut result_5: u64;
            
            match result
            {
                0x465590 =>
                {
                    let rdx: i32 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg5);
                    r12 = rdx;
                    rbx_1 = 1;
                    r13_1 = 0;
                    
                    if rdx == 0x110000
                    {
                        var_d0 = 0;
                        let var_c8_2: i64 = 8;
                        result_1 = 0;
                        result_5 = result_3;
                    }
                    else
                    {
                        continue;
                    }
                    
                    goto 'label_465728;
                }
                0x4655bf =>
                {
                    let rdx_1: i32 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg5);
                    r12 = rdx_1;
                    r13_1 = 1;
                    rbx_1 = 0;
                    
                    if rdx_1 != 0x110000
                    {
                        continue;
                    }
                    else
                    {
                        var_d0 = 0;
                        let var_c8_3: i64 = 8;
                        result_1 = 0;
                        rbx_1 = 0;
                    }
                    
                    goto 'label_4656cd;
                }
                0x4655e7 =>
                {
                    rbp_1 = 1;
                    var_88 = 0x400;
                    'label_46562c:
                    let rdx_2: i32 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg5);
                    r12 = rdx_2;
                    
                    if rdx_2 != 0x110000
                    {
                        continue;
                    }
                    else
                    {
                        var_d0 = 0;
                        let var_c8_1: i64 = 8;
                        result_1 = 0;
                        
                        if (r13_1 & 1) != 0
                        {
                            'label_4656cd:
                            result_5 = result_3;
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-q-v-z-c-nsrc/uu/head/src/take.r…", 2);
                            let var_d8_1: i64 = var_a8;
                            var_e8 = var_b8;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
                            
                            if (rbx_1 & 1) != 0
                            {
                                goto 'label_465728;
                            }
                        }
                        else
                        {
                            result_5 = result_3;
                            
                            if (rbx_1 & 1) != 0
                            {
                                'label_465728:
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-v-z-c-nsrc/uu/head/src/take.rsa…", 2);
                                let var_d8_2: i64 = var_a8;
                                var_e8 = var_b8;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, 
                                    &var_e8);
                            }
                        }
                    }
                }
                0x4655f6 =>
                {
                    rbp_1 = 1;
                    var_88 = 0x200;
                    goto 'label_46562c;
                }
                0x465605 =>
                {
                    rbp_1 = 1;
                    var_88 = 0x100000;
                    goto 'label_46562c;
                }
                0x465614 =>
                {
                    rbp_1 = 1;
                    var_88 = 1;
                    goto 'label_46562c;
                }
                0x465623 =>
                {
                    result = 1;
                    var_ec_1 = result;
                    goto 'label_46562c;
                }
                0x465674 =>
                {
                    *arg1 = -0x8000000000000000;
                    break;
                    break;
                }
            }
            
            if (var_ec_1 & 1) != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-z-c-nsrc/uu/head/src/take.rsass…", 2);
                let var_d8_3: i64 = var_a8;
                var_e8 = var_b8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
            }
            
            if (rbp_1 & 1) == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-nsrc/uu/head/src/take.rsasserti…", 2);
                let var_d8_5: i64 = var_a8;
                var_e8 = var_b8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
                var_e8 = &result_4;
                *var_e8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_b8 = &data_418a90;
                let var_b0_1: i64 = 1;
                let var_98_2: i64 = 0;
                let var_a8_2: *mut i128 = &var_e8;
                let var_a0_2: i64 = 1;
                let mut var_48: ();
                core::option::Option$LT$T$GT$::map_or_else::h4698243df58dc779(&var_48, &var_b8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_48);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-c-nsrc/uu/head/src/take.rsasser…", 2);
                let var_d8_4: i64 = var_a8;
                var_e8 = var_b8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
                let mut rax_6: i64 = result_5 * var_88;
                
                if (result_5 * var_88) >> 0x40 != {0}
                {
                    rax_6 = -1;
                }
                
                let mut var_68: i64 = rax_6;
                var_e8 = &var_68;
                *var_e8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_b8 = &data_418a90;
                let var_b0: i64 = 1;
                let var_98_1: i64 = 0;
                let var_a8_1: *mut i128 = &var_e8;
                let var_a0_1: i64 = 1;
                let mut var_60: ();
                core::option::Option$LT$T$GT$::map_or_else::h4698243df58dc779(&var_60, &var_b8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_60);
            }
            
            result = result_1;
            arg1[2] = result;
            *arg1 = var_d0;
            break;
        }
    }
    else
    {
        result = -1;
        let var_b7: i8;
        
        if var_b7 == 2
        {
            goto 'label_465568;
        }
        
        *arg1 = -0x8000000000000000;
    }
    
    result
}
