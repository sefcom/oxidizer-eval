
  fn alacritty::message_bar::Message::text::hdf58328cea9791eb(arg1: *mut [i32; 0x4], arg2: i64, arg3: u64, arg4: *mut c_void) -> i64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let zmm0: [i32; 0x4] = *arg4.byte_offset(0x14);
    let zmm1: f32 = *arg4.byte_offset(0x24);
    zmm0[0] = zmm0[0] - (zmm1 + zmm1);
    zmm0[0] = zmm0[0] / *arg4.byte_offset(0x1c);
    let rax: i64 = zmm0[0];
    let mut rsi_2: i64 = ((zmm0[0] - 9.22337204e+18f) & rax >> 0x3f) | rax;
    
    if zmm0[0] < 0f
    {
        rsi_2 = 0;
    }
    
    let mut rdx_2: i64 = -1;
    
    if zmm0[0] <= 1.8446743e+19f
    {
        rdx_2 = rsi_2;
    }
    
    let r14: i64 = *arg4.byte_offset(8);
    let mut result_1: i64 = rdx_2 - 3;
    
    if rdx_2 < 3
    {
        result_1 = 0;
    }
    
    let rax_1: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec("[X]ALACRITTY_SOCKET=; export ALA…", "ALACRITTY_SOCKET=; export ALACRI…", 
        zmm0);
    let mut var_100: i64 = 0;
    let var_f8: *mut i64 = 8;
    let mut result: i64 = 0;
    let mut var_c8: i64 = 0;
    let var_c0: *mut i8 = 1;
    let mut var_b8: *mut c_void = nullptr;
    let mut rax_2: i64;
    let mut rdx_3: i64;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he66bed476250953d(arg2, arg3);
    let mut var_58: i64 = rax_2;
    let var_50: i64 = rdx_3 + rax_2;
    let mut rax_3: i8;
    let mut i_2: i32;
    rax_3 = core::str::validations::next_code_point::h6519aaf344192553(&var_58, arg3);
    let mut var_e8: [i32; 0x4];
    let mut var_88: [i32; 0x4];
    
    if (i_2 != 0x110000 & rax_3) == 1
    {
        let mut i_1: i32 = i_2;
        let mut r15_1: i64 = 0;
        let mut rcx_2: i64 = r14 - (rax_1 + 1);
        
        if r14 < rax_1 + 1
        {
            rcx_2 = 0;
        }
        
        let mut i: i32;
        
        do
        {
            if i_1 == 0xa || r15_1 == r14 || (r14 >= rax_1 && result == 0 && r15_1 == rcx_2)
            {
                rbp = 1;
                
                if i_1 - 9 >= 5 && i_1 != 0x20
                {
                    if i_1 < 0x80
                    {
                        rbp = 0;
                    }
                    else
                    {
                        rbp = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                            i_1);
                    }
                }
                
                let mut var_a8: i64 = 0;
                let var_a0_1: i64 = 1;
                let mut var_98_1: *mut c_void = nullptr;
                let mut rax_7: i8;
                let mut rdx_5: i64;
                rax_7 = core::str::_$LT$impl$u20$str$GT$::rfind::h936671229704d993(var_c0, var_b8);
                let mut rax_8: i8;
                let mut rdx_7: i64;
                rax_8 = core::option::Option$LT$T$GT$::filter::h331fd28735869f3b(rax_7, rdx_5, rbp);
                
                if (rax_8 & 1) != 0
                {
                    let mut var_48: [i32; 0x4];
                    alloc::string::String::split_off::hb414f7fc7cd130c9(&var_48, &var_c8, 
                        rdx_7 + 1);
                    alloc::string::String::pop::h86cb5b5bb86d0e70(&var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                        &var_a8);
                    let var_38: *mut c_void;
                    var_98_1 = var_38;
                    var_a8 = var_48;
                }
                
                let var_d8_1: *mut c_void = var_b8;
                let zmm0_2: [i32; 0x4] = var_c8;
                var_e8 = zmm0_2;
                alacritty::message_bar::Message::pad_text::ha652db38986a3243(&var_88, &var_e8, r14, 
                    zmm0_2);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h38b165b64b8cca91(&var_100, &var_88);
                let zmm0_3: [i32; 0x4] = var_a8;
                var_c8 = zmm0_3;
                var_b8 = var_98_1;
                r15_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_c0, var_98_1.byte_offset(var_c0), zmm0_3);
                
                if rbp == 0
                {
                    goto 'label_85e3ba;
                }
            }
            else
            {
                'label_85e3ba:
                alloc::string::String::push::h0ede46164189e411(&var_c8, i_1);
                
                if i_1 < 0x7f
                {
                    rbp = i_1 >= 0x20;
                }
                else if i_1 < 0xa0
                {
                    rbp = 0;
                }
                else
                {
                    let rax_12: u8 = unicode_width::tables::lookup_width::hf99baf8c7b02f1d5(i_1);
                    
                    if rax_12 != 2
                    {
                        rbp = rax_12;
                    }
                    else
                    {
                        rbp = 2;
                        alloc::string::String::push::h0ede46164189e411(&var_c8, 0x20);
                    }
                }
                
                r15_1 += rbp;
            }
            
            let mut rax_14: i8;
            rax_14 = core::str::validations::next_code_point::h6519aaf344192553(&var_58, &var_88);
            
            if (rax_14 & 1) == 0
            {
                break;
            }
            
            i_1 = i;
        } while i != 0x110000;
    }
    
    let zmm0_1: [i32; 0x4] = var_c8;
    var_e8 = zmm0_1;
    alacritty::message_bar::Message::pad_text::ha652db38986a3243(&var_88, &var_e8, r14, zmm0_1);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h38b165b64b8cca91(&var_100, &var_88);
    let rsi_15: i64 = result - result_1;
    
    if result > result_1
    {
        result = result_1;
        core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u5d$$GT$::h4c02c27e478db80b(
            &var_f8[result_1 * 3], rsi_15);
        
        if r14 >= 0x13
        {
            var_e8[0] = var_f8;
            var_e8[2] = &var_f8[result * 3];
            let rax_18: *mut [i32; 0x4] = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h2076e72540d77e9f(&var_e8);
            
            if rax_18 != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_e8, "[MESSAGE TRUNCATED]YAML parsing …", 0x13);
                let var_78_1: *mut c_void = var_b8;
                let zmm0_5: [i32; 0x4] = var_e8;
                var_88 = zmm0_5;
                alacritty::message_bar::Message::pad_text::ha652db38986a3243(&var_e8, &var_88, r14, 
                    zmm0_5);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(rax_18);
                rax_18[1][0] = var_b8;
                *rax_18 = var_e8;
            }
        }
    }
    
    if r14 >= rax_1 && result != 0
    {
        alloc::string::String::truncate::h4c9243e558c5f483(var_f8, r14 - rax_1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(var_f8, "[X]ALACRITTY_SOCKET=; export ALA…", "ALACRITTY_SOCKET=; export ALACRI…");
    }
    
    arg1[1][0] = result;
    *arg1 = var_100;
    result
}
