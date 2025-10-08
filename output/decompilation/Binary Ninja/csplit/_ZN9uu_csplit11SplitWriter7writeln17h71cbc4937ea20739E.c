
  void** uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    if (!arg1[7])
    {
        int64_t rax_1 = *arg1;
        
        if (-(rax_1) == -0x8000000000000000)
        {
            char const (** const var_48)[0xd8] = &data_642c60;
            int64_t var_40 = 1;
            int64_t var_38 = 8;
            int128_t var_30 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_48);
            /* no return */
        }
        
        int64_t r15_1 = arg1[2];
        
        if (arg3 >= rax_1 - r15_1)
        {
            void** result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h3751b38b456845cf(
                arg1, arg2, arg3);
            
            if (result)
                return result;
        }
        else
        {
            memcpy(arg1[1] + r15_1, arg2, arg3);
            arg1[2] = r15_1 + arg3;
        }
        
        arg1[6] += arg3;
    }
    
    return nullptr;
}
