
  fn rg::flags::doc::version::generate_short::h331b40a84196a55d(arg1: *mut i64) -> i64

{
    let mut var_58: ();
    let rdx: u64 = rg::flags::doc::version::generate_digits::hfdf8238140a9a514(&var_58);
    let mut var_68: *mut c_void = &var_58;
    let var_60: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_40: *mut *mut [i8; 0x10] = &data_7eaab8;
    let var_38: i64 = 1;
    let var_20: i64 = 0;
    let var_30: *mut *mut c_void = &var_68;
    let var_28: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(arg1, 0, rdx, &var_40);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_58)
}
