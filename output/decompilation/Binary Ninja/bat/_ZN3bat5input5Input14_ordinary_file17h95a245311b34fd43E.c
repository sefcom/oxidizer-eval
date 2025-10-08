
  int128_t* bat::input::Input::_ordinary_file::h95a245311b34fd43(int128_t* arg1, int64_t arg2, uint64_t arg3)

{
    int128_t var_e0;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_e0, arg2, arg3);
    int32_t var_c8;
    std::fs::metadata::h4d9fc7ae25563c19(&var_c8, arg2);
    int64_t var_108;
    int64_t var_78;
    int64_t rax_1;
    int64_t rcx;
    
    if (var_c8 != 2)
    {
        rcx = var_78;
        rax_1 = 1;
    }
    else
    {
        int64_t var_c0;
        int64_t var_100_1 = var_c0;
        var_108 = 1;
        rcx = core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h405c8beab0de965b(&var_108);
        rax_1 = 0;
    }
    
    int64_t var_f8 = -0x8000000000000000;
    var_108 = rax_1;
    int64_t var_100_2 = rcx;
    bat::input::InputKind::description::hc1a183838fcaf6dc(&var_c8, &var_e0);
    int64_t var_e8;
    arg1[2] = var_e8;
    int128_t zmm0 = var_108;
    arg1[1] = var_f8;
    *arg1 = zmm0;
    *(arg1 + 0x88) = var_e0;
    int64_t var_d0;
    *(arg1 + 0x98) = var_d0;
    *(arg1 + 0x28) = var_c8;
    int128_t var_b8;
    *(arg1 + 0x38) = var_b8;
    int128_t var_a8;
    *(arg1 + 0x48) = var_a8;
    int128_t var_98;
    *(arg1 + 0x58) = var_98;
    int128_t var_88;
    *(arg1 + 0x68) = var_88;
    *(arg1 + 0x78) = var_78;
    return arg1;
}
