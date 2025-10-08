
  fn uu_du::StatPrinter::print_stats::h571f331b863e373a(arg1: *mut i8, arg2: *mut i64) -> u64

{
    let mut r15: i64 = *arg2;
    let r12: *mut i64 = arg2[1];
    let mut var_d8: [i8; 0x10];
    std::sync::mpmc::Receiver$LT$T$GT$::recv::hea4d1650cfd7aab4(&var_d8, r15, r12);
    let mut zmm0: [i8; 0x10] = __pcmpeqb_xmmdq_memdq(var_d8, *data_41d8e0);
    let mut var_1a8: *mut i128;
    let mut var_188: *mut c_void;
    let mut var_168: [i8; 0x10];
    let mut r13: u64;
    
    if _mm_movemask_epi8(zmm0) != 0xffff
    {
        let mut rax_2: *mut c_void = var_d8[0];
        let mut rcx_1: i64 = var_d8[8];
        let rdx_3: i8 = arg1[0x49];
        let rdx_4: i8 = arg1[0x4a];
        let rdx_5: i64 = *arg1.byte_offset(0x10);
        let rdx_6: i64 = *arg1.byte_offset(0x18);
        let rdx_7: i8 = *arg1;
        let rdx_8: i64 = *arg1.byte_offset(8);
        let rdx_9: i8 = arg1[0x4b];
        r13 = 0;
        let var_1b0_1: i64 = r15;
        let mut i: u32;
        
        do
        {
            let var_c8: i64;
            let var_c0: *mut i64;
            
            if ((rax_2 ^ 2) | rcx_1) != 0
            {
                var_188 = rax_2;
                let var_180_4: i64 = rcx_1;
                let var_178_4: i64 = var_c8;
                let var_170_4: *mut i64 = var_c0;
                let var_48: [i8; 0x10];
                let var_f8_1: i64 = var_48[0];
                let var_58: [i8; 0x10];
                let var_108_1: [i8; 0x10] = var_58;
                let var_68: [i8; 0x10];
                let var_118_1: [i8; 0x10] = var_68;
                let var_98: i128;
                let var_148_1: i128 = var_98;
                let var_a8: i128;
                let var_158_1: i128 = var_a8;
                let var_b8: [i8; 0x10];
                var_168 = var_b8;
                let mut rcx_2: i64;
                let mut rdx_14: u64;
                let var_78: [i8; 0x10];
                
                if (rdx_3 & 1) == 0
                {
                    rcx_2 = rdx_5;
                    let var_88: i128;
                    
                    if (rdx_4 & 1) == 0
                    {
                        rdx_14 = var_78[0] << 9;
                    }
                    else
                    {
                        rdx_14 = *var_88[8];
                    }
                }
                else
                {
                    rdx_14 = var_78[8];
                    rcx_2 = rdx_5;
                }
                let mut r15_1: u64 = 0;
                
                if var_f8_1 == 0
                {
                    r15_1 = rdx_14;
                }
                
                if rcx_2 != 2
                {
                    let c_1: bool = rdx_14 < rdx_6;
                    let mut rsi_7: bool = c_1;
                    
                    if (rcx_2 & 1) != 0
                    {
                        rsi_7 = rdx_14 != rdx_6 && !c_1;
                    }
                    
                    if ((var_f8_1 > rdx_8 & rdx_7) | rsi_7) == 0
                    {
                        goto 'label_497eaf;
                    }
                }
                else
                {
                    rcx_2 = var_f8_1 > rdx_8;
                    
                    if (rdx_7 & rcx_2) == 0
                    {
                        'label_497eaf:
                        
                        if var_f8_1 == 0 || (rdx_9 & 1) == 0
                        {
                            let result: u64 = uu_du::StatPrinter::print_stat::h55862af7f00f1efd(
                                arg1, &var_188, rdx_14);
                            
                            if result != 0
                            {
                                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h9291cc610d8c7999(&var_188);
                                return result;
                            }
                        }
                    }
                }
                
                r13 += r15_1;
                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h9291cc610d8c7999(&var_188);
                r15 = var_1b0_1;
            }
            else
            {
                let mut var_1e0: i64 = var_c8;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_c0[0xb](zmm0));
                let mut rax_4: i64;
                let mut rdx_13: i64;
                rax_4 = uucore::util_name::h074417a1e6395129();
                let mut var_e8: i64 = rax_4;
                let var_e0_1: i64 = rdx_13;
                var_1a8 = &var_e8;
                let var_1a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                let var_198_1: *mut i64 = &var_1e0;
                let var_190_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h818a065c9c5f1901;
                var_188 = &data_545df8;
                let var_180_3: i64 = 3;
                var_168[0] = 0;
                let var_178_3: *mut *mut i128 = &var_1a8;
                let var_170_3: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_188);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h865b7c7ff5ce5fe7(var_1e0, var_c0);
            }
            std::sync::mpmc::Receiver$LT$T$GT$::recv::hea4d1650cfd7aab4(&var_d8, r15, r12);
            rax_2 = var_d8[0];
            rcx_1 = var_d8[8];
            zmm0 = __pcmpeqb_xmmdq_memdq(var_d8, *data_41d8e0);
            i = _mm_movemask_epi8(zmm0);
        } while i != 0xffff;
    }
    else
    {
        r13 = 0;
    }
    
    if arg1[0x48] != 0
    {
        uu_du::StatPrinter::convert_size::hd9a65cfff278d727(&var_d8, arg1, r13);
        var_1a8 = &var_d8;
        let var_1a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_188 = &data_545e28;
        let var_180_1: i64 = 2;
        var_168[0] = 0;
        let var_178_1: *mut *mut i128 = &var_1a8;
        let var_170_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_188);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_d8);
        var_d8[0] = &arg1[0x4d];
        var_d8[8] = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_188 = &data_41d7a0;
        let var_180_2: i64 = 1;
        var_168[0] = 0;
        let var_178_2: *mut i128 = &var_d8;
        let var_170_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_188);
    }
    
    0
}
