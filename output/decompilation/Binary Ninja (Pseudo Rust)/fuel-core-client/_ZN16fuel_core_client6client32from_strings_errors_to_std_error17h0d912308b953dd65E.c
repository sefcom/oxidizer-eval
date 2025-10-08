
  fn fuel_core_client::client::from_strings_errors_to_std_error::h0d912308b953dd65(arg1: *mut i64) -> i64

{
    let mut var_40: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h97fb9eda06d64d42(&var_40, arg1);
    let mut var_58: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_58, "Response errors; subIdcontractId…", 0xf);
    let var_48: i64;
    let var_68: i64 = var_48;
    let mut var_78: i128 = var_58;
    let mut var_20: ();
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h73fe1b5f25bc7699(&var_20, &var_40, &var_78);
    std::io::error::Error::new::h73c260a684a0fa2c(0x28, &var_20)
}
