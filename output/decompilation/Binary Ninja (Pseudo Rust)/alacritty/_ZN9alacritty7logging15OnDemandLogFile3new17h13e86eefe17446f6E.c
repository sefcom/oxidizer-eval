
  fn alacritty::logging::OnDemandLogFile::new::h13e86eefe17446f6(arg1: *mut i128) -> i64

{
    let mut var_78: i128;
    std::env::temp_dir::h4c6b7a08795666f1(&var_78);
    let mut rax: i32;
    let mut rdx: u64;
    rax = std::process::id::hbddb6ac2895e6a42();
    let mut var_98: i32 = rax;
    let mut var_b0: *mut i32 = &var_98;
    let var_a8: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    let mut var_60: *mut *mut c_void = &data_c831c0;
    let var_58: i64 = 2;
    let var_40: i64 = 0;
    let var_50: *mut *mut i32 = &var_b0;
    let var_48: i64 = 1;
    let mut var_30: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_30, 0, rdx, &var_60);
    std::path::PathBuf::push::h342a82019f63c584(&var_78, &var_30);
    let var_70: i64;
    std::env::set_var::hd696746618852d1e("ALACRITTY_LOGalacritty/src/loggi…", 0xd, var_70);
    var_98 = var_78;
    var_60 = -0x8000000000000000;
    var_b0 = 1;
    let var_a8_1: i64 = 1;
    let var_a0: i8 = 0;
    let rax_2: u64 = alloc::boxed::Box$LT$T$GT$::new::h067cbba7e84e9e92(&var_b0);
    let zmm0_1: i128 = var_60;
    *arg1.byte_offset(0x28) = var_50;
    *arg1.byte_offset(0x18) = zmm0_1;
    *arg1.byte_offset(0x38) = rax_2;
    *arg1 = var_98;
    let result: i64;
    arg1[1] = result;
    result
}
