
  fn uu_stat::print_integer::h03aa5a8d7234e609(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i8) -> i64

{
    let mut var_40: ();
    _$LT$i64$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h60b05a0cf10951a2(&var_40, 
        arg1);
    let mut var_b0: i64;
    let var_38: *mut c_void;
    let var_30: i64;
    
    if *arg2.byte_offset(5) == 0
    {
        let var_a8_1: *mut c_void = var_38;
        let var_a0_1: i64 = var_30;
        var_b0 = -0x8000000000000000;
    }
    else
    {
        uu_stat::group_num::hf49c8796a9e1a06a(&var_b0, var_38, var_30);
    }
    let mut rax: u64 = *arg2.byte_offset(3);
    let mut rcx: *const i8 = " +";
    
    if (rax & 1) == 0
    {
        rcx = 1;
    }
    
    let mut rsi_2: *const i8 = "+";
    let temp0: i8 = *arg2.byte_offset(4);
    
    if temp0 == 0
    {
        rsi_2 = rcx;
    }
    
    if temp0 != 0
    {
        rax = 1;
    }
    
    let mut var_50: *const i8 = rsi_2;
    let var_48: u64 = rax;
    let mut var_e8: *const *const i8;
    let mut var_e0: fn(arg1: *mut i64, arg2: i64) -> i64;
    let mut var_98: i128;
    let mut var_80: *const *const i8;
    
    if arg4 == 0
    {
        var_80 = &var_50;
        let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        let var_70_1: *mut i64 = &var_b0;
        let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
        var_e8 = &data_41cfd0;
        var_e0 = 2;
        let var_c8_1: i64 = 0;
        let var_d8_1: *mut *const *const i8 = &var_80;
        let var_d0_2: i64 = 2;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_98, &var_e8);
    }
    else if arg4 != 1
    {
        if arg5 > 0xffff
        {
            var_e8 = &data_519960;
            let var_e0_1: i64 = 1;
            let var_d8_4: i64 = 8;
            let mut var_d0: i64;
            var_d0 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_e8);
            /* no return */
        }
        
        var_e8 = &var_50;
        var_e0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        let var_d8_2: *mut i64 = &var_b0;
        let var_d0_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
        let var_c8_2: i64 = 0;
        let var_c0_1: i16 = arg5;
        var_80 = &data_41cfd0;
        let var_78_2: i64 = 2;
        let var_60_1: *mut c_void = &data_41d528;
        let var_58_1: i64 = 2;
        let var_70_2: *mut *const *const i8 = &var_e8;
        let var_68_2: i64 = 3;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_98, &var_80);
    }
    else
    {
        var_80 = &var_50;
        let var_78: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        let var_70: *mut i64 = &var_b0;
        let var_68: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
        var_e8 = &data_41cfd0;
        var_e0 = 2;
        let var_c8: i64 = 0;
        let var_d8: *mut *const *const i8 = &var_80;
        let var_d0_1: i64 = 2;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_98, &var_e8);
    }
    var_e8 = var_98;
    let var_88: i64;
    uu_stat::pad_and_print::h4c659c1797f3ded6(var_e0, var_88, *arg2.byte_offset(2), arg3, arg6);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_e8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(&var_b0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_40)
}
