
  int64_t firecracker::seccomp::get_custom_filters::hc4381478633696bc(int128_t* arg1, int32_t arg2)

{
    void var_40;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h8479b8c1b76c1df6(&var_40, 
        arg2);
    int64_t result_1;
    vmm::seccomp::deserialize_binary::h778388351cf38cc4(&result_1, &var_40);
    int64_t result = result_1;
    int128_t var_c0;
    int128_t var_b0;
    
    if (result)
    {
        int64_t result_2 = result;
        int128_t var_90 = var_c0;
        int128_t var_80 = var_b0;
        int64_t var_a0;
        int64_t var_70 = var_a0;
        return firecracker::seccomp::filter_thread_categories::ha917c4cd8472310f(arg1, &result_2);
    }
    
    int128_t var_68 = var_c0;
    int128_t var_58 = var_b0;
    *(arg1 + 0x18) = var_b0;
    *(arg1 + 8) = var_c0;
    *arg1 = 0;
    return result;
}
