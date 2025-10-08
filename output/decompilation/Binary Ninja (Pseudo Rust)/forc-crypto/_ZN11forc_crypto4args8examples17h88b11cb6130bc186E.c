
  fn forc_crypto::args::examples::h88b11cb6130bc186() -> i64

{
    let mut var_118: *mut *mut [i8; 0xd9] = &data_a2f258;
    let var_110: i64 = 1;
    let mut var_120: ();
    let var_108: *mut c_void = &var_120;
    let var_100: i128 = {0};
    let mut var_58: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_58, 
        "    # Hashes an argument with SH…", 0x42, &var_118);
    var_118 = &data_a2f268;
    let var_110_1: i64 = 1;
    let var_108_1: *mut c_void = &var_120;
    let var_100_1: i128 = {0};
    let mut var_b0: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_b0, 
        "    # Hashes an argument with Ke…", 0x48, &var_118);
    let zmm0: i128 = var_b0;
    var_118 = &data_a2f278;
    let var_110_2: i64 = 1;
    let var_108_2: *mut c_void = &var_120;
    let var_100_2: i128 = {0};
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_b0, 
        "    # Hashes a file path with SH…", 0x44, &var_118);
    let zmm0_1: i128 = var_b0;
    var_118 = &data_a2f288;
    let var_110_3: i64 = 1;
    let var_108_3: *mut c_void = &var_120;
    let var_100_3: i128 = {0};
    let mut var_40: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_40, 
        "    # Hashes a file path with Ke…", 0x4a, &var_118);
    var_118 = var_58;
    let var_48: i64;
    let var_108_4: i64 = var_48;
    let var_100_4: i128 = zmm0;
    let var_a0: i64;
    let var_f0: i64 = var_a0;
    let var_e8: i128 = zmm0_1;
    let var_d8: i64 = var_a0;
    let var_d0: i128 = var_40;
    let var_30: i64;
    let var_c0: i64 = var_30;
    let mut var_28: ();
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_118, 4);
    let mut result: i64;
    let mut rdx: i64;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$4$u5d$$GT$::h7bab920fcd67c50d(
        &var_118);
    result
}
