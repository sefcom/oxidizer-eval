
  fn uu_truncate::truncate_size_only::hdbbffa5e97261080(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i8) -> *mut i128

{
    let mut var_178: i32;
    uu_truncate::parse_mode_and_size::hbf18cbb89603c372(&var_178, arg1, arg2);
    let mut r12_2: *mut i128;
    let mut var_168: i128;
    let mut var_e8: i128;
    
    if var_178 != 3
    {
        let var_d8_1: i128 = var_168;
        var_e8 = var_178;
        r12_2 = uu_truncate::truncate_size_only::_$u7b$$u7b$closure$u7d$$u7d$::h73ee083b2ef723e0(
            &var_e8);
    }
    else
    {
        let r14_1: i64 = var_168;
        let var_170: i64;
        
        if (var_170 == 5 || var_170 == 6) && r14_1 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(
                &var_e8, &data_413ba0[0x10], 0x10);
            let mut var_d8: i128;
            *var_d8[8] = 1;
            r12_2 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_e8);
        }
        else
        {
            let mut var_140: i64 = arg3;
            let var_138_1: i64 = arg3 + arg4 * 0x18;
            
            loop
            {
                let rax_4: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&var_140);
                
                if rax_4 == 0
                {
                    return nullptr;
                }
                
                std::fs::metadata::h1cc9ec6f7ac4b82e(&var_e8, rax_4);
                let r13_1: i64 = var_e8;
                let mut rdx_1: i64;
                
                if r13_1 == 2
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(2, *var_e8[8]);
                    rdx_1 = 0;
                }
                else
                {
                    let var_b0: i32;
                    
                    if (var_b0 & 0xf000) == 0x1000
                    {
                        let zmm0_2: i128 = *rax_4.byte_offset(8);
                        let mut var_108: i64 = 0;
                        let var_100_1: i128 = zmm0_2;
                        let var_f0_1: i8 = 1;
                        let mut var_130: *mut i64 = &var_108;
                        let var_128_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_178 = &data_5165a0;
                        let var_170_1: i64 = 2;
                        let var_158_1: i64 = 0;
                        var_168 = &var_130;
                        *var_168[8] = 1;
                        let mut var_120: i128;
                        core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&var_120, 
                            &var_178);
                        *var_168[8] = 1;
                        var_178 = var_120;
                        let var_110: i64;
                        var_168 = var_110;
                        r12_2 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_178);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(r13_1, *var_e8[8]);
                        break;
                    }
                    
                    let var_98: i64;
                    rdx_1 = var_98;
                }
                
                let rax_2: i64 =
                    uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(var_170, r14_1, rdx_1);
                let rax_3: *mut i128 = uu_truncate::file_truncate::h8689dfa8e5b80143(
                    *rax_4.byte_offset(8), *rax_4.byte_offset(0x10), arg5, rax_2);
                
                if rax_3 != 0
                {
                    return rax_3;
                }
            }
        }
    }
    r12_2
}
