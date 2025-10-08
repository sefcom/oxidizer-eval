
  fn bat::output::BuiltinPager::new::h5052a4e4c2ea861d(arg1: *mut i128) -> i64

{
    let mut var_88: i128;
    minus::pager::Pager::new::hed592299e9df6bcc(&var_88);
    let mut var_48: i128;
    _$LT$minus..pager..Pager$u20$as$u20$core..clone..Clone$GT$::clone::h0a045ed1a1d3a159(&var_48, 
        &var_88);
    let var_38: i128;
    let var_58: i128 = var_38;
    let mut var_68: i128 = var_48;
    let result: i64 = -0x8000000000000000;
    let mut var_b8: i64 = 0;
    let var_90: i8 = 0;
    let mut var_28: ();
    std::thread::Builder::spawn_unchecked::h62eb7994e13c58ea(&var_28, &var_b8, &var_68);
    core::result::Result$LT$T$C$E$GT$::expect::h0e103480dd3d7923(&var_b8, &var_28);
    arg1[3] = result;
    arg1[2] = var_b8;
    let zmm0_1: i128 = var_88;
    let var_78: i128;
    arg1[1] = var_78;
    *arg1 = zmm0_1;
    result
}
