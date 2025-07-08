
  void** uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(int64_t arg1, uint64_t arg2, int64_t* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t r12 = arg3[2];
    int64_t r12_1;
    
    if (*arg3 - r12 <= 1)
    {
        void** result =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
            arg3, "\n   /home/34r7hm4n/.cargo/regis…", 1);
        
        if (result)
            return result;
        
        r12_1 = arg3[2];
    }
    else
    {
        arg3[1][r12] = 0xa;
        r12_1 = r12 + 1;
        arg3[2] = r12_1;
    }
    
    if (*arg3 - r12_1 <= arg2)
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
            arg3, arg1, arg2);
    
    memcpy(arg3[1] + r12_1, arg1, arg2);
    arg3[2] = r12_1 + arg2;
    return nullptr;
}
