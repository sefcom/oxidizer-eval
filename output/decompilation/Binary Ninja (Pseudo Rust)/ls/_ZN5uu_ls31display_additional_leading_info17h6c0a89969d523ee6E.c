
  fn uu_ls::display_additional_leading_info::h6c0a89969d523ee6(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut c_void, arg6: *mut c_void) -> i64

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
    
    if *arg5.byte_offset(0xf1) != 0
    {
        let rax_1: *mut c_void = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg6);
        
        if rax_1 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_a8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1);
            var_b8 = var_98;
            var_c8 = var_a8;
        }
        else
        {
            uu_ls::get_inode::hac559b2c8c4109af(&var_c8, *rax_1.byte_offset(0x28));
        }
        
        uu_ls::pad_left::h9cc9c358e56c676a(&var_50, *var_c8[8], var_b8, arg3);
        var_60 = &var_50;
        let var_58_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_a8 = &data_686678;
        *var_a8[8] = 2;
        let var_88_1: i64 = 0;
        var_98 = &var_60;
        let var_90_1: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd1412c45ded2be83(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::he85952e7563119ae(&var_78, &var_a8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
    }
    
    if *arg5.byte_offset(0xf2) != 0
    {
        let rax_4: *mut c_void = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg6);
        
        if rax_4 != 0
        {
            let rbp_2: i8 = *arg5.byte_offset(0xf9);
            uu_ls::display_size::hb2e480a0d8619531(&var_c8, 
                uu_ls::get_block_size::hab622dcab93c70df(*rax_4.byte_offset(0x38), 
                    *rax_4.byte_offset(0x60), *arg5.byte_offset(0xd8), rbp_2), 
                rbp_2);
            
            if *arg5.byte_offset(0x100) != 4
            {
                goto 'label_59c37a;
            }
            
            goto 'label_59c2c1;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_a8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1);
        var_b8 = var_98;
        var_c8 = var_a8;
        
        if *arg5.byte_offset(0x100) == 4
        {
            'label_59c2c1:
            var_50 = &var_c8;
            let var_48_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_a8 = &data_686678;
            *var_a8[8] = 2;
            let var_88_2: i64 = 0;
            let var_98_1: *mut *mut i128 = &var_50;
            let var_90_2: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd1412c45ded2be83(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::he85952e7563119ae(&var_78, &var_a8));
        }
        else
        {
            'label_59c37a:
            uu_ls::pad_left::h9cc9c358e56c676a(&var_50, *var_c8[8], var_b8, arg4);
            var_60 = &var_50;
            let var_58_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_a8 = &data_686678;
            *var_a8[8] = 2;
            let var_88_3: i64 = 0;
            let var_98_2: *mut *mut i64 = &var_60;
            let var_90_3: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd1412c45ded2be83(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::he85952e7563119ae(&var_78, &var_a8));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_50);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
    }
    
    arg1[1] = result;
    *arg1 = var_78;
    result
}
