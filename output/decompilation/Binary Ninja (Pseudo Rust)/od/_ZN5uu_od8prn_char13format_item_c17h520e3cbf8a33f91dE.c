
  fn uu_od::prn_char::format_item_c::h520e3cbf8a33f91d(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> *mut i128

{
    if arg3 == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let result: *mut i128 = arg1;
    let mut rax: i64 = *arg2;
    let mut var_71: i8 = rax;
    let mut var_60: *mut c_void;
    let mut rax_3: *mut *mut c_void;
    let mut var_70: *mut c_void;
    let mut var_30: *mut *mut c_void;
    let mut rax_2: *mut c_void;
    
    if rax < 0
    {
        if rax < 0xc0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(result, "  **\x1b[1mKindboolmut kindAuto/", 4);
            return result;
        }
        
        arg1 = arg3 != 1;
        let mut rsi_1: i64;
        
        if (arg1 & (rax & 0xe0) == 0xc0) == 0
        {
            arg1 = arg3 >= 3;
            
            if (arg1 & (rax & 0xf0) == 0xe0) == 0
            {
                rax &= 0xf8;
                rax = rax == 0xf0;
                
                if (arg3 >= 4 & rax) == 0
                {
                    var_30 = &var_71;
                    let var_28_2: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h1c61e1fbdca52982;
                    var_60 = &data_503838;
                    let var_58_3: i64 = 1;
                    rax_2 = &data_41d1f8;
                    goto 'label_46b0c9;
                }
                
                rsi_1 = 4;
            }
            else
            {
                rsi_1 = 3;
            }
        }
        else
        {
            rsi_1 = 2;
        }
        
        let mut rax_5: *mut i8;
        let mut rdx_1: i64;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(0, rsi_1, arg2, arg3);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax_5, rdx_1);
        let mut rax_6: *mut c_void;
        
        if var_30 != 1
        {
            let var_28: i64;
            let mut var_18: i128 = var_28;
            var_70 = &var_18;
            let var_68_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            var_60 = &data_41a940;
            let var_58_2: i64 = 1;
            rax_6 = &data_41d150;
        }
        else
        {
            var_70 = &var_71;
            let var_68_1: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h1c61e1fbdca52982;
            var_60 = &data_503838;
            let var_58_1: i64 = 1;
            rax_6 = &data_41d1f8;
        }
        
        let var_40_1: *mut c_void = rax_6;
        let var_38_1: i64 = 1;
        rax_3 = &var_70;
    }
    else
    {
        var_70 = &(&uu_od::prn_char::C_CHARS::hf9c44c07aa090c89)[rax * 2];
        var_30 = &var_70;
        let var_28_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1b019627656d27e4;
        var_60 = &data_41a940;
        let var_58: i64 = 1;
        rax_2 = &data_41d150;
        'label_46b0c9:
        let var_40: *mut c_void = rax_2;
        let var_38: i64 = 1;
        rax_3 = &var_30;
    }
    let var_50: *mut *mut c_void = rax_3;
    let var_48: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(result, &var_60);
    result
}
