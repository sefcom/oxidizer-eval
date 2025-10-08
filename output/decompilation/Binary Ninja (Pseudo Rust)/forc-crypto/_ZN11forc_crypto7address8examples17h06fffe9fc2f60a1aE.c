
  fn forc_crypto::address::examples::h06fffe9fc2f60a1a() -> i64

{
    let mut var_58: *mut *mut c_void = &data_a2f248;
    let var_50: i64 = 1;
    let mut var_78: ();
    let var_48: *mut c_void = &var_78;
    let var_40: i128 = {0};
    let mut var_70: ();
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_70, 
        "    # Convert an address to anot…", 0x84, &var_58);
    let mut var_28: ();
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_70, 1);
    let mut result: i64;
    let mut rdx: i64;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$forc_crypto..address..Args$GT$::hfcd41aab899c86aa(&var_70);
    result
}
