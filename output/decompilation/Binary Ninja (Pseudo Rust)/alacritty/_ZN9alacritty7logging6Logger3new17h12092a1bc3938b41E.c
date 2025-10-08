
  fn alacritty::logging::Logger::new::h12092a1bc3938b41(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut var_108: i128;
    alacritty::logging::OnDemandLogFile::new::h13e86eefe17446f6(&var_108);
    let zmm0: i128 = var_108;
    let var_150: i32 = 0;
    let var_14c: i8 = 0;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hdb3f65e9e1f99efd(&var_108, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    let var_60: i128 = var_108;
    let var_d8: i128;
    let var_c8: i64 = *var_d8[8];
    let var_e8: i128;
    let var_d8_1: i128 = var_e8;
    let var_f8: i128;
    let var_e8_1: i128 = var_f8;
    let var_f8_1: i128 = zmm0;
    var_108 = var_150;
    let var_c0: i32 = 0;
    let var_bc: i8 = 0;
    let mut var_ab: i128 = var_60;
    *var_ab[0xb] = *var_f8[8];
    let var_98: i64 = var_e8;
    let zmm0_1: i128 = *arg2;
    let zmm1_1: i128 = arg2[1];
    let var_90: i32 = 0;
    let var_8c: i8 = 0;
    let mut result: i64;
    let mut rdx: i32;
    result = std::time::Instant::now::h767314cc8c6c5886();
    arg1[7] = *var_d8[8];
    arg1[6] = var_e8;
    arg1[5] = var_f8;
    arg1[4] = zmm0;
    arg1[3] = var_150;
    *arg1 = var_c0;
    let var_63: i128;
    arg1[1] = var_63;
    arg1[2] = var_ab;
    *arg1.byte_offset(0x88) = zmm0_1;
    *arg1.byte_offset(0x98) = *zmm1_1[8];
    *arg1.byte_offset(0x78) = var_90;
    arg1[0xa] = result;
    *arg1.byte_offset(0xa8) = rdx;
    result
}
