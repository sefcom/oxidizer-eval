
  fn bat::input::Input::_ordinary_file::h95a245311b34fd43(arg1: *mut i128, arg2: i64, arg3: u64) -> *mut i128

{
    let mut var_e0: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_e0, arg2, arg3);
    let mut var_c8: i32;
    std::fs::metadata::h4d9fc7ae25563c19(&var_c8, arg2);
    let mut var_108: i64;
    let var_78: i64;
    let mut rax_1: i64;
    let mut rcx: i64;
    
    if var_c8 != 2
    {
        rcx = var_78;
        rax_1 = 1;
    }
    else
    {
        let var_c0: i64;
        let var_100_1: i64 = var_c0;
        var_108 = 1;
        rcx = core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h405c8beab0de965b(&var_108);
        rax_1 = 0;
    }
    
    let var_f8: i64 = -0x8000000000000000;
    var_108 = rax_1;
    let var_100_2: i64 = rcx;
    bat::input::InputKind::description::hc1a183838fcaf6dc(&var_c8, &var_e0);
    let var_e8: i64;
    arg1[2] = var_e8;
    let zmm0: i128 = var_108;
    arg1[1] = var_f8;
    *arg1 = zmm0;
    *arg1.byte_offset(0x88) = var_e0;
    let var_d0: i64;
    *arg1.byte_offset(0x98) = var_d0;
    *arg1.byte_offset(0x28) = var_c8;
    let var_b8: i128;
    *arg1.byte_offset(0x38) = var_b8;
    let var_a8: i128;
    *arg1.byte_offset(0x48) = var_a8;
    let var_98: i128;
    *arg1.byte_offset(0x58) = var_98;
    let var_88: i128;
    *arg1.byte_offset(0x68) = var_88;
    *arg1.byte_offset(0x78) = var_78;
    arg1
}
