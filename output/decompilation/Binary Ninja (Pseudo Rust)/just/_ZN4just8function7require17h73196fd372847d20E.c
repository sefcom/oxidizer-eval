
  fn just::function::require::h73196fd372847d20(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_28: i64 = arg3;
    let var_20: u64 = arg4;
    let mut var_68: i32;
    let rdx: u64 = just::which::which::hd176e22496e4e776(&var_68, *arg2, arg3, arg4);
    let mut rax_1: i64;
    let var_60: i64;
    let mut var_58: i128;
    
    if var_68 == 1
    {
        *arg1.byte_offset(0x10) = var_58;
        arg1[1] = var_60;
        rax_1 = 1;
    }
    else if -(var_60) != -0x8000000000000000
    {
        *arg1.byte_offset(0x10) = var_58;
        arg1[1] = var_60;
        rax_1 = 0;
    }
    else
    {
        let mut var_18: *mut i64 = &var_28;
        let var_10_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_68 = &data_830000;
        let var_60_1: i64 = 2;
        let var_48_1: i64 = 0;
        var_58 = &var_18;
        *var_58[8] = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx, &var_68);
        rax_1 = 1;
    }
    *arg1 = rax_1;
    arg1
}
