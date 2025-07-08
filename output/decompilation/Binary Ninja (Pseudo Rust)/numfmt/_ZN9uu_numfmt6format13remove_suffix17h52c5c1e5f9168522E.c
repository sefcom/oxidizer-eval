
  fn uu_numfmt::format::remove_suffix::h52c5c1e5f9168522(arg1: *mut i128, arg2: i8, arg3: bool, arg4: i32, arg5: *mut [i8; 0xa3] @ zmm0) -> u64

{
    let mut var_78: *mut [i8; 0xa3] = arg5;
    let mut result: u64 = arg4 - 2;
    let mut var_70: *mut *mut [i8; 0xa3];
    let mut var_30: *mut i64;
    
    if arg3 != 2
    {
        let mut r8_1: i8 = 2;
        
        if result < 4
        {
            r8_1 = result;
        }
        
        let mut var_40: *const i8;
        
        match r8_1
        {
            0 =>
            {
                if (arg3 & 1) == 0
                {
                    'label_4c38b9:
                    result = jump_table_422e94[arg2] + &jump_table_422e94;
                    
                    match result
                    {
                        0x4c38be =>
                        {
                            arg5 = arg5 * 1000.0;
                        }
                        0x4c3916 =>
                        {
                            arg5 = arg5 * 1000000000000000.0;
                        }
                        0x4c392a =>
                        {
                            arg5 = arg5 * 1000000000.0;
                        }
                        0x4c3952 =>
                        {
                            arg5 = arg5 * 1000000000000.0;
                        }
                        0x4c395c =>
                        {
                            arg5 = arg5 * 9.9999999999999998e+23;
                        }
                        0x4c3966 =>
                        {
                            arg5 = arg5 * 1000000.0;
                        }
                        0x4c3984 =>
                        {
                            arg5 = arg5 * 1e+18;
                        }
                        0x4c398e =>
                        {
                            arg5 = arg5 * 1e+21;
                        }
                    }
                }
                else
                {
                    'label_4c38f7:
                    result = jump_table_422e74[arg2] + &jump_table_422e74;
                    
                    match result
                    {
                        0x4c38fc =>
                        {
                            arg5 = arg5 * 1024.0;
                        }
                        0x4c3909 =>
                        {
                            arg5 = arg5 * 1125899906842624.0;
                        }
                        0x4c3920 =>
                        {
                            arg5 = arg5 * 1073741824.0;
                        }
                        0x4c3934 =>
                        {
                            arg5 = arg5 * 1099511627776.0;
                        }
                        0x4c393e =>
                        {
                            arg5 = arg5 * 1.2089258196146292e+24;
                        }
                        0x4c3948 =>
                        {
                            arg5 = arg5 * 1048576.0;
                        }
                        0x4c3970 =>
                        {
                            arg5 = arg5 * 1.152921504606847e+18;
                        }
                        0x4c397a =>
                        {
                            arg5 = arg5 * 1.1805916207174113e+21;
                        }
                    }
                }
            }
            1 =>
            {
                if (arg3 & 1) != 0
                {
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(arg1, "This suffix is unsupported for s…", 0x2d);
                }
                
                goto 'label_4c38b9;
            }
            2 =>
            {
                if (arg3 & 1) != 0
                {
                    if (arg4 & 1) != 0
                    {
                        goto 'label_4c38f7;
                    }
                    
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(arg1, "This suffix is unsupported for s…", 0x2d);
                }
                
                if (arg4 & 1) == 0
                {
                    goto 'label_4c38f7;
                }
                
                var_40 = arg2;
                var_30 = &var_78;
                let var_28_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                let var_20_1: *const *const i8 = &var_40;
                let var_18_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::ha046da94eec79152;
                var_70 = &data_535b18;
                let var_68_1: i64 = 3;
                let var_50_1: i64 = 0;
                let var_60_1: *mut *mut i64 = &var_30;
                let var_58_1: i64 = 2;
                return core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_70);
            }
            3 =>
            {
                let mut var_79: i8 = arg2;
                arg3 &= 1;
                let mut rcx: *const i8 = 1;
                
                if arg3 != 0
                {
                    rcx = "iUnit 'auto' isn't supported wit…";
                }
                
                var_40 = rcx;
                let var_38_1: u64 = arg3;
                var_70 = &var_78;
                let var_68_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                let var_60_2: *mut i8 = &var_79;
                let var_58_2: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::ha046da94eec79152;
                let var_50_2: *mut i64 = &var_40;
                let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_30 = &data_535b48;
                let var_28_2: i64 = 4;
                let var_10_1: i64 = 0;
                let var_20_2: *const *mut *mut [i8; 0xa3] = &var_70;
                let var_18_2: i64 = 3;
                return core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_30);
            }
        }
    }
    else
    {
        let c_1: bool = result < 4;
        result = result != 2;
        
        if (arg4 & 1) != 0 && (c_1 & result) == 0
        {
            var_30 = &var_78;
            let var_28: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            var_70 = &data_535af8;
            let var_68: i64 = 2;
            let var_50: i64 = 0;
            let var_60: *mut *mut i64 = &var_30;
            let var_58: i64 = 1;
            return core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_70);
        }
    }
    *arg1.byte_offset(8) = arg5;
    *arg1 = -0x8000000000000000;
    result
}
