
  fn bat::input::Input::from_reader::h5c93c8a2e0344023(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let var_80: i64 = arg2;
    let mut var_88: i64 = -0x7fffffffffffffff;
    let mut var_70: i128;
    bat::input::InputKind::description::hc1a183838fcaf6dc(&var_70, &var_88);
    arg1[0x13] = arg3;
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
