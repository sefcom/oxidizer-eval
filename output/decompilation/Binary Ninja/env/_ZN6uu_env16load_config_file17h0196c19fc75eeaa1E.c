
  int128_t* uu_env::load_config_file::h0196c19fc75eeaa1(void* arg1)

{
    int64_t rax = *(arg1 + 8);
    int64_t rcx_2 = (*(arg1 + 0x10) << 4) + rax;
    int64_t var_298 = rax;
    int64_t var_290 = rcx_2;
    
    for (int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_298); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_298))
    {
        int64_t r14_1 = *i;
        uint64_t rbp_1 = i[1];
        int32_t* var_228;
        void* var_178;
        int32_t* var_e0;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h93758be011b95af6(r14_1, rbp_1, "-: uu_env0.0.28Set each NAME to …", 1))
            ini::Ini::load_from_file_opt::hd6c09423a76f6016(&var_e0, r14_1, rbp_1, 1, 1);
        else
        {
            std::io::stdio::stdin::h7215cc131abb55d8();
            var_178 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
            int32_t* rax_2;
            char rdx_1;
            rax_2 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_178);
            var_228 = rax_2;
            ini::Ini::read_from_opt::h195aa31934f88d20(&var_e0, &var_228, 1, 1);
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h1864f028de0891ba(var_228, 
                rdx_1 & 1);
        }
        
        int32_t* r14_2 = var_e0;
        int32_t** var_288;
        int32_t** var_d8;
        int64_t var_d0;
        int128_t var_c8;
        int64_t var_b8;
        
        if (r14_2 == -0x8000000000000000)
        {
            int64_t var_268_2 = var_b8;
            int128_t var_278_2 = var_c8;
            var_288 = var_d8;
            int64_t var_280_2 = var_d0;
            return uu_env::load_config_file::_$u7b$$u7b$closure$u7d$$u7d$::h3c9173ecfcad8e32(r14_1, 
                rbp_1, &var_288);
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
        void var_210;
        memcpy(&var_210, &var_178, 0x98);
        var_228 = r14_2;
        char var_220;
        var_220 = var_d8;
        int64_t var_218_1 = var_d0;
        var_288 = &var_228;
        void var_1e8;
        void* var_280_1 = &var_1e8;
        int128_t var_1c8;
        int128_t var_278_1 = var_1c8;
        int64_t var_1b8;
        int64_t var_268_1 = var_1b8;
        
        while (true)
        {
            void var_240;
            _$LT$ini..SectionIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b11506b46190202(&var_240, &var_288);
            void* var_230;
            
            if (!var_230)
                break;
            
            int64_t rdx_4 = *(var_230 + 0x70);
            var_178 = var_230;
            void* var_170_1 = var_230 + 0x40;
            var_168_1 = *(var_230 + 0x60);
            *var_160_1[8] = rdx_4;
            
            while (true)
            {
                int64_t var_260;
                _$LT$ini..PropertyIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf3320d67a61f47f(&var_260, &var_178);
                int64_t rdi_11 = var_260;
                
                if (!rdi_11)
                    break;
                
                int64_t var_258;
                int64_t var_250;
                std::env::set_var::h7c2f382f05be9345(rdi_11, var_258, var_250);
            }
        }
        
        core::ptr::drop_in_place$LT$ini..Ini$GT$::h02eafa7b2766ffac(&var_228);
    }
    
    return nullptr;
}
