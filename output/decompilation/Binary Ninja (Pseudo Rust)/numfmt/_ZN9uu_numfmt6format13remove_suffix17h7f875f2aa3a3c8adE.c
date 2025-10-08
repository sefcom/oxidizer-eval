
  fn uu_numfmt::format::remove_suffix::h7f875f2aa3a3c8ad(arg1: *mut i128, arg2: i8, arg3: i8, arg4: i8, arg5: *mut c_void @ zmm0)

{
    let mut var_78: *mut c_void = arg5;
    
    if arg3 != 2
    {
        let mut r8_1: i8 = 2;
        
        if arg4 - 2 < 4
        {
            r8_1 = arg4 - 2;
        }
        
        let mut rax_2: i64;
        let mut rcx: *const i8;
        
        if (arg3 & 1) == 0
        {
            if r8_1 >= 2
            {
                let mut var_70: i8;
                let mut var_60: *mut i64;
                let mut var_30: *mut *mut c_void;
                
                if r8_1 == 2
                {
                    if (arg4 & 1) != 0
                    {
                        var_70 = arg2;
                        var_30 = &var_78;
                        let var_28: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                        let var_20: *mut i8 = &var_70;
                        let var_18: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::h24671838996c3b7b;
                        var_60 = &data_5023d8;
                        let var_58: i64 = 3;
                        let var_40: i64 = 0;
                        let var_50: *const *mut *mut c_void = &var_30;
                        let var_48: i64 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(arg1, 
                            &var_60);
                        return;
                    }
                    
                    goto 'label_469c45;
                }
                
                if arg4 != 5
                {
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, "This suffix is unsupported for s…", 0x2d);
                }
                
                rcx = 1;
                rax_2 = 0;
                'label_469c75:
                let mut var_79: i8 = arg2;
                var_70 = rcx;
                let var_68: i64 = rax_2;
                var_60 = &var_78;
                let var_58_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                let var_50_1: *mut i8 = &var_79;
                let var_48_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::h24671838996c3b7b;
                let var_40_1: *mut i8 = &var_70;
                let var_38: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                var_30 = &data_502408;
                let var_28_1: i64 = 4;
                let var_10: i64 = 0;
                let var_20_1: *mut *mut i64 = &var_60;
                let var_18_1: i64 = 3;
                core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(arg1, &var_30);
                return;
            }
            
            match arg2
            {
                0 =>
                {
                    arg5 = arg5 * 1000.0;
                }
                1 =>
                {
                    arg5 = arg5 * 1000000.0;
                }
                2 =>
                {
                    arg5 = arg5 * 1000000000.0;
                }
                3 =>
                {
                    arg5 = arg5 * 1000000000000.0;
                }
                4 =>
                {
                    arg5 = arg5 * 1000000000000000.0;
                }
                5 =>
                {
                    arg5 = arg5 * 1e+18;
                }
                6 =>
                {
                    arg5 = arg5 * 1e+21;
                }
                7 =>
                {
                    arg5 = arg5 * 9.9999999999999998e+23;
                }
            }
        }
        else
        {
            if r8_1 != 0 && (r8_1 != 2 || (arg4 & 1) == 0)
            {
                if arg4 != 5
                {
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, "This suffix is unsupported for s…", 0x2d);
                }
                
                rax_2 = 1;
                rcx = "iUnit 'auto' isn't supported wit…";
                goto 'label_469c75;
            }
            
            'label_469c45:
            
            match arg2
            {
                0 =>
                {
                    arg5 = arg5 * 1024.0;
                }
                1 =>
                {
                    arg5 = arg5 * 1048576.0;
                }
                2 =>
                {
                    arg5 = arg5 * 1073741824.0;
                }
                3 =>
                {
                    arg5 = arg5 * 1099511627776.0;
                }
                4 =>
                {
                    arg5 = arg5 * 1125899906842624.0;
                }
                5 =>
                {
                    arg5 = arg5 * 1.152921504606847e+18;
                }
                6 =>
                {
                    arg5 = arg5 * 1.1805916207174113e+21;
                }
                7 =>
                {
                    arg5 = arg5 * 1.2089258196146292e+24;
                }
            }
        }
    }
    
    *arg1.byte_offset(8) = arg5;
    *arg1 = -0x8000000000000000;
}
