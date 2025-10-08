
  int64_t alacritty::logging::Logger::new::h12092a1bc3938b41(int128_t* arg1, int128_t* arg2)

{
    int128_t var_108;
    alacritty::logging::OnDemandLogFile::new::h13e86eefe17446f6(&var_108);
    int128_t zmm0 = var_108;
    int32_t var_150 = 0;
    char var_14c = 0;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hdb3f65e9e1f99efd(&var_108, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    int128_t var_60 = var_108;
    int128_t var_d8;
    int64_t var_c8 = *var_d8[8];
    int128_t var_e8;
    int128_t var_d8_1 = var_e8;
    int128_t var_f8;
    int128_t var_e8_1 = var_f8;
    int128_t var_f8_1 = zmm0;
    var_108 = var_150;
    int32_t var_c0 = 0;
    char var_bc = 0;
    int128_t var_ab = var_60;
    *var_ab[0xb] = *var_f8[8];
    int64_t var_98 = var_e8;
    int128_t zmm0_1 = *arg2;
    int128_t zmm1_1 = arg2[1];
    int32_t var_90 = 0;
    char var_8c = 0;
    int64_t result;
    int32_t rdx;
    result = std::time::Instant::now::h767314cc8c6c5886();
    arg1[7] = *var_d8[8];
    arg1[6] = var_e8;
    arg1[5] = var_f8;
    arg1[4] = zmm0;
    arg1[3] = var_150;
    *arg1 = var_c0;
    int128_t var_63;
    arg1[1] = var_63;
    arg1[2] = var_ab;
    *(arg1 + 0x88) = zmm0_1;
    *(arg1 + 0x98) = *zmm1_1[8];
    *(arg1 + 0x78) = var_90;
    arg1[0xa] = result;
    *(arg1 + 0xa8) = rdx;
    return result;
}
