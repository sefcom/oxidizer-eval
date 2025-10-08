
  fn uu_nl::NumberFormat::format::h4d54de5c56896fc9(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64) -> *mut i128

{
    let mut var_18: i64 = arg3;
    let rax: u32 = *arg2;
    let mut var_68: *mut c_void;
    let mut var_38: *mut i64;
    let mut rax_1: *mut c_void;
    
    if rax == 0
    {
        if arg4 > 0xffff
        {
            var_68 = &data_63a250;
            let var_60_4: i64 = 1;
            let var_58_2: i64 = 8;
            let var_50_2: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_68);
            /* no return */
        }
        
        var_38 = &var_18;
        let var_30_1: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
        let var_28_1: i64 = 0;
        let var_20_1: i16 = arg4;
        var_68 = &data_44e930;
        let var_60_1: i64 = 1;
        rax_1 = &data_454390;
    }
    else if rax != 1
    {
        let mut rax_2: *mut c_void;
        
        if arg3 < 0
        {
            let mut var_10: i64 = -(arg3);
            
            if arg4 - 1 > 0xffff
            {
                var_68 = &data_63a250;
                let var_60_6: i64 = 1;
                let var_58_4: i64 = 8;
                let var_50_4: i128 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_68);
                /* no return */
            }
            
            var_38 = &var_10;
            let var_30_3: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
            let var_28_3: i64 = 0;
            let var_20_3: i16 = (arg4 - 1);
            rax_2 = &data_63a2a8;
        }
        else
        {
            if arg4 > 0xffff
            {
                var_68 = &data_63a250;
                let var_60_5: i64 = 1;
                let var_58_3: i64 = 8;
                let var_50_3: i128 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_68);
                /* no return */
            }
            
            var_38 = &var_18;
            let var_30_2: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
            let var_28_2: i64 = 0;
            let var_20_2: i16 = arg4;
            rax_2 = &data_44e930;
        }
        
        var_68 = rax_2;
        let var_60_2: i64 = 1;
        rax_1 = &data_4543f0;
    }
    else
    {
        if arg4 > 0xffff
        {
            var_68 = &data_63a250;
            let var_60_3: i64 = 1;
            let var_58_1: i64 = 8;
            let var_50_1: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_68);
            /* no return */
        }
        
        var_38 = &var_18;
        let var_30: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
        let var_28: i64 = 0;
        let var_20: i16 = arg4;
        var_68 = &data_44e930;
        let var_60: i64 = 1;
        rax_1 = &data_4543c0;
    }
    
    let mut var_50: i128;
    *var_50[8] = rax_1;
    let var_40: i64 = 1;
    let var_58: *mut *mut i64 = &var_38;
    var_50 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h612ba33885ce226b(arg1, &var_68);
    arg1
}
