
  int64_t firecracker::resize_fdtable::ha61461e97c9c9377()

{
    int128_t rlimits = {0};
    
    if (getrlimit(RLIMIT_NOFILE, &rlimits) < 0)
        return 0;
    
    int64_t rax_1 = rlimits;
    int32_t rbp_1 = 0x800;
    
    if (rax_1 <= 0x7fffffff)
        rbp_1 = rax_1;
    
    int64_t result = 3;
    
    if (rbp_1 >= 4)
    {
        if (dup2(0, rbp_1 - 1) < 0)
        {
            result = 1;
            *__errno_location();
        }
        else if (close(rbp_1 - 1) < 0)
        {
            result = 2;
            *__errno_location();
        }
    }
    
    return result;
}
