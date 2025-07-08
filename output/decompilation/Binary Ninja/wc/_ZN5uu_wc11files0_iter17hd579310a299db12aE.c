
  int64_t uu_wc::files0_iter::hd579310a299db12a(int128_t* arg1, int64_t arg2, char arg3, int128_t* arg4)

{
    int128_t var_48;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h073544539c35aaaa(&var_48, 
        0x2000, arg2, arg3);
    int128_t var_80 = var_48;
    int64_t rax_1 = arg4[1];
    int128_t zmm0 = *arg4;
    int128_t var_98 = zmm0;
    int128_t var_28;
    arg1[4] = *var_28[8];
    int64_t var_18;
    *(arg1 + 0x48) = var_18;
    int128_t var_38;
    arg1[3] = var_38;
    arg1[2] = var_80;
    *arg1 = zmm0;
    arg1[1] = rax_1;
    int64_t result = var_80;
    *(arg1 + 0x18) = result;
    arg1[5] = 0;
    return result;
}
