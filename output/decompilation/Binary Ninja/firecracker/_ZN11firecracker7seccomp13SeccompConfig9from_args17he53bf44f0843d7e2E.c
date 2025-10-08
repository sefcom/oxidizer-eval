
  void firecracker::seccomp::SeccompConfig::from_args::he53bf44f0843d7e2(char* arg1, int32_t arg2, void* arg3)

{
    if (arg2)
    {
        *(arg1 + 4) = 0;
        *arg1 = 0x15;
        return;
    }
    
    if (!arg3)
    {
        *(arg1 + 4) = 1;
        *arg1 = 0x15;
        return;
    }
    
    char var_18;
    std::fs::File::open::h847db8d34bb9a3a1(&var_18, arg3);
    
    if (var_18 & 1)
    {
        *arg1 = 0x14;
        int64_t var_10;
        *(arg1 + 8) = var_10;
        return;
    }
    
    *(arg1 + 4) = 2;
    int32_t var_14;
    *(arg1 + 8) = var_14;
    *arg1 = 0x15;
}
