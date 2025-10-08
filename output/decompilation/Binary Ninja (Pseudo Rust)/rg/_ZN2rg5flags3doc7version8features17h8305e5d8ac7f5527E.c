
  fn rg::flags::doc::version::features::h8305e5d8ac7f5527(arg1: *mut i128) -> i64

{
    let mut var_88: i64 = 0;
    let var_80: i64 = 8;
    let result: i64 = 0;
    let mut var_60: *const i8 = "-\n_rg() {\n  local i cur prev o…";
    let var_58: i64 = 1;
    let mut var_70: *const *const i8 = &var_60;
    let var_68: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    let mut var_50: *mut c_void = &data_7eacf0;
    let var_48: i64 = 2;
    let var_30: i64 = 0;
    let var_40: *mut *const *const i8 = &var_70;
    let var_38: i64 = 1;
    let mut var_20: ();
    let rdx: u64;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_20, 0, rdx, &var_50);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_88, &var_20);
    arg1[1] = result;
    *arg1 = var_88;
    result
}
