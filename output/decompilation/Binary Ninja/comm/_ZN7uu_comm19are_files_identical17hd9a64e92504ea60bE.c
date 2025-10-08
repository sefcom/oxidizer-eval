
  char* uu_comm::are_files_identical::hd9a64e92504ea60b(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    std::fs::metadata::h0373c3893bc9c36e(&var_4030, arg2);
    int64_t var_4028;
    
    if (var_4030 == 2)
    {
        *(arg1 + 8) = var_4028;
        *arg1 = 1;
    }
    else
    {
        std::fs::metadata::h0373c3893bc9c36e(&var_4030, arg4);
        int64_t var_3fe0;
        
        if (var_4030 == 2)
        {
            *(arg1 + 8) = var_4028;
            *arg1 = 1;
        }
        else if (var_3fe0 != var_3fe0)
            *arg1 = 0;
        else
        {
            std::fs::File::open::h4d8fb62fce9f1fe2(&var_4030, arg2);
            
            if (var_4030 & 1)
            {
                *(arg1 + 8) = var_4028;
                *arg1 = 1;
            }
            else
            {
                int32_t fd = *var_4030[4];
                std::fs::File::open::h4d8fb62fce9f1fe2(&var_4030, arg4);
                
                if (var_4030 != 1)
                {
                    int32_t r14_1 = *var_4030[4];
                    void var_4090;
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h1ec4c3de20b2cd65(&var_4090, fd);
                    void var_4060;
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h1ec4c3de20b2cd65(&var_4060, r14_1);
                    memset(&var_2030, 0, 0x2000);
                    memset(&var_4030, 0, 0x2000);
                    char rax_4;
                    
                    while (true)
                    {
                        int64_t rdx_2;
                        rax_4 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h7936c168bbd33ba5(&var_4090, &var_2030);
                        
                        if (rax_4 & 1)
                        {
                            *(arg1 + 8) = rdx_2;
                            rax_4 = 1;
                            break;
                        }
                        
                        int64_t rdx_3;
                        rax_4 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h7936c168bbd33ba5(&var_4060, &var_4030);
                        
                        if (rax_4 & 1)
                        {
                            *(arg1 + 8) = rdx_3;
                            rax_4 = 1;
                            break;
                        }
                        
                        if (rdx_2 != rdx_3)
                            arg1[1] = 0;
                        else if (!rdx_2)
                            arg1[1] = 1;
                        else
                        {
                            int64_t rax_5;
                            uint64_t rdx_5;
                            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h6ba8ff5fdf051e41(0, rdx_2, &var_2030, 0x2000);
                            int64_t rax_6;
                            int64_t rdx_7;
                            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h6ba8ff5fdf051e41(0, rdx_3, &var_4030, 0x2000);
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5723b3bfa7d363aa(rax_5, rdx_5, rax_6, rdx_7))
                                continue;
                            
                            arg1[1] = 0;
                        }
                        
                        rax_4 = 0;
                        break;
                    }
                    
                    *arg1 = rax_4;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::he5548ef147721afb(&var_4060);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::he5548ef147721afb(&var_4090);
                }
                else
                {
                    *(arg1 + 8) = var_4028;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::he3417a785d7054a0(fd);
                }
            }
        }
    }
    return arg1;
}
