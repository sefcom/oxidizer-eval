
  fn uu_chroot::supplemental_gids::hf985b44dc073fbb6(arg1: *mut i64, arg2: uid_t) -> i64

{
    let mut var_108: i64;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_108, arg2);
    
    if 0 + -(var_108)
    {
        *arg1 = 0;
        arg1[1] = 4;
        arg1[2] = 0;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::hc41fe6e9114c0a06(&var_108);
    }
    
    let var_98: i128;
    let var_18: i128 = var_98;
    let var_a8: i128;
    let var_28: i128 = var_a8;
    let var_b8: i128;
    let var_38: i128 = var_b8;
    let var_c8: i128;
    let var_48: i128 = var_c8;
    let var_d8: i128;
    let var_58: i128 = var_d8;
    let var_e8: i128;
    let var_68: i128 = var_e8;
    let var_f8: i128;
    let var_78: i128 = var_f8;
    let mut var_88: i128 = var_108;
    uucore::features::entries::Passwd::belongs_to::h86a03abed7028785(arg1, &var_88);
    core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::hb014c78361e81f37(&var_108)
}
