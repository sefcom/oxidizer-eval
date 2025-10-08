
  fn forc_crypto::keys::new_key::examples::h885697e6381d1c74() -> i64

{
    let mut var_d8: *mut *mut c_void = &data_a2f2a8;
    let var_d0: i64 = 1;
    let mut var_e0: ();
    let var_c8: *mut c_void = &var_e0;
    let var_c0: i128 = {0};
    let mut var_70: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_70, 
        "    # Creates a new key default …", 0x4e, &var_d8);
    var_d8 = &data_a2f2b8;
    let var_d0_1: i64 = 1;
    let var_c8_1: *mut c_void = &var_e0;
    let var_c0_1: i128 = {0};
    let mut var_58: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_58, 
        "    # Creates a new key for peer…", 0x48, &var_d8);
    let zmm0: i128 = var_58;
    var_d8 = &data_a2f2c8;
    let var_d0_2: i64 = 1;
    let var_c8_2: *mut c_void = &var_e0;
    let var_c0_2: i128 = {0};
    let mut var_40: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_40, 
        "    # Creates a new key for bloc…", 0x5a, &var_d8);
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
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_d8, 3);
    let mut result: i64;
    let mut rdx: i64;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::hac1f933aff3df9e0(
        &var_d8);
    result
}
