
  fn uu_env::parse_signal_value::hb33c53ad79b226c6(arg1: *mut u64, arg2: *mut i128, arg3: u64) -> i64

{
    let mut var_88: ();
    alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::hf8ab82a15f19393f(&var_88, arg2, arg3);
    let var_80: *mut i128;
    let var_78: u64;
    let mut rax: i8;
    let mut rdx: i64;
    rax = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(var_80, var_78);
    let mut var_60: i64 = 0;
    let var_58: *mut i128 = arg2;
    let var_50: u64 = arg3;
    let var_48: i8 = 1;
    let mut var_70: *mut i64 = &var_60;
    let var_68: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let mut var_b8: *mut c_void = &data_510868;
    let var_b0: i64 = 2;
    let var_98: i64 = 0;
    let var_a8: *mut *mut i64 = &var_70;
    let mut var_a0: i64 = 1;
    let mut var_40: i128;
    core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_40, &var_b8);
    var_a0 = 0x7d;
    var_b8 = var_40;
    let var_30: i64;
    let var_a8_1: i64 = var_30;
    let rax_2: u64 = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_b8);
    
    if (rax & rdx != 0) == 0
    {
        *arg1 = rax_2;
        arg1[1] = &data_5108a8;
    }
    else
    {
        arg1[1] = rdx;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hd10305c58afc2d26(rax_2, &data_5108a8);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0f81e6c32c02414a(&var_88)
}
