
  fn uu_stat::pad_and_print::h4c659c1797f3ded6(arg1: i64, arg2: i64, arg3: i32, arg4: i64, arg5: i8) -> *mut c_void

{
    let mut var_10: i64 = arg1;
    let var_8: i64 = arg2;
    let mut var_60: *mut c_void;
    let mut var_30: *mut i64;
    let mut rax: *mut c_void;
    
    if arg3 == 0
    {
        if arg5 == 0
        {
            if arg4 > 0xffff
            {
                var_60 = &data_519960;
                let var_58_7: i64 = 1;
                let var_50_4: i64 = 8;
                let var_48_4: i128 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_60);
                /* no return */
            }
            
            var_30 = &var_10;
            let var_28_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
            let var_20_3: i64 = 0;
            let var_18_3: i16 = arg4;
            var_60 = &data_41ab40;
            let var_58_3: i64 = 1;
            rax = &data_41d388;
        }
        else
        {
            if arg4 > 0xffff
            {
                var_60 = &data_519960;
                let var_58_5: i64 = 1;
                let var_50_2: i64 = 8;
                let var_48_2: i128 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_60);
                /* no return */
            }
            
            var_30 = &var_10;
            let var_28_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
            let var_20_1: i64 = 0;
            let var_18_1: i16 = arg4;
            var_60 = &data_41ab40;
            let var_58_1: i64 = 1;
            rax = &data_41d3b8;
        }
    }
    else if arg5 == 0
    {
        if arg4 > 0xffff
        {
            var_60 = &data_519960;
            let var_58_6: i64 = 1;
            let var_50_3: i64 = 8;
            let var_48_3: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_60);
            /* no return */
        }
        
        var_30 = &var_10;
        let var_28_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        let var_20_2: i64 = 0;
        let var_18_2: i16 = arg4;
        var_60 = &data_41ab40;
        let var_58_2: i64 = 1;
        rax = &data_41d3e8;
    }
    else
    {
        if arg4 > 0xffff
        {
            var_60 = &data_519960;
            let var_58_4: i64 = 1;
            let var_50_1: i64 = 8;
            let var_48_1: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_60);
            /* no return */
        }
        
        var_30 = &var_10;
        let var_28: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        let var_20: i64 = 0;
        let var_18: i16 = arg4;
        var_60 = &data_41ab40;
        let var_58: i64 = 1;
        rax = &data_41d418;
    }
    
    let mut var_48: i128;
    *var_48[8] = rax;
    let var_38: i64 = 1;
    let var_50: *mut *mut i64 = &var_30;
    var_48 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_60)
}
