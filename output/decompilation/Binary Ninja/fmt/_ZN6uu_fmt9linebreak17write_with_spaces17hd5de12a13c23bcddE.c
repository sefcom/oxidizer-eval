
  void** uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(int64_t arg1, uint64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    uint64_t rdx_3;
    char const* const rsi_3;
    
    if (arg3 == 1)
    {
        int64_t rax_3 = arg4[2];
        
        if (*arg4 - rax_3 < 2)
        {
            rsi_3 = " /home/34r7hm4n/.cargo/registry/…";
            rdx_3 = 1;
            label_4bc6c9:
            void** result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
                arg4, rsi_3, rdx_3);
            
            if (result)
                return result;
        }
        else
        {
            arg4[1][rax_3] = 0x20;
            arg4[2] = rax_3 + 1;
        }
    }
    else if (arg3 == 2)
    {
        int64_t rax_1 = arg4[2];
        
        if (*arg4 - rax_1 < 3)
        {
            rsi_3 = "   /home/34r7hm4n/.cargo/registr…";
            rdx_3 = 2;
            goto label_4bc6c9;
        }
        
        *(arg4[1] + rax_1) = 0x2020;
        arg4[2] = rax_1 + 2;
    }
    int64_t r12_1 = arg4[2];
    
    if (*arg4 - r12_1 <= arg2)
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
            arg4, arg1, arg2);
    
    memcpy(arg4[1] + r12_1, arg1, arg2);
    arg4[2] = r12_1 + arg2;
    return nullptr;
}
