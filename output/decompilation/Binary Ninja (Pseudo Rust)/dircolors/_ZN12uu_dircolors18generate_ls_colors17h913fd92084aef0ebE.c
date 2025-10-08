
  fn uu_dircolors::generate_ls_colors::h913fd92084aef0eb(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64) -> *mut i128

{
    let mut result: *mut i128;
    let mut rdi_6: *mut i64;
    let mut var_1b8: i64;
    let mut var_1a0: i32;
    let mut var_158: *mut *mut c_void;
    let mut var_128: i128;
    let mut var_108: i128;
    let mut var_e8: i128;
    
    if *arg2 != 2
    {
        let mut var_b0: i64 = 0;
        let var_a8_1: i64 = 8;
        let var_a0_1: i64 = 0;
        let var_80_1: *mut *mut [i8; 0x18] = &data_4f6c68;
        let mut i: i64 = 0x18;
        let var_160_1: *mut i64 = &var_b0;
        let mut var_190_3: *const *mut *mut c_void;
        let mut var_188_3: i64;
        let mut var_c8: i64;
        
        do
        {
            let r12_2: i64 = *var_80_1.byte_offset(i).byte_offset(-0x18);
            let r15_1: i64 = *var_80_1.byte_offset(i).byte_offset(-0x10);
            var_c8 = r12_2;
            let var_c0_1: i64 = r15_1;
            var_128 = *var_80_1.byte_offset(i).byte_offset(-8);
            var_1a0 = 0;
            let rax_7: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h84f44b8554ae9ebf(r12_2, 
                r15_1, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2a, &var_1a0));
            let mut rcx_1: *const i8 = "*";
            
            if rax_7 != 0
            {
                rcx_1 = 1;
            }
            
            var_108 = rcx_1;
            *var_108[8] = rax_7 ^ 1;
            var_158 = &var_108;
            let var_150_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            let var_148_2: *mut i64 = &var_c8;
            let var_140_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_1a0 = &data_41c1c0;
            let var_198_2: i64 = 2;
            let var_180_2: i64 = 0;
            let var_190_2: *const *mut *mut c_void = &var_158;
            let var_188_2: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_1b8, &var_1a0);
            var_e8 = var_1b8;
            var_158 = &var_e8;
            let var_150_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_148_3: *mut i128 = &var_128;
            let var_140_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_1a0 = &data_4f5ce0;
            let var_198_3: i64 = 2;
            let var_180_3: i64 = 0;
            var_190_3 = &var_158;
            var_188_3 = 2;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_48, &var_1a0);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h60526611d18df024(&var_b0, &var_48);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_e8);
            i += 0x20;
        } while i != 0x1058;
        
        uu_dircolors::get_colors_format_strings::h31238be5fa82f8cf(&var_1a0, arg2);
        let var_b8_1: *const *mut *mut c_void = var_190_3;
        var_c8 = var_1a0;
        let var_178: i64;
        let var_118_1: i64 = var_178;
        var_128 = var_188_3;
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_1a0, var_a8_1, var_a0_1, arg3, arg4);
        let var_f8_1: *const *mut *mut c_void = var_190_3;
        var_108 = var_1a0;
        uu_dircolors::generate_type_output::h04462d82bde79245(&var_1b8, arg2);
        var_1a0 = &var_c8;
        let var_198_4: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_190_4: *mut i64 = &var_1b8;
        let var_188_4: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_180_4: *mut i128 = &var_108;
        let var_178_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_170_1: *mut i128 = &var_128;
        let var_168_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_158 = &data_4f5d00;
        let var_150_4: i64 = 4;
        let var_138_2: i64 = 0;
        let var_148_4: *mut i32 = &var_1a0;
        let var_140_4: i64 = 4;
        core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_e8, &var_158);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_1b8);
        result = arg1;
        let var_1a8: i64;
        result[1] = var_1a8;
        *result = var_e8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_108);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_c8);
        rdi_6 = &var_b0;
    }
    else
    {
        var_1b8 = 0;
        let var_1b0_1: i64 = 8;
        let var_1a8_1: i64 = 0;
        let mut var_78: ();
        uu_dircolors::generate_type_output::h04462d82bde79245(&var_78, arg2);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h60526611d18df024(&var_1b8, &var_78);
        let mut i_1: i64 = 0x18;
        let var_160: *mut i64 = &var_1b8;
        let mut var_190_1: *mut i128;
        
        do
        {
            let rbp_1: i64 = *(i_1 + 0x4f6c50);
            let r12_1: i64 = *(i_1 + &uucore::features::colors::FILE_TYPES::h9917bb83e012dc61);
            var_128 = rbp_1;
            *var_128[8] = r12_1;
            var_108 = *(i_1 + 0x4f6c60);
            var_1a0 = 0;
            let rax_2: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h84f44b8554ae9ebf(rbp_1, 
                r12_1, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2a, &var_1a0));
            let mut rcx: *const i8 = "*";
            
            if rax_2 != 0
            {
                rcx = 1;
            }
            
            var_e8 = rcx;
            *var_e8[8] = rax_2 ^ 1;
            var_1a0 = &var_108;
            let var_198_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_190_1 = &var_e8;
            let var_188_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            let var_180_1: *mut i128 = &var_128;
            let var_178_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_158 = &data_4f5d58;
            let var_150_1: i64 = 5;
            let var_138_1: *mut c_void = &data_41c328;
            let var_130_1: i64 = 4;
            let var_148_1: *mut i32 = &var_1a0;
            let var_140_1: i64 = 3;
            let mut var_60: ();
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_60, &var_158);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h60526611d18df024(&var_1b8, &var_60);
            i_1 += 0x20;
        } while i_1 != 0x1058;
        
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_1a0, var_1b0_1, var_1a8_1, 
            "\n:\x1b[m\t", 1);
        result = arg1;
        result[1] = var_190_1;
        *result = var_1a0;
        rdi_6 = &var_1b8;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbd7984742b77bb31(
        rdi_6);
    result
}
