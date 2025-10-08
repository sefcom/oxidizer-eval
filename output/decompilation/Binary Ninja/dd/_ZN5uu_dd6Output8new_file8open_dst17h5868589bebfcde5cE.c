
  int64_t uu_dd::Output::new_file::open_dst::h5868589bebfcde5c(int32_t* arg1, int64_t arg2, int64_t arg3, char arg4, char arg5, char* arg6)

{
    int64_t var_28 = 0x1b600000000;
    int32_t var_20 = 0;
    *var_20[1] = 1;
    char var_1c = arg5 ^ 1;
    char var_1b = arg4;
    *var_20[2] = *arg6;
    char rax_1;
    int32_t rdx;
    rax_1 = uu_dd::make_linux_oflags::h8059fc6e2ea11e72(arg6);
    
    if (rax_1 & 1)
        var_28 = rdx;
    
    return std::fs::OpenOptions::open::h8d324e17fb255e3b(arg1, &var_28, arg2);
}
