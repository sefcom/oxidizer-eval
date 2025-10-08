
  fn bat::assets::HighlightingAssets::from_binary::h996409616138bffe(arg1: *mut i128) -> *mut i128

{
    let var_38: *mut c_void = &data_4a0048;
    let mut var_28: i128;
    bat::assets::get_integrated_themeset::h537b3cba0b22caf3(&var_28);
    *arg1.byte_offset(0x18) = -0x8000000000000000;
    *arg1 = -0x8000000000000000;
    arg1[1] = 0xf1a71;
    *arg1.byte_offset(0x68) = var_28;
    let var_18: i64;
    *arg1.byte_offset(0x78) = var_18;
    arg1[8] = 0;
    arg1
}
