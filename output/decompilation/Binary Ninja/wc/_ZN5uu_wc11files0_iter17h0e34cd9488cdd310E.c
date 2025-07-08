
  int64_t uu_wc::files0_iter::h0e34cd9488cdd310(int128_t* arg1, int32_t arg2, int128_t* arg3)

{
    int128_t var_40;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf703b41d8f9676a8(&var_40, 
        0x2000, arg2);
    int128_t var_70 = var_40;
    int64_t rax = arg3[1];
    int128_t zmm0 = *arg3;
    int128_t var_88 = zmm0;
    int128_t var_20;
    arg1[4] = *var_20[8];
    int128_t var_30;
    arg1[3] = var_30;
    arg1[2] = var_70;
    *arg1 = zmm0;
    arg1[1] = rax;
    int64_t result = var_70;
    *(arg1 + 0x18) = result;
    *(arg1 + 0x48) = 0;
    return result;
}
