
  void** uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    if (!arg1[7])
    {
        int64_t rax_1 = *arg1;
        
        if (rax_1 == -0x8000000000000000)
        {
            char const (** const var_48)[0xf8] = &data_6e1dd0;
            int64_t var_40 = 1;
            int64_t var_38 = 8;
            int128_t var_30 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
            /* no return */
        }
        
        int64_t r15_1 = arg1[2];
        void** result;
        int64_t r15_2;
        
        if (rax_1 - r15_1 <= arg3)
        {
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h97889b217ec5f319(
                arg1, arg2, arg3);
            
            if (result)
                return result;
            
            r15_2 = arg1[2];
            goto label_5bd318;
        }
        
        memcpy(arg1[1] + r15_1, arg2, arg3);
        r15_2 = r15_1 + arg3;
        arg1[2] = r15_2;
        label_5bd318:
        
        if (*arg1 - r15_2 < 2)
        {
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h97889b217ec5f319(
                arg1, "\nkeep-filesquietelide-empty-fil…", 1);
            
            if (result)
                return result;
        }
        else
        {
            arg1[1][r15_2] = 0xa;
            arg1[2] = r15_2 + 1;
        }
        
        arg1[6] = arg1[6] + arg3 + 1;
    }
    
    return nullptr;
}
