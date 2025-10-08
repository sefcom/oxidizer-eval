
  void* uu_stty::print_flags::h1fca9bc374a8d8a1(void* arg1, char arg2)

{
    char r15 = 0;
    int64_t r13 = 0;
    
    while (true)
    {
        r13 += 0x20;
        
        while (true)
        {
            int128_t var_40 = *(r13 + 0x4e2fa0);
            char const (** const var_88)[0x87];
            int64_t var_70;
            
            if (*(r13 + 0x4e2fb4))
            {
                char rbx_1 = *(r13 + 0x4e2fb5);
                int32_t rbp_1 = *(r13 + &data_4e2f98);
                char rax_1 = _$LT$nix..sys..termios..InputFlags$u20$as$u20$uu_stty..TermiosFlag$GT$::is_in::h7a378cd8bdb34370(*(r13 + 0x4e2fb0), *(arg1 + 0x70), rbp_1, 
                    *(r13 + &*(data_4e2f98 + 4)));
                
                if (rbp_1)
                {
                    if (!(rax_1 & ((rbx_1 ^ 1) | arg2)))
                        goto label_4591e0;
                    
                    goto label_459235;
                }
                
                if (arg2 & 1 || rbx_1 != rax_1)
                {
                    if (rax_1)
                        goto label_459235;
                    
                    var_88 = &data_4e3858;
                    int64_t var_80_1 = 1;
                    int64_t var_78_1 = 8;
                    var_70 = {0};
                    std::io::stdio::_print::h5e446ff973c02de6(&var_88);
                    label_459235:
                    int128_t* var_58 = &var_40;
                    int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65652a1c6501a73;
                    var_88 = &data_4e3838;
                    int64_t var_80_2 = 2;
                    int64_t var_68_1 = 0;
                    int128_t** var_78_2 = &var_58;
                    var_70 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_88);
                    r15 = 1;
                    
                    if (r13 != 0x180)
                        break;
                }
                else
                {
                    label_4591e0:
                    
                    if (r13 != 0x180)
                        break;
                }
            }
            else
            {
                r13 += 0x20;
                
                if (r13 != 0x1a0)
                    continue;
            }
            
            if (!(r15 & 1))
                return arg1;
            
            var_88 = &data_4e2ac0;
            int64_t var_80_3 = 1;
            int64_t var_78_3 = 8;
            var_70 = {0};
            return std::io::stdio::_print::h5e446ff973c02de6(&var_88);
        }
    }
}
