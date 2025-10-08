
  fn uu_truncate::truncate_size_only::h1f53334980ddb1bc(arg1: i64, arg2: i64, arg3: *mut c_void, arg4: i64, arg5: i8) -> u64

{
    let mut var_168: i32;
    uu_truncate::parse_mode_and_size::h9caa4c91beef10d4(&var_168, arg1, arg2);
    let mut i: u64;
    let mut var_158: i128;
    let mut var_e8: i128;
    
    if var_168 != 4
    {
        let var_d8_1: i128 = var_158;
        var_e8 = var_168;
        i = uu_truncate::truncate_size_only::_$u7b$$u7b$closure$u7d$$u7d$::h9450d3b26670fc86(
            &var_e8);
    }
    else
    {
        let rax: i64 = var_158;
        let var_160: i64;
        
        if (var_160 == 5 || var_160 == 6) && rax == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc324d0392f7be5de(&var_e8, &data_416e60, 0x10);
            let mut var_d8: i128;
            *var_d8[8] = 1;
            i = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_e8);
        }
        else
        {
            let mut r14_2: *mut c_void = arg3;
            let mut r12_1: i64 = 0;
            let var_138_1: *mut c_void = r14_2;
            
            do
            {
                if arg4 * 0x18 == r12_1
                {
                    return 0;
                }
                
                std::fs::metadata::h3bf47457d6321a54(&var_e8, r14_2);
                let rbx_2: i64 = var_e8;
                let mut rdx_1: i64;
                
                if rbx_2 == 2
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(2, *var_e8[8]);
                    rdx_1 = 0;
                }
                else
                {
                    let var_b0: i32;
                    
                    if (var_b0 & 0xf000) == 0x1000
                    {
                        let rax_4: i64 = *var_138_1.byte_offset(r12_1).byte_offset(8);
                        let rcx_2: i64 = *var_138_1.byte_offset(r12_1).byte_offset(0x10);
                        let mut var_120: i64 = 0;
                        let var_118_1: i64 = rax_4;
                        let var_110_1: i64 = rcx_2;
                        let var_108_1: i8 = 1;
                        let mut var_130: *mut i64 = &var_120;
                        let var_128_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_168 = &data_4e4020;
                        let var_160_1: i64 = 2;
                        let var_148_1: i64 = 0;
                        var_158 = &var_130;
                        *var_158[8] = 1;
                        let mut var_100: i128;
                        core::option::Option$LT$T$GT$::map_or_else::hccc437e8064ad343(&var_100, 
                            &var_168);
                        *var_158[8] = 1;
                        var_168 = var_100;
                        let var_f0: i64;
                        var_158 = var_f0;
                        let rax_6: u64 =
                            alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_168);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(rbx_2, *var_e8[8]);
                        return rax_6;
                    }
                    
                    let var_98: i64;
                    rdx_1 = var_98;
                }
                
                let rax_1: i64 =
                    uu_truncate::TruncateMode::to_size::he28c50c65dad202d(var_160, rax, rdx_1);
                i = uu_truncate::file_truncate::ha430ef778d6571e6(*r14_2.byte_offset(8), 
                    *r14_2.byte_offset(0x10), arg5, rax_1);
                r12_1 += 0x18;
                r14_2 += 0x18;
            } while i == 0;
        }
    }
    i
}
