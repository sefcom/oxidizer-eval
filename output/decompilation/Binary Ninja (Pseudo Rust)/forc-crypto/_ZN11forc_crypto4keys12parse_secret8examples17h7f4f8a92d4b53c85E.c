
  fn forc_crypto::keys::parse_secret::examples::h7f4f8a92d4b53c85() -> i64

{
    let mut var_88: *mut *mut [i8; 0xe3] = &data_a2f2d8;
    let var_80: i64 = 1;
    let mut var_90: ();
    let var_78: *mut c_void = &var_90;
    let var_70: i128 = {0};
    let mut var_58: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_58, 
        "    # Parses the secret of a blo…", 0x8f, &var_88);
    var_88 = &data_a2f2e8;
    let var_80_1: i64 = 1;
    let var_78_1: *mut c_void = &var_90;
    let var_70_1: i128 = {0};
    let mut var_40: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_40, 
        "    # Parses the secret of a pee…", 0x91, &var_88);
    var_88 = var_58;
    let var_48: i64;
    let var_78_2: i64 = var_48;
    let var_70_2: i128 = var_40;
    let var_30: i64;
    let var_60: i64 = var_30;
    let mut var_28: ();
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_88, 2);
    let mut result: i64;
    let mut rdx: i64;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$forc_crypto..keys..vanity..HexMatcher$GT$::h90d4fc5912b41e43(
        &var_88);
    result
}
