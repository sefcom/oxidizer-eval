
  fn firecracker::api_server::parsed_request::describe_with_body::hf46da4cd4417a7fb(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64) -> i64

{
    let mut var_a1: i8 = arg2;
    let mut var_70: i64 = arg3;
    let var_68: i64 = arg4;
    let mut var_a0: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_a0, arg5, arg6);
    let temp0: i8 = var_a0;
    let mut rdx_1: u64 = 0x16;
    let var_90: u64;
    
    if temp0 == 0
    {
        rdx_1 = var_90;
    }
    let mut rsi_1: *mut c_void = "inconvertible to UTF-8 with body…";
    let var_98: *mut c_void;
    
    if temp0 == 0
    {
        rsi_1 = var_98;
    }
    let mut var_30: ();
    let rdx_2: u64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_30, rsi_1, rdx_1);
    var_a0 = &var_a1;
    let var_98_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
        _$LT$micro_http..common..Method$u20$as$u20$core..fmt..Debug$GT$::fmt::h82e2c33064e74b2c;
    let var_90_1: *mut i64 = &var_70;
    let var_88: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h9e623ec8df216556;
    let var_80: *mut c_void = &var_30;
    let var_78: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h71b66d641ee8f111;
    let mut var_60: *mut c_void = &data_7a37e0;
    let var_58: i64 = 3;
    let var_40: i64 = 0;
    let var_50: *mut i8 = &var_a0;
    let var_48: i64 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(arg1, 0, rdx_2, &var_60);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_30)
}
