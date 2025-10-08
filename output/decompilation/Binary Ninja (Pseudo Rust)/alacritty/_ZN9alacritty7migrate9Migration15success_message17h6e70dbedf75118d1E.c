
  fn alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(arg1: *mut i64, arg2: *mut c_void, arg3: u64) -> i64

{
    let mut var_30: *mut *mut [i8; 0xf2];
    let mut var_60: *mut c_void;
    let mut var_50: *mut *mut c_void;
    
    if !(0 + -(*arg2.byte_offset(0x10)))
    {
        let mut var_58: *mut c_void = arg2;
        var_60 = arg2.byte_offset(0x10);
        let mut rax_2: *mut *mut [i8; 0xf2];
        
        if arg3 == 0
        {
            var_58 = arg2;
            var_60 = arg2.byte_offset(0x10);
            var_50 = &var_58;
            let var_48_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            let var_40_2: *mut *mut c_void = &var_60;
            let var_38_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hb5cf510104176b6c;
            rax_2 = &data_c837e8;
        }
        else
        {
            var_50 = &var_58;
            let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            let var_40_1: *mut *mut c_void = &var_60;
            let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hb5cf510104176b6c;
            rax_2 = &data_c837c8;
        }
        
        var_30 = rax_2;
        let var_28_1: i64 = 2;
        let var_10_1: i64 = 0;
        let var_20_1: *mut *mut *mut c_void = &var_50;
        let var_18_1: i64 = 2;
    }
    else
    {
        var_60 = arg2;
        let mut rax: *mut *mut [i8; 0xf2];
        
        if arg3 == 0
        {
            var_60 = arg2;
            var_50 = &var_60;
            let var_48_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            rax = &data_c83818;
        }
        else
        {
            var_50 = &var_60;
            let var_48: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            rax = &data_c83808;
        }
        
        var_30 = rax;
        let var_28: i64 = 1;
        let var_10: i64 = 0;
        let var_20: *mut *mut *mut c_void = &var_50;
        let var_18: i64 = 1;
    }
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(arg1, 0, arg3, &var_30)
}
