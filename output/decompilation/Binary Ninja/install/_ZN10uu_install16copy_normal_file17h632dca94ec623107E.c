
  uint64_t uu_install::copy_normal_file::h632dca94ec623107(int64_t arg1, uint64_t arg2, int64_t arg3, uint64_t arg4)

{
    int64_t rax;
    int64_t rdx;
    rax = std::fs::copy::hdf72ceb0cf08dc6a(arg1, arg2, arg3);
    int64_t var_a8 = rax;
    int64_t var_a0 = rdx;
    
    if (!(rax & 1))
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h2f84af0ddcda00cd(&var_a8);
        return 0;
    }
    
    int64_t var_b0_1 = rdx;
    int128_t var_98;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_98, arg1, arg2);
    int128_t var_80;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_80, arg3, arg4);
    int64_t var_88;
    int64_t var_48_1 = var_88;
    int128_t var_58_1 = var_98;
    int128_t var_40_1 = var_80;
    int64_t var_70;
    int64_t var_30_1 = var_70;
    int64_t var_60_1 = rdx;
    int64_t var_68 = 8;
    return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_68);
}
