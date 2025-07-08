
  fn uu_head::parse::process_num_block::h8e5bdc2257d4c6b6(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: i32, arg5: *mut i64, arg6: i64 @ r13) -> *mut i8

{
    let var_20: i64 = arg6;
    let mut r12: i32 = arg4;
    let mut var_70: i8;
    let mut result: *mut i8 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_70, arg2, arg3);
    
    if var_70 == 0
    {
        let var_68: i64;
        let mut var_80: i64 = var_68;
        let mut var_fc_1: i8 = 0;
        let mut r14_1: i8 = 0;
        let mut rbp_1: i64 = 0;
        let mut var_88_1: i8 = 0;
        let mut var_f8: i128;
        let mut var_e0: i64;
        let mut var_c8: i128;
        let var_b8: i64;
        
        loop
        {
            let rax_1: u64 = r12 - 0x62;
            
            if rax_1 > 0x18
            {
                if r12 == 0
                {
                    goto 'label_4be43b;
                }
                
                'label_4be7ac:
                result = arg1;
                *result.byte_offset(8) = 0;
                result[0x10] = 0;
                *result = 1;
                return result;
            }
            
            let mut rbx_1: i8;
            
            match rax_1
            {
                0 =>
                {
                    arg6 = 0x200;
                    rbp_1 = 1;
                    goto 'label_4be43b;
                }
                1 =>
                {
                    rbp_1 = 1;
                    arg6 = 1;
                    'label_4be43b:
                    let rdx: i32 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(arg5);
                    r12 = rdx;
                    
                    if rdx != 0x110000
                    {
                        continue;
                    }
                    
                    var_e0 = 0;
                    let var_d8_1: i64 = 8;
                    let var_d0_1: i64 = 0;
                    rbx_1 = var_fc_1;
                    
                    if var_88_1 == 0
                    {
                        goto 'label_4be53f;
                    }
                    
                    goto 'label_4be516;
                }
                2 | 3 | 4 | 5 | 6 | 7 | 8 | 0xa | 0xc | 0xd | 0xe | 0x10 | 0x11 | 0x12 | 0x13 | 0x15
                    | 0x16 | 0x17 =>
                {
                    goto 'label_4be7ac;
                }
                9 =>
                {
                    arg6 = 0x400;
                    rbp_1 = 1;
                    goto 'label_4be43b;
                }
                0xb =>
                {
                    arg6 = 0x100000;
                    rbp_1 = 1;
                    goto 'label_4be43b;
                }
                0xf =>
                {
                    let rdx_2: i32 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(arg5);
                    r12 = rdx_2;
                    var_fc_1 = 0;
                    
                    if rdx_2 != 0x110000
                    {
                        var_88_1 = 1;
                        continue;
                    }
                    
                    var_e0 = 0;
                    let var_d8_2: i64 = 8;
                    let var_d0_2: i64 = 0;
                    rbx_1 = 0;
                    'label_4be516:
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                        "-q-v-z-c-n/home/34r7hm4n/.cargo/…", 2);
                    let var_e8_1: i64 = var_b8;
                    var_f8 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
                    'label_4be53f:
                    
                    if (rbx_1 & 1) == 0
                    {
                        break;
                    }
                    
                    goto 'label_4be555;
                }
                0x14 =>
                {
                    let rdx_1: i32 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(arg5);
                    r12 = rdx_1;
                    var_fc_1 = 1;
                    
                    if rdx_1 != 0x110000
                    {
                        var_88_1 = 0;
                        continue;
                    }
                    
                    var_e0 = 0;
                    let var_d8_3: i64 = 8;
                    let var_d0_3: i64 = 0;
                    'label_4be555:
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                        "-v-z-c-n/home/34r7hm4n/.cargo/re…", 2);
                    let var_e8_2: i64 = var_b8;
                    var_f8 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
                    break;
                }
                0x18 =>
                {
                    r14_1 = 1;
                    goto 'label_4be43b;
                }
            }
        }
        
        if (r14_1 & 1) != 0
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                "-z-c-n/home/34r7hm4n/.cargo/regi…", 2);
            let var_e8_3: i64 = var_b8;
            var_f8 = var_c8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
        }
        
        if rbp_1 != 1
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                "-n/home/34r7hm4n/.cargo/registry…", 2);
            let var_e8_5: i64 = var_b8;
            var_f8 = var_c8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
            var_f8 = &var_80;
            *var_f8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_c8 = &data_415290;
            *var_c8[8] = 1;
            let var_a8_1: i64 = 0;
            let var_b8_1: *mut i128 = &var_f8;
            let var_b0_1: i64 = 1;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::hb3355800140cccf2(&var_48, &var_c8);
            var_c8 = var_48;
            let var_38: i64;
            let var_b8_2: i64 = var_38;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_c8);
        }
        else
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                "-c-n/home/34r7hm4n/.cargo/regist…", 2);
            let var_e8_4: i64 = var_b8;
            var_f8 = var_c8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
            
            if (var_68 * arg6) >> 0x40 != {0}
            {
                arg1[1] = 0;
                arg1[2] = 1;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdf52de0dff688e82(&var_e0);
            }
            
            let mut var_78: i64 = var_68 * arg6;
            var_f8 = &var_78;
            *var_f8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_c8 = &data_415290;
            *var_c8[8] = 1;
            let var_a8_2: i64 = 0;
            let var_b8_3: *mut i128 = &var_f8;
            let var_b0_2: i64 = 1;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::hb3355800140cccf2(&var_60, &var_c8);
            var_c8 = var_60;
            let var_50: i64;
            let var_b8_4: i64 = var_50;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_c8);
        }
        
        result = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf3a7c2118f75f767(&arg1[1], &var_e0);
    }
    else
    {
        arg1[1] = 0;
        arg1[2] = 1;
    }
    
    *arg1 = 1;
    result
}
