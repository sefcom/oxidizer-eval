
  fn uu_nl::NumberFormat::format::h85daa785ca2f298b(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64) -> *mut i128

{
    let mut var_50: i64 = arg3;
    let rax: u32 = *arg2;
    let mut var_a0: *mut i64;
    let mut var_48: i64;
    let mut rax_1: *mut c_void;
    
    if rax == 0
    {
        var_a0 = &var_50;
        let var_98_1: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
        let var_90_1: i64 = arg4;
        let var_88_1: i64 = 0;
        var_48 = 2;
        let var_38_1: i64 = 1;
        let var_30_1: i64 = 1;
        let var_28_1: i64 = 0;
        let var_20_1: i64 = 0x20;
        let var_18: i8 = 0;
        rax_1 = &data_461370;
    }
    else
    {
        let mut var_18_1: i8;
        
        if rax == 1
        {
            var_a0 = &var_50;
            let var_98: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
            let var_90: i64 = arg4;
            let var_88: i64 = 0;
            var_48 = 2;
            let var_38: i64 = 1;
            let var_30: i64 = 1;
            let var_28: i64 = 0;
            let var_20: i64 = 0x20;
            var_18_1 = 1;
            rax_1 = &data_461370;
        }
        else if arg3 < 0
        {
            let mut var_10: i64 = -(arg3);
            var_a0 = &var_10;
            let var_98_3: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
            let var_90_3: i64 = arg4 - 1;
            let var_88_3: i64 = 0;
            var_48 = 2;
            let var_38_3: i64 = 1;
            let var_30_3: i64 = 1;
            let var_28_3: i64 = 0;
            let var_20_3: i64 = 0x30;
            let var_18_2: i8 = 1;
            rax_1 = &data_6d9a98;
        }
        else
        {
            var_a0 = &var_50;
            let var_98_2: fn(arg1: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
            let var_90_2: i64 = arg4;
            let var_88_2: i64 = 0;
            var_48 = 2;
            let var_38_2: i64 = 1;
            let var_30_2: i64 = 1;
            let var_28_2: i64 = 0;
            let var_20_2: i64 = 0x30;
            var_18_1 = 1;
            rax_1 = &data_461370;
        }
    }
    
    let mut var_80: *mut c_void = rax_1;
    let var_78: i64 = 1;
    let var_60: *mut i64 = &var_48;
    let var_58: i64 = 1;
    let var_70: *mut *mut i64 = &var_a0;
    let var_68: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h0a2f0cb8f97eeebd(arg1, &var_80);
    arg1
}
