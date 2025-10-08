
  fn rg::flags::doc::version::runtime_cpu_features::hcc737a43f582dc3e(arg1: *mut i128) -> i64

{
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 8;
    let result: i64 = 0;
    let mut var_d0: *const i8 = "+internal error: entered unreach…";
    let var_c8: i64 = 1;
    let mut var_e0: *const *const i8 = &var_d0;
    let var_d8: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    let mut var_a8: *mut c_void = &data_7eac00;
    let var_a0: i64 = 2;
    let var_88: i64 = 0;
    let var_98: *mut *const *const i8 = &var_e0;
    let var_90: i64 = 1;
    let mut var_78: ();
    let rdx: u64;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_78, 0, rdx, &var_a8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_c0, &var_78);
    let mut rax: u8;
    let mut rdx_2: u64;
    rax = std_detect::detect::cache::test::h42d452cfc9d2956f(9);
    let mut rbp: *const i8 = "-\n_rg() {\n  local i cur prev o…";
    let mut rax_1: *const i8 = "-\n_rg() {\n  local i cur prev o…";
    
    if rax != 0
    {
        rax_1 = "+internal error: entered unreach…";
    }
    
    var_d0 = rax_1;
    let var_c8_1: i64 = 1;
    var_e0 = &var_d0;
    let var_d8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_a8 = &data_7eac20;
    let var_a0_1: i64 = 2;
    let var_88_1: i64 = 0;
    let var_98_1: *mut *const *const i8 = &var_e0;
    let var_90_1: i64 = 1;
    let mut var_60: ();
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_60, 0, rdx_2, &var_a8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_c0, &var_60);
    let mut rax_2: u8;
    let mut rdx_4: u64;
    rax_2 = std_detect::detect::cache::test::h42d452cfc9d2956f(0xf);
    
    if rax_2 != 0
    {
        rbp = "+internal error: entered unreach…";
    }
    
    var_d0 = rbp;
    let var_c8_2: i64 = 1;
    var_e0 = &var_d0;
    let var_d8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_a8 = &data_7eac40;
    let var_a0_2: i64 = 2;
    let var_88_2: i64 = 0;
    let var_98_2: *mut *const *const i8 = &var_e0;
    let var_90_2: i64 = 1;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_48, 0, rdx_4, &var_a8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_c0, &var_48);
    arg1[1] = result;
    *arg1 = var_c0;
    result
}
