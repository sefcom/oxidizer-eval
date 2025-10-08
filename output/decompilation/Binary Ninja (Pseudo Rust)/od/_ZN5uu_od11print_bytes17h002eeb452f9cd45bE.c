
  fn uu_od::print_bytes::h002eeb452f9cd45b(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void) -> *mut c_void

{
    let mut var_90: *mut i8 = arg1;
    let mut result: *mut c_void = *arg4.byte_offset(0x10);
    
    if result != 0
    {
        let mut result_2: *mut i64 = *arg4.byte_offset(8);
        let rax_1: *mut c_void = (result * 0x68).byte_offset(result_2);
        result = &result_2[0xd];
        let rsi: *mut c_void = *arg3;
        let rsi_1: i64 = arg3[1];
        let rsi_2: i64 = *arg4.byte_offset(0x20);
        let rbp_1: i64 = *arg4.byte_offset(0x28);
        let var_111_1: i8 = arg3[3];
        let mut var_dc_1: i8 = 1;
        let mut result_1: *mut c_void;
        
        do
        {
            let mut var_80: i64 = 0;
            let var_78_1: *mut i8 = 1;
            let var_70_1: *mut c_void = nullptr;
            let mut var_110: *mut c_void;
            let mut var_108: i64;
            let mut var_100: *const *mut c_void;
            let mut var_d8: *mut c_void;
            let mut var_c0: i16;
            let mut var_68: *mut c_void;
            let mut zmm0: [i32; 0x4];
            
            if rsi_1 != 0
            {
                if rbp_1 == 0
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                    /* no return */
                }
                
                let mut rbx_1: u64 = 0;
                
                do
                {
                    let mut rdx_2: u64;
                    
                    if (rbx_1 | rbp_1) >> 0x20 == 0
                    {
                        rdx_2 = COMBINE(0, rbx_1) % rbp_1;
                        
                        if rdx_2 >= 8
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_2, 8);
                            /* no return */
                        }
                    }
                    else
                    {
                        rdx_2 = COMBINE(0, rbx_1) % rbp_1;
                        
                        if rdx_2 >= 8
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_2, 8);
                            /* no return */
                        }
                    }
                    
                    let rax_9: i64 = result_2[rdx_2 + 4];
                    
                    if rax_9 > 0xffff
                    {
                        goto 'label_46dc05;
                    }
                    
                    var_68 = &data_41a940;
                    let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    let var_58_1: i64 = 0;
                    let var_50_1: i16 = rax_9;
                    var_d8 = &data_41a940;
                    let var_d0_1: i64 = 1;
                    let var_b8_1: *mut c_void = &data_41d2a8;
                    let var_b0_1: i64 = 1;
                    let var_c8_1: *const *mut c_void = &var_68;
                    var_c0 = 2;
                    core::result::Result$LT$T$C$E$GT$::unwrap::h8164cbac40e1d6d3(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hb6f56adf937e549c(&var_80, &var_d8));
                    let rax_11: i64 = *result_2;
                    let r15_1: i64 = result_2[1];
                    
                    if rax_11 == 0
                    {
                        r15_1(&var_110, 
                            uu_od::inputdecoder::MemoryDecoder::read_uint::h820c719160ea830f(rsi, 
                                var_111_1, rbx_1, result_2[2], rbx_1));
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_80, var_108, var_100.byte_offset(var_108));
                    }
                    else if rax_11 != 1
                    {
                        r15_1(&var_110, 
                            uu_od::inputdecoder::MemoryDecoder::get_full_buffer::h08ddd83f2f5580c1(
                                arg3, rbx_1));
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_80, var_108, var_100.byte_offset(var_108));
                    }
                    else
                    {
                        uu_od::inputdecoder::MemoryDecoder::read_float::h83569d197b443106(rsi, 
                            var_111_1, rbx_1, result_2[2]);
                        r15_1(&var_110);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_80, var_108, var_100.byte_offset(var_108));
                    }
                    
                    zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                        &var_110);
                    rbx_1 += result_2[2];
                } while rbx_1 < rsi_1;
            }
            
            let mut var_f8: fn(arg1: *mut c_void, arg2: i64) -> i64;
            let mut var_e8: i64;
            
            if result_2[0xc] != 0
            {
                let rax_14: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_78_1, var_70_1.byte_offset(var_78_1), zmm0);
                let mut rbx_3: i64 = rsi_2 - rax_14;
                
                if rsi_2 < rax_14
                {
                    rbx_3 = 0;
                }
                
                let mut rax_15: *mut c_void;
                let mut rdx_11: i64;
                rax_15 = uu_od::inputdecoder::MemoryDecoder::get_buffer::h6ffffd86399f7d36(arg3, 0);
                uu_od::prn_char::format_ascii_dump::h58e8947baefac050(&var_68, rax_15, rdx_11);
                
                if rbx_3 > 0xffff
                {
                    var_110 = &data_5038d8;
                    let var_108_5: i64 = 1;
                    let var_100_5: i64 = 8;
                    var_f8 = {0};
                    core::panicking::panic_fmt::h96f341d36638c225(&var_110);
                    /* no return */
                }
                
                var_110 = &data_41a940;
                let var_108_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                let var_100_1: *const *mut c_void = &var_68;
                var_f8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_f0_1: i64 = 0;
                var_e8 = rbx_3;
                var_d8 = &data_503a20;
                let var_d0_2: i64 = 2;
                let var_b8_2: *mut c_void = &data_41df20;
                let var_b0_2: i64 = 2;
                let var_c8_2: *const *mut c_void = &var_110;
                var_c0 = 3;
                core::result::Result$LT$T$C$E$GT$::unwrap::h8164cbac40e1d6d3(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hb6f56adf937e549c(&var_80, &var_d8));
                zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                    &var_68);
            }
            
            if (var_dc_1 & 1) == 0
            {
                let rdi_19: *mut i8 = var_90;
                let rax_17: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rdi_19, arg2.byte_offset(rdi_19), zmm0);
                
                if rax_17 > 0xffff
                {
                    'label_46dc05:
                    var_110 = &data_5038d8;
                    let var_108_4: i64 = 1;
                    let var_100_4: i64 = 8;
                    var_f8 = {0};
                    core::panicking::panic_fmt::h96f341d36638c225(&var_110);
                    /* no return */
                }
                
                var_d8 = &data_41a940;
                let var_d0_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                let var_c8_3: i64 = 0;
                var_c0 = rax_17;
                var_110 = &data_41a940;
                let var_108_3: i64 = 1;
                let var_f0_3: *mut c_void = &data_41d2a8;
                var_e8 = 1;
                let var_100_3: *const *mut c_void = &var_d8;
                let var_f8_2: i64 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_110);
            }
            else
            {
                var_d8 = &var_90;
                let var_d0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                var_110 = &data_41a940;
                let var_108_2: i64 = 1;
                let var_f0_2: i64 = 0;
                let var_100_2: *const *mut c_void = &var_d8;
                let var_f8_1: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_110);
            }
            
            var_d8 = &var_80;
            let var_d0_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_110 = &data_502418;
            var_108 = 2;
            let var_f0_4: i64 = 0;
            var_100 = &var_d8;
            var_f8 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_110);
            zmm0 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_80);
            result_1 = result;
            result = result_1.byte_offset(0x68);
            var_dc_1 = 0;
            result_2 = result_1;
            
            if result_1 == rax_1
            {
                result = result_1;
            }
        } while result_1 != rax_1;
    }
    
    result
}
