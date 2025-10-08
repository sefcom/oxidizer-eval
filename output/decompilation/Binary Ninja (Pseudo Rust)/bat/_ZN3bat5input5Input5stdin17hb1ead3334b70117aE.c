
  fn bat::input::Input::stdin::hb1ead3334b70117a(arg1: *mut i64) -> *mut i64

{
    let mut var_88: i64 = -0x8000000000000000;
    let mut var_70: i128;
    bat::input::InputKind::description::hc1a183838fcaf6dc(&var_70, &var_88);
    let var_78: i64;
    arg1[0x13] = var_78;
    *arg1.byte_offset(0x88) = var_88;
    *arg1 = 0;
    arg1[2] = -0x8000000000000000;
    *arg1.byte_offset(0x28) = var_70;
    let var_60: i128;
    *arg1.byte_offset(0x38) = var_60;
    let var_50: i128;
    *arg1.byte_offset(0x48) = var_50;
    let var_40: i128;
    *arg1.byte_offset(0x58) = var_40;
    let var_30: i128;
    *arg1.byte_offset(0x68) = var_30;
    let var_20: i128;
    *arg1.byte_offset(0x78) = var_20;
    arg1
}
