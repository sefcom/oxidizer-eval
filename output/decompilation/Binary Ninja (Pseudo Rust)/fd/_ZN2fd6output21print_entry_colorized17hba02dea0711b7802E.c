
  fn fd::output::print_entry_colorized::hba02dea0711b7802(arg1: i64, arg2: *mut i32, arg3: *mut c_void, arg4: *mut c_void, arg5: u64 @ r12) -> i64

{
    let var_28: u64 = arg5;
    let mut r15: *mut i32 = arg2;
    let mut rax: u64;
    let mut rdx: i64;
    rax = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(r15, *arg3.byte_offset(0x1e7));
    let mut rbx: u64 = rax;
    let mut var_c8: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_c8, rax, rdx);
    let mut rax_1: *mut i8;
    let mut rdx_1: i64;
    rax_1 = std::path::Path::parent::hef287f60afa56900(rbx, rdx);
    let mut rbp_1: *mut i8;
    let mut r13_1: u64;
    let mut r14_1: u64;
    let mut var_148: *mut c_void;
    let mut var_140: *mut c_void;
    let mut var_f8: *mut *mut c_void;
    let var_c0: *mut i8;
    let var_b8: u64;
    let mut var_a8: *const i8;
    let mut result: i64;
    
    if rax_1 == 0
    {
        'label_5f6e8e:
        r13_1 = 0;
        'label_5f6e99:
        let rax_8: *mut c_void = fd::dir_entry::DirEntry::style::hc7d1f63435441946(r15, arg4);
        let var_b0_1: *mut i32 = r15;
        let mut var_78_1: u128;
        
        if rax_8 == 0
        {
            var_78_1 = 2;
        }
        else
        {
            lscolors::style::Style::to_nu_ansi_term_style::h4f37f75a73819d26(&var_148, rax_8, 
                rax_8, arg5);
            var_78_1 = var_148;
            r15 = var_140;
            rbx = *var_140[1];
            arg5 = *var_140[5];
        }
        
        rbp_1 = var_c0;
        r14_1 = var_b8;
        let mut rax_9: *mut c_void;
        let mut rdx_9: i64;
        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13_1, rbp_1, r14_1);
        
        if rax_9 != 0
        {
            let var_58_1: i8 = var_78_1;
            let mut rdi_17: i8 = r15;
            
            if var_58_1 == 2
            {
                rdi_17 = 0;
            }
            
            let mut rsi_12: i32;
            rsi_12 = var_58_1 == 2;
            
            if var_58_1 == 2
            {
                rbx = 0x15;
            }
            
            if var_58_1 == 2
            {
                arg5 = 0x15;
            }
            
            let zmm0_3: u128 = rsi_12;
            let var_118_1: i64 = (_mm_cmpgt_epi8({0}, 
                _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm0_3, zmm0_3), 0), 7)
                    & data_470a80) & !var_78_1)[0];
            let var_110_1: i8 = rdi_17;
            let var_10f_1: i32 = rbx;
            let var_10b_1: i32 = arg5;
            var_148 = -0x8000000000000000;
            let var_140_1: *mut c_void = rax_9;
            let var_138_1: i64 = rdx_9;
            let var_130_1: i64 = -0x7ffffffffffffffe;
            var_f8 = &var_148;
            let var_f0_2: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
            var_a8 = &data_470810;
            let var_a0_1: i64 = 1;
            let var_88_1: i64 = 0;
            let var_98_1: *mut *mut *mut c_void = &var_f8;
            let var_90_1: i64 = 1;
            result = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_a8);
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hed8dd3841b2e91c8(&var_148);
            
            if result == 0
            {
                let rax_11: u64 =
                    lscolors::LsColors::style_for_indicator::hc2793129675cbe36(arg4, 2);
                result = fd::output::print_trailing_slash::h43af0d27fcc999ec(arg1, var_b0_1, 
                    *arg3.byte_offset(0xb8), *arg3.byte_offset(0xc0), rax_11);
            }
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(
                &var_c8);
            return result;
        }
        
        arg5 = r13_1;
        r13_1 = r14_1;
    }
    else
    {
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_148, rax_1, rdx_1);
        let var_138: u64;
        arg5 = var_138;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_148);
        rbp_1 = var_c0;
        r14_1 = var_b8;
        let mut rax_2: *mut c_void;
        let mut rdx_3: *mut c_void;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(arg5, rbp_1, r14_1);
        
        if rax_2 == 0
        {
            r13_1 = r14_1;
        }
        else
        {
            var_148 = rax_2;
            var_140 = rdx_3.byte_offset(rax_2);
            let mut rax_3: i8;
            let mut i: i32;
            rax_3 = core::str::validations::next_code_point::h1fc26b09b7240c4b(&var_148, rbx);
            
            if (i != 0x110000 & rax_3) != 1
            {
                r13_1 = arg5;
            }
            else
            {
                rbx = &var_148;
                r13_1 = arg5;
                
                while i == 0x2f
                {
                    r13_1 += 1;
                    let mut rax_4: i8;
                    rax_4 =
                        core::str::validations::next_code_point::h1fc26b09b7240c4b(&var_148, rbx);
                    
                    if (rax_4 & 1) == 0
                    {
                        break;
                    }
                    
                    if i == 0x110000
                    {
                        break;
                    }
                }
            }
            
            if r13_1 == 0
            {
                goto 'label_5f6e8e;
            }
            
            let mut rax_5: i64;
            let mut rdx_6: u64;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r13_1, rbp_1, r14_1);
            
            if rax_5 != 0
            {
                let var_f0_1: i64 = rax_5;
                let mut var_e8_1: u64 = rdx_6;
                var_f8 = -0x8000000000000000;
                
                if *arg3.byte_offset(0x168) != -0x8000000000000000
                {
                    fd::output::replace_path_separator::h23f8702077a731dc(&var_148, rax_5, rdx_6, 
                        *arg3.byte_offset(0x170), *arg3.byte_offset(0x178));
                    alloc::borrow::Cow$LT$B$GT$::to_mut::he3d567039a061c09(&var_f8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(
                        &var_f8);
                    var_e8_1 = var_138;
                    var_f8 = var_148;
                }
                
                rbx = 2;
                let mut rax_7: u64;
                let mut rcx_3: i32;
                let mut rdx_7: i8;
                rax_7 = lscolors::LsColors::style_for_indicator::hc2793129675cbe36(arg4, 2);
                let mut zmm0_2: u128;
                
                if rax_7 == 0
                {
                    zmm0_2 = 2;
                }
                else
                {
                    lscolors::style::Style::to_nu_ansi_term_style::h4f37f75a73819d26(&var_148, 
                        rax_7, rax_7, arg5);
                    zmm0_2 = var_148;
                    rdx_7 = var_140;
                    rax_7 = *var_140[1];
                    rcx_3 = *var_140[5];
                }
                
                let var_48_1: i8 = zmm0_2;
                let mut rdi_22: i32;
                rdi_22 = var_48_1 == 2;
                
                if var_48_1 == 2
                {
                    rcx_3 = 0x15;
                }
                
                if var_48_1 == 2
                {
                    rax_7 = 0x15;
                }
                
                let mut rdx_11: i8 = rdx_7;
                
                if var_48_1 == 2
                {
                    rdx_11 = 0;
                }
                
                let var_138_2: u64 = var_e8_1;
                let zmm1_1: i128 = var_f8;
                let mut zmm2_1: u128 = rdi_22;
                zmm2_1 =
                    _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm2_1, zmm2_1), 0), 7)
                    & data_470a80;
                var_148 = zmm1_1;
                let var_118_2: i64 = (_mm_cmpgt_epi8({0}, zmm2_1) & !zmm0_2);
                let var_110_2: i8 = rdx_11;
                let var_10f_2: i32 = rax_7;
                let var_10b_2: i32 = rcx_3;
                let var_130_2: i64 = -0x7ffffffffffffffe;
                let mut var_68: *mut *mut c_void = &var_148;
                let var_60_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
                var_a8 = &data_470810;
                let var_a0_2: i64 = 1;
                let var_88_2: i64 = 0;
                let var_98_2: *mut *mut *mut c_void = &var_68;
                let var_90_2: i64 = 1;
                result = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_a8);
                core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hed8dd3841b2e91c8(&var_148);
                
                if result == 0
                {
                    goto 'label_5f6e99;
                }
                
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(
                    &var_c8);
                return result;
            }
            
            arg5 = 0;
        }
    }
    core::str::slice_error_fail::h1a2885084e28d077(rbp_1, r14_1, arg5, r13_1);
    /* no return */
}
