
  fn rg::flags::doc::version::compile_cpu_features::h073ebd31727dfbbc(arg1: *mut i128) -> i64

{
    let mut var_b8: i64 = 0;
    let var_b0: i64 = 8;
    let result: i64 = 0;
    let mut var_c8: *const i8 = "+internal error: entered unreach…";
    let var_c0: i64 = 1;
    let mut var_d8: *const *const i8 = &var_c8;
    let var_d0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    let mut var_a0: *mut c_void = &data_7eac00;
    let var_98: i64 = 2;
    let var_80: i64 = 0;
    let var_90: *mut *const *const i8 = &var_d8;
    let var_88: i64 = 1;
    let mut var_70: ();
    let rdx: u64;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_70, 0, rdx, &var_a0);
    let rdx_2: u64 = alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_b8, &var_70);
    var_c8 = "-\n_rg() {\n  local i cur prev o…";
    let var_c0_1: i64 = 1;
    var_d8 = &var_c8;
    let var_d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_a0 = &data_7eac20;
    let var_98_1: i64 = 2;
    let var_80_1: i64 = 0;
    let var_90_1: *mut *const *const i8 = &var_d8;
    let var_88_1: i64 = 1;
    let mut var_58: ();
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_58, 0, rdx_2, &var_a0);
    let rdx_4: u64 = alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_b8, &var_58);
    var_c8 = "-\n_rg() {\n  local i cur prev o…";
    let var_c0_2: i64 = 1;
    var_d8 = &var_c8;
    let var_d0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_a0 = &data_7eac40;
    let var_98_2: i64 = 2;
    let var_80_2: i64 = 0;
    let var_90_2: *mut *const *const i8 = &var_d8;
    let var_88_2: i64 = 1;
    let mut var_40: ();
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_40, 0, rdx_4, &var_a0);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_b8, &var_40);
    arg1[1] = result;
    *arg1 = var_b8;
    result
}
