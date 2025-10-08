
  int64_t alacritty::logging::OnDemandLogFile::new::h13e86eefe17446f6(int128_t* arg1)

{
    int128_t var_78;
    std::env::temp_dir::h4c6b7a08795666f1(&var_78);
    int32_t rax;
    uint64_t rdx;
    rax = std::process::id::hbddb6ac2895e6a42();
    int32_t var_98 = rax;
    int32_t* var_b0 = &var_98;
    uint64_t (* var_a8)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    void** const var_60 = &data_c831c0;
    int64_t var_58 = 2;
    int64_t var_40 = 0;
    int32_t** var_50 = &var_b0;
    int64_t var_48 = 1;
    void var_30;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_30, 0, rdx, &var_60);
    std::path::PathBuf::push::h342a82019f63c584(&var_78, &var_30);
    int64_t var_70;
    std::env::set_var::hd696746618852d1e("ALACRITTY_LOGalacritty/src/loggi…", 0xd, var_70);
    var_98 = var_78;
    var_60 = -0x8000000000000000;
    var_b0 = 1;
    int64_t var_a8_1 = 1;
    char var_a0 = 0;
    uint64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::h067cbba7e84e9e92(&var_b0);
    int128_t zmm0_1 = var_60;
    *(arg1 + 0x28) = var_50;
    *(arg1 + 0x18) = zmm0_1;
    *(arg1 + 0x38) = rax_2;
    *arg1 = var_98;
    int64_t result;
    arg1[1] = result;
    return result;
}
