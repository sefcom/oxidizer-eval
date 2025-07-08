
  fn uu_seq::write_value_float::h583f3c53a243a2bf(arg1: i64, arg2: *mut i64) -> i64

{
    let mut var_a0: *mut i64 = arg2;
    let rax: i8 = _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h03c6b2bee9905bee(arg2, &data_423b30);
    let mut rax_1: i8;
    
    if rax == 0
    {
        rax_1 = _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h03c6b2bee9905bee(arg2, &data_423b58);
    }
    
    let mut var_d8: *mut c_void;
    let mut var_98: *mut *mut i64;
    let rcx: i64;
    let rdx: i64;
    
    if rax == 0 && rax_1 == 0
    {
        var_98 = &var_a0;
        let var_90_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2233a37d2c19bdda;
        let var_88_1: i64 = rcx;
        let var_80_1: i64 = 0;
        let var_78_1: i64 = rdx;
        let var_70_1: i64 = 0;
        __builtin_memcpy(&var_d8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
        let var_b8_1: i64 = 0;
        let var_b0_1: i64 = 0x800000020;
    }
    else
    {
        var_98 = &var_a0;
        let var_90: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2233a37d2c19bdda;
        let var_88: i64 = rcx;
        let var_80: i64 = 0;
        let var_78: i64 = rdx;
        let var_70: i64 = 0;
        __builtin_memcpy(&var_d8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
        let var_b8: i64 = 0;
        let var_b0: i64 = 0x20;
    }
    let var_a8: i8 = 1;
    let mut var_68: *mut c_void = &data_4176c0;
    let var_60: i64 = 1;
    let var_48: *mut i64 = &var_d8;
    let var_40: i64 = 1;
    let var_58: *mut *mut *mut i64 = &var_98;
    let var_50: i64 = 3;
    let mut var_38: ();
    core::option::Option$LT$T$GT$::map_or_else::h91a2236e2fc5d115(&var_38, &var_68);
    var_98 = &var_38;
    let var_90_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_d8 = &data_4176c0;
    let var_d0: i64 = 1;
    let var_b8_2: i64 = 0;
    let var_c8: *mut *mut *mut i64 = &var_98;
    let var_c0: i64 = 1;
    let result: i64 = std::io::Write::write_fmt::ha89a837e03ebc8db(arg1, &var_d8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&var_38);
    result
}
