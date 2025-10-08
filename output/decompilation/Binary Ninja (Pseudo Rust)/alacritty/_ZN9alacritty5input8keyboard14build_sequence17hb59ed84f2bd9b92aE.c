
  fn alacritty::input::keyboard::build_sequence::hb59ed84f2bd9b92a(arg1: *mut i64, arg2: *mut i16, arg3: i32, arg4: i32) -> i64

{
    let mut rax: i8;
    let mut rsi: i64;
    rax = _$LT$alacritty..input..keyboard..SequenceModifiers$u20$as$u20$core..convert..From$LT$winit..keyboard..ModifiersState$GT$$GT$::from::he292cff72cbb6297(arg3);
    let mut var_141: i8 = rax;
    let mut r13: u64;
    
    if (arg4 & 0x80000) != 0
    {
        r13 = 1;
        
        if *arg2.byte_offset(0x79) == 0
        {
            r13 = arg2[0x3c];
        }
    }
    else
    {
        r13 = 0;
    }
    
    let temp0: i32 = arg4 & 0x2c0000;
    let cond:0: bool = temp0 != 0;
    let mut rbx: u64;
    rbx = temp0 != 0;
    let mut var_140: i32 = arg4;
    let var_13a: u8 = arg4 >> 0x15 & 1;
    let var_139: i8 = r13;
    let var_13c: i8 = rax;
    let mut rdi_1: *mut i8;
    
    if arg2[0x20] != 0x1a
    {
        let mut rax_1: *mut i8;
        let mut rdx: i64;
        rax_1 = smol_str::Repr::as_str::ha71f0b13e811ba13(&arg2[0x20]);
        rdi_1 = rax_1;
        rsi = rdx;
        rbx = cond:0;
    }
    else
    {
        rdi_1 = nullptr;
    }
    
    let mut rax_2: *mut i8;
    let mut rdx_2: *mut c_void;
    rax_2 = core::option::Option$LT$T$GT$::filter::h7841377b2933d1f6(rdi_1, rsi, arg4, 
        *arg2.byte_offset(0x78));
    let mut var_68: *mut i8 = rax_2;
    let mut var_138: *mut i32;
    alacritty::input::keyboard::SequenceBuilder::try_build_numpad::hceb5670c509cfdd8(&var_138, rbx, 
        arg2);
    let mut var_90: i128;
    core::option::Option$LT$T$GT$::or_else::ha114689a17d5f54e(&var_90, &var_138, cond:0, *arg2, 
        arg2[1]);
    let mut var_b0: *mut i32 = &var_140;
    let var_a8: *mut i16 = arg2;
    let var_a0: *mut *mut i8 = &var_68;
    core::option::Option$LT$T$GT$::or_else::h218f8de80763ada6(&var_138, &var_90, &var_b0);
    var_b0 = &var_140;
    let var_a8_1: *mut i16 = arg2;
    let var_a0_1: *mut i8 = &var_141;
    let mut r12_1: *mut i16 = arg2;
    core::option::Option$LT$T$GT$::or_else::hd24e5a11f86d1056(&var_90, &var_138, &var_b0);
    var_138 = &var_140;
    let var_130: *mut i16 = r12_1;
    let var_128: *mut *mut i8 = &var_68;
    let rdx_8: u64 =
        core::option::Option$LT$T$GT$::or_else::hf85bdbc6a8b4ad87(&var_b0, &var_90, &var_138);
    
    if var_b0 != -0x7fffffffffffffff
    {
        let var_38_1: *mut i8 = var_a0_1;
        let mut var_48: i128 = var_b0;
        let var_98: i32;
        let mut rbx_1: u64 = var_98;
        let mut var_f8: *mut i128 = &var_48;
        let var_f0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfd5d0c223f1891d;
        var_138 = &data_c82c60;
        let var_130_1: i64 = 1;
        let var_118_1: i64 = 0;
        let var_128_1: *mut *mut i128 = &var_f8;
        let var_120_1: i64 = 1;
        let rdx_9: u64 = core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, 
            rdx_8, &var_138);
        var_f8 = var_90;
        let rax_7: i8 = var_141;
        let mut var_e0: *mut i8;
        let mut var_c8: i8;
        let var_80: i64;
        
        if r13 != 0 || rax_7 != 0 || var_68 != 0
        {
            var_c8 = rax_7 + 1;
            var_e0 = &var_c8;
            let var_d8_1: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
            var_138 = &data_c82c70;
            let var_130_2: i64 = 1;
            let var_118_2: i64 = 0;
            let var_128_2: *mut *mut i8 = &var_e0;
            let var_120_2: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, rdx_9, 
                &var_138);
            var_138 = var_90;
            let var_128_3: i64 = var_80;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_f8, var_130_2, var_80 + var_130_2);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_138);
            
            if r13 != 0
            {
                'label_85733e:
                alloc::string::String::push::h0ede46164189e411(&var_f8, 0x3a);
                let mut rsi_7: i32 = 0x32;
                
                if *r12_1.byte_offset(0x79) == 0
                {
                    rsi_7 = r12_1[0x3c] * 2 + 0x31;
                }
                
                alloc::string::String::push::h0ede46164189e411(&var_f8, rsi_7);
            }
        }
        else if r13 != 0
        {
            goto 'label_85733e;
        }
        
        let rax_10: *mut i8 = var_68;
        
        if rax_10 != 0
        {
            let mut var_58: *mut i8 = rax_10;
            let var_50_1: *mut c_void = rdx_2.byte_offset(rax_10);
            let mut rax_11: i8;
            let mut rdx_12: u64;
            rax_11 = core::str::validations::next_code_point::h6519aaf344192553(&var_58, rbx_1);
            
            if (rax_11 & rdx_12 != 0x110000) != 0
            {
                var_c8 = rdx_12;
                var_e0 = &var_c8;
                let var_d8_2: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                var_138 = &data_c82c70;
                let var_130_3: i64 = 1;
                let var_118_3: i64 = 0;
                let var_128_4: *mut *mut i8 = &var_e0;
                let var_120_3: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, rdx_12, 
                    &var_138);
                var_138 = var_90;
                let var_128_5: i64 = var_80;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_f8, var_130_3, var_80 + var_130_3);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_138);
            }
            
            let var_d0_1: i32 = rbx_1;
            var_c8 = var_58;
            let mut rax_12: i8;
            let mut rdx_15: u64;
            rax_12 = core::str::validations::next_code_point::h6519aaf344192553(&var_c8, rbx_1);
            
            if (rdx_15 != 0x110000 & rax_12) == 1
            {
                do
                {
                    let mut var_cc: i32 = rdx_15;
                    var_e0 = &var_cc;
                    let var_d8_3: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                    var_138 = &data_c82c80;
                    let var_130_4: i64 = 1;
                    let var_118_4: i64 = 0;
                    let var_128_6: *mut *mut i8 = &var_e0;
                    let var_120_4: i64 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, 
                        rdx_15, &var_138);
                    var_138 = var_90;
                    let var_128_7: i64 = var_80;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_f8, var_130_4, var_80 + var_130_4);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                        &var_138);
                    let mut rax_13: i8;
                    rax_13 = core::str::validations::next_code_point::h6519aaf344192553(&var_c8, 
                        &var_e0);
                    
                    if (rax_13 & 1) == 0
                    {
                        break;
                    }
                } while rdx_15 != 0x110000;
            }
            
            r12_1 = arg2;
            rbx_1 = var_d0_1;
        }
        
        let mut rsi_10: i32 = 0x75;
        
        if rbx_1 != 0x110000
        {
            rsi_10 = rbx_1;
        }
        
        alloc::string::String::push::h0ede46164189e411(&var_f8, rsi_10);
        arg1[2] = var_80;
        *arg1 = var_f8;
        core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_48);
    }
    else
    {
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..input..keyboard..SequenceBase$GT$$GT$::h0e106573572e9a53(&var_b0);
    }
    
    core::ptr::drop_in_place$LT$winit..event..KeyEvent$GT$::hd16fceb331fb972b(r12_1)
}
