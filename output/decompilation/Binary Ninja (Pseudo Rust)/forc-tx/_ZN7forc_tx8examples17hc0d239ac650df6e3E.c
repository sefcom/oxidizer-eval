
  fn forc_tx::examples::hc0d239ac650df6e3() -> i64

{
    let mut var_d8: *mut *mut c_void = &data_5d13a8;
    let var_d0: i64 = 1;
    let mut var_e0: ();
    let var_c8: *mut c_void = &var_e0;
    let var_c0: i128 = {0};
    let mut var_70: i128;
    core::option::Option$LT$T$GT$::map_or_else::h2f8585fb2c8c23bc(&var_70, 
        "    # Script example\n    forc t…", 0xc6, &var_d8);
    var_d8 = &data_5d13b8;
    let var_d0_1: i64 = 1;
    let var_c8_1: *mut c_void = &var_e0;
    let var_c0_1: i128 = {0};
    let mut var_58: i128;
    core::option::Option$LT$T$GT$::map_or_else::h2f8585fb2c8c23bc(&var_58, 
        "    # Multiple inputs\n    forc …", 0x8a5, &var_d8);
    let zmm0: i128 = var_58;
    var_d8 = &data_5d13c8;
    let var_d0_2: i64 = 1;
    let var_c8_2: *mut c_void = &var_e0;
    let var_c0_2: i128 = {0};
    let mut var_40: i128;
    core::option::Option$LT$T$GT$::map_or_else::h2f8585fb2c8c23bc(&var_40, 
        "    # An example constructing a …", 0xa9b, &var_d8);
    var_d8 = var_70;
    let var_60: i64;
    let var_c8_3: i64 = var_60;
    let var_c0_3: i128 = zmm0;
    let var_48: i64;
    let var_b0: i64 = var_48;
    let var_a8: i128 = var_40;
    let var_30: i64;
    let var_98: i64 = var_30;
    let mut var_28: ();
    alloc::str::join_generic_copy::h36acb9419b7494de(&var_28, &var_d8);
    let mut result: i64;
    let mut rdx: i64;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::h3595125297bd929d(&var_28);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::h28e83d271d4d3334(
        &var_d8);
    result
}
