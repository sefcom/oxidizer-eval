
  uint64_t uu_env::load_config_file::he01b7851b1bda2a1(void* arg1)

{
    int64_t rax = *(arg1 + 0x10);
    
    if (rax)
    {
        int64_t* i = *(arg1 + 8);
        
        do
        {
            int64_t rbp_1 = *i;
            uint64_t r12_1 = i[1];
            int32_t* var_240;
            void* var_178;
            int32_t* var_e0;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e3c3d7f0695123e(rbp_1, r12_1, "-: uu_env(uutils coreutils) 0.0.…", 1))
                ini::Ini::load_from_file_opt::h4049ee98f0c71d18(&var_e0, rbp_1);
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                var_178 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                int32_t* rax_5;
                char rdx_1;
                rax_5 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_178);
                var_240 = rax_5;
                ini::Ini::read_from_opt::hdafb0393949e35e7(&var_e0, &var_240);
                core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h608b5571d6d78c42(
                    var_240, rdx_1 & 1);
            }
            
            int32_t* rbp_2 = var_e0;
            int32_t** var_288;
            int32_t** var_d8;
            int64_t var_d0;
            int128_t var_c8;
            int64_t var_b8;
            
            if (-(rbp_2) == -0x8000000000000000)
            {
                int64_t var_268_2 = var_b8;
                int128_t var_278_2 = var_c8;
                var_288 = var_d8;
                int64_t var_280_2 = var_d0;
                return uu_env::load_config_file::_$u7b$$u7b$closure$u7d$$u7d$::h995fee399d624ab1(
                    rbp_1, r12_1, &var_288);
            }
            
            int64_t var_168_1 = var_b8;
            var_178 = var_c8;
            int128_t var_40;
            int128_t var_f0_1 = var_40;
            int128_t var_50;
            int128_t var_100_1 = var_50;
            int128_t var_60;
            int128_t var_110_1 = var_60;
            int128_t var_70;
            int128_t var_120_1 = var_70;
            int128_t var_80;
            int128_t var_130_1 = var_80;
            int128_t var_90;
            int128_t var_140_1 = var_90;
            int128_t var_a0;
            int128_t var_150_1 = var_a0;
            int128_t var_b0;
            int128_t var_160_1 = var_b0;
            void var_228;
            memcpy(&var_228, &var_178, 0x98);
            var_240 = rbp_2;
            char var_238;
            var_238 = var_d8;
            int64_t var_230_1 = var_d0;
            var_288 = &var_240;
            void var_200;
            void* var_280_1 = &var_200;
            int128_t var_1e0;
            int128_t var_278_1 = var_1e0;
            int64_t var_1d0;
            int64_t var_268_1 = var_1d0;
            
            while (true)
            {
                void var_190;
                _$LT$ini..SectionIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha182df54595ace07(&var_190, &var_288);
                void* var_180;
                
                if (!var_180)
                    break;
                
                int64_t rdx_4 = *(var_180 + 0x70);
                var_178 = var_180;
                void* var_170_1 = var_180 + 0x40;
                var_168_1 = *(var_180 + 0x60);
                *var_160_1[8] = rdx_4;
                
                while (true)
                {
                    int64_t var_260;
                    _$LT$ini..PropertyIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h578d705864b3efa6(&var_260, &var_178);
                    int64_t rdi_9 = var_260;
                    
                    if (!rdi_9)
                        break;
                    
                    int64_t var_258;
                    int64_t var_250;
                    std::env::set_var::h09da1a9546dab808(rdi_9, var_258, var_250);
                }
            }
            
            core::ptr::drop_in_place$LT$ini..Ini$GT$::h63a28054a6428a59(&var_240);
            i = &i[2];
        } while (i != &i[rax * 2]);
    }
    
    return 0;
}
