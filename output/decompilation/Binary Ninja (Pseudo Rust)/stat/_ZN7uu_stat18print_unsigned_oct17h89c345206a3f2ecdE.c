
  fn uu_stat::print_unsigned_oct::h89c345206a3f2ecd(arg1: i32, arg2: i32, arg3: i8, arg4: i64, arg5: i64, arg6: i64, arg7: i8) -> i64

{
    let mut var_9c: i32 = arg1;
    let mut rcx: *const i8 = 1;
    
    if (arg2 & 1) != 0
    {
        rcx = "00x: warning: backslash at end o…";
    }
    
    let mut var_38: *const i8 = rcx;
    let var_30: u64 = arg2 & 1;
    let mut var_28: ();
    let mut rsi_1: *mut *mut i64;
    let mut rdi: *mut c_void;
    let mut var_98: *mut c_void;
    let mut var_68: *mut i64;
    
    if arg5 == 0 || arg5 == 1
    {
        var_68 = &var_38;
        let var_60: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        let var_58: *mut i32 = &var_9c;
        let var_50: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
        var_98 = &data_41cfd0;
        let var_90: i64 = 2;
        let var_78: i64 = 0;
        let var_88: *mut *mut i64 = &var_68;
        let var_80_1: i64 = 2;
        rdi = &var_28;
        rsi_1 = &var_98;
    }
    else
    {
        if arg6 > 0xffff
        {
            var_98 = &data_519960;
            let var_90_2: i64 = 1;
            let var_88_2: i64 = 8;
            let mut var_80: i64;
            var_80 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_98);
            /* no return */
        }
        
        var_98 = &var_38;
        let var_90_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        let var_88_1: *mut i32 = &var_9c;
        let var_80_2: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
        let var_78_1: i64 = 0;
        let var_70_1: i16 = arg6;
        var_68 = &data_41cfd0;
        let var_60_1: i64 = 2;
        let var_48_1: *mut c_void = &data_41d528;
        let var_40_1: i64 = 2;
        let var_58_1: *const *mut c_void = &var_98;
        let var_50_1: i64 = 3;
        rdi = &var_28;
        rsi_1 = &var_68;
    }
    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(rdi, rsi_1);
    let var_20: i64;
    let var_18: i64;
    uu_stat::pad_and_print::h4c659c1797f3ded6(var_20, var_18, arg3, arg4, arg7);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_28)
}
