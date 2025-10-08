
  int64_t bat::output::BuiltinPager::new::h5052a4e4c2ea861d(int128_t* arg1)

{
    int128_t var_88;
    minus::pager::Pager::new::hed592299e9df6bcc(&var_88);
    int128_t var_48;
    _$LT$minus..pager..Pager$u20$as$u20$core..clone..Clone$GT$::clone::h0a045ed1a1d3a159(&var_48, 
        &var_88);
    int128_t var_38;
    int128_t var_58 = var_38;
    int128_t var_68 = var_48;
    int64_t result = -0x8000000000000000;
    int64_t var_b8 = 0;
    char var_90 = 0;
    void var_28;
    std::thread::Builder::spawn_unchecked::h62eb7994e13c58ea(&var_28, &var_b8, &var_68);
    core::result::Result$LT$T$C$E$GT$::expect::h0e103480dd3d7923(&var_b8, &var_28);
    arg1[3] = result;
    arg1[2] = var_b8;
    int128_t zmm0_1 = var_88;
    int128_t var_78;
    arg1[1] = var_78;
    *arg1 = zmm0_1;
    return result;
}
