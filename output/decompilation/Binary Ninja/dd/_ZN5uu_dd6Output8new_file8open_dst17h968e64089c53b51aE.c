
  int32_t* uu_dd::Output::new_file::open_dst::h968e64089c53b51a(int32_t* arg1, int64_t arg2, int64_t arg3, char arg4, char arg5, char* arg6)

{
    int64_t var_28 = 0x1b600000000;
    int32_t var_20 = 0x100;
    char var_1c = arg5 ^ 1;
    char var_1b = arg4;
    *var_20[2] = *arg6;
    int32_t rax_1;
    int32_t rdx;
    rax_1 = uu_dd::make_linux_oflags::hc5c67f9cb15d8524(arg6);
    
    if (rax_1 == 1)
        var_28 = rdx;
    
    return std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(arg1, &var_28, arg2);
}
