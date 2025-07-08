
  fn uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut c_void) -> i64

{
    let mut var_78: i64 = 0;
    let var_70: i64 = 1;
    let result: i64 = 0;
    let mut var_c8: i128;
    let mut var_b8: *mut *mut i64;
    let mut var_a8: i128;
    let mut var_98: *mut *mut i64;
    let mut var_60: *mut i64;
    let mut var_50: *mut i128;
    
    if *arg5.byte_offset(0xe9) != 0
    {
        let rax_1: *mut i32 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg2);
        
        if rax_1 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                &var_a8, "? ,\n,   \t?????????+bd-cannot a…", 1);
            var_b8 = var_98;
            var_c8 = var_a8;
        }
        else
        {
            uu_ls::get_inode::h2901925630e3969f(&var_c8, *rax_1.byte_offset(0x28));
        }
        
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_50, *var_c8[8]);
        var_60 = &var_50;
        let var_58_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_a8 = &data_6125e8;
        *var_a8[8] = 2;
        let var_88_1: i64 = 0;
        var_98 = &var_60;
        let var_90_1: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_78, &var_a8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
    }
    
    if *arg5.byte_offset(0xea) != 0
    {
        let rax_4: *mut i32 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg2);
        
        if rax_4 != 0
        {
            let rbp_2: i8 = *arg5.byte_offset(0xf1);
            uu_ls::display_size::hba9b1cbdd7c6b199(&var_c8, 
                uu_ls::get_block_size::h2a7c975a8304f17e(rax_4[0xe], *rax_4.byte_offset(0x60), 
                    *arg5.byte_offset(0xd8), rbp_2), 
                rbp_2);
            
            if *arg5.byte_offset(0xf8) != 4
            {
                goto 'label_52943a;
            }
            
            goto 'label_529381;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_a8, 
            "? ,\n,   \t?????????+bd-cannot a…", 1);
        var_b8 = var_98;
        var_c8 = var_a8;
        
        if *arg5.byte_offset(0xf8) == 4
        {
            'label_529381:
            var_50 = &var_c8;
            let var_48_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_a8 = &data_6125e8;
            *var_a8[8] = 2;
            let var_88_2: i64 = 0;
            let var_98_1: *mut *mut i128 = &var_50;
            let var_90_2: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_78, &var_a8));
        }
        else
        {
            'label_52943a:
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_50, *var_c8[8]);
            var_60 = &var_50;
            let var_58_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_a8 = &data_6125e8;
            *var_a8[8] = 2;
            let var_88_3: i64 = 0;
            let var_98_2: *mut *mut i64 = &var_60;
            let var_90_3: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_78, &var_a8));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_50);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
    }
    
    arg1[1] = result;
    *arg1 = var_78;
    result
}
