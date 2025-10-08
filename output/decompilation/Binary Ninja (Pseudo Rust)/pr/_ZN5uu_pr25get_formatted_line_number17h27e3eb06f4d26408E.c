
  fn uu_pr::get_formatted_line_number::h27e3eb06f4d26408(arg1: *mut i64, arg2: *mut c_void, arg3: u64, arg4: i64) -> bool

{
    let mut result: bool = false;
    
    if !(0 + -(*arg2.byte_offset(0xd8)))
    {
        if *arg2.byte_offset(0x10) != 0
        {
            result = arg4 != 0;
            arg4 = arg3 == 0;
            arg4 |= result;
            
            if arg4 == 0
            {
                goto 'label_537d41;
            }
        }
        else if arg3 != 0
        {
            'label_537d41:
            let mut var_a8: *const i8;
            let mut rax: i64;
            let mut rdx: u64;
            rax = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg3, 
                &var_a8, 0x14);
            let mut var_d8: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(&var_d8, rax, rdx);
            let var_c8: i64;
            let var_68_1: i64 = var_c8;
            let mut var_78: i128 = var_d8;
            let rbp_1: i64 = *arg2.byte_offset(0xf0);
            let mut var_e0: *mut c_void = arg2.byte_offset(0xd8);
            let r15_3: i64 = var_c8 - rbp_1;
            let mut var_58: i128;
            
            if var_c8 >= rbp_1
            {
                let r12_2: *mut i8 = *var_78[8];
                let mut rax_1: *mut c_void;
                let mut rdx_2: i64;
                rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_3, r12_2, var_c8);
                
                if rax_1 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r12_2, var_c8, r15_3, var_c8);
                    /* no return */
                }
                
                let mut var_40: *mut c_void = rax_1;
                let var_38_1: i64 = rdx_2;
                
                if rbp_1 <= 0xffff
                {
                    var_d8 = &var_40;
                    *var_d8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6be8972569da11d7;
                    let var_c8_2: *mut *mut c_void = &var_e0;
                    let var_c0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
                    let var_b8_2: i64 = 0;
                    let var_b0_2: i16 = rbp_1;
                    var_a8 = &data_456960;
                    let var_a0_2: i64 = 2;
                    let var_88_2: *mut c_void = &data_458388;
                    let var_80_2: i64 = 2;
                    let var_98_2: *mut i128 = &var_d8;
                    let var_90_2: i64 = 3;
                    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_58, &var_a8);
                    goto 'label_537eea;
                }
            }
            else if rbp_1 <= 0xffff
            {
                var_d8 = &var_78;
                *var_d8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_c8_1: *mut *mut c_void = &var_e0;
                let var_c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
                let var_b8_1: i64 = 0;
                let var_b0_1: i16 = rbp_1;
                var_a8 = &data_456960;
                let var_a0_1: i64 = 2;
                let var_88_1: *mut c_void = &data_458388;
                let var_80_1: i64 = 2;
                let var_98_1: *mut i128 = &var_d8;
                let var_90_1: i64 = 3;
                core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_58, &var_a8);
                'label_537eea:
                let var_48: i64;
                arg1[2] = var_48;
                *arg1 = var_58;
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(
                    &var_78);
            }
            var_d8 = &data_668f50;
            *var_d8[8] = 1;
            let var_c8_3: i64 = 8;
            let mut var_c0: i64;
            var_c0 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_d8);
            /* no return */
        }
    }
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
    result
}
