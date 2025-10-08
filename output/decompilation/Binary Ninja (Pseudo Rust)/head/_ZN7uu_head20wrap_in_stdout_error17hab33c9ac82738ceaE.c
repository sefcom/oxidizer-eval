
  fn uu_head::wrap_in_stdout_error::hab33c9ac82738cea(arg1: i64) -> i64

{
    let mut var_68: i64 = arg1;
    let rax: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(arg1);
    let mut var_60: *mut i64 = &var_68;
    let var_58: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
    let mut var_50: *mut *mut c_void = &data_4f7cd8;
    let var_48: i64 = 1;
    let var_30: i64 = 0;
    let var_40: *mut *mut i64 = &var_60;
    let var_38: i64 = 1;
    let mut var_20: ();
    core::option::Option$LT$T$GT$::map_or_else::h4698243df58dc779(&var_20, &var_50);
    let result: i64 = std::io::error::Error::new::ha2b5f63706640a17(rax, &var_20);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hcee48fbfcf3aefed(&var_68);
    result
}
