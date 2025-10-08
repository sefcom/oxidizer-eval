
  fn uu_install::copy_normal_file::h632dca94ec623107(arg1: i64, arg2: u64, arg3: i64, arg4: u64) -> u64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::fs::copy::hdf72ceb0cf08dc6a(arg1, arg2, arg3);
    let mut var_a8: i64 = rax;
    let var_a0: i64 = rdx;
    
    if (rax & 1) == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h2f84af0ddcda00cd(&var_a8);
        return 0;
    }
    
    let var_b0_1: i64 = rdx;
    let mut var_98: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_98, arg1, arg2);
    let mut var_80: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_80, arg3, arg4);
    let var_88: i64;
    let var_48_1: i64 = var_88;
    let var_58_1: i128 = var_98;
    let var_40_1: i128 = var_80;
    let var_70: i64;
    let var_30_1: i64 = var_70;
    let var_60_1: i64 = rdx;
    let mut var_68: i64 = 8;
    alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_68)
}
