
  int64_t bat::config::generate_config_file::hc481a22fd82623a6(char* arg1)

{
    void var_50;
    bat::config::config_file::h4b67a380f7fc9337(&var_50);
    char* var_48;
    char* r15 = var_48;
    uint64_t var_40;
    uint64_t r14 = var_40;
    void** const var_a8;
    int64_t* var_78;
    void* var_68;
    ssize_t rax_1;
    
    if (!std::path::Path::is_file::h6e28d87ff76ffc41(r15, r14))
    {
        char* rax_3;
        int64_t rdx_2;
        rax_3 = std::path::Path::parent::hef287f60afa56900(r15, r14);
        
        if (!rax_3)
        {
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_68, r15, r14);
            var_78 = &var_68;
            int64_t (* var_70_2)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
            var_a8 = &data_ac8600;
            int64_t var_a0_3 = 1;
            int64_t var_88_2 = 0;
            int64_t** var_98_4 = &var_78;
            int64_t var_90_2 = 1;
            int128_t var_38;
            core::option::Option$LT$T$GT$::map_or_else::ha6af42fd863fbfff(&var_38, 0, &var_a8);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_68);
            *var_a8[7] = var_38;
            int64_t var_28;
            var_98_4 = var_28;
            *arg1 = 0xb;
            *(arg1 + 1) = var_a8;
            *(arg1 + 0x10) = var_a0_3;
            *(arg1 + 0x18) = var_98_4;
        }
        else
        {
            rax_1 = std::fs::create_dir_all::h72c4bebdc9f0feff(rax_3);
            
            if (!rax_1)
                goto label_7acd25;
            
            *arg1 = 0;
            *(arg1 + 8) = rax_1;
        }
    }
    else
    {
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_68, r15, r14);
        var_78 = &var_68;
        int64_t (* var_70_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
        var_a8 = &data_ac85d0;
        int64_t var_a0_1 = 2;
        int64_t var_88_1 = 0;
        int64_t** var_98_1 = &var_78;
        int64_t var_90_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_68);
        var_a8 = &data_ac85f0;
        int64_t var_a0_2 = 1;
        int64_t var_98_2 = 8;
        var_90_1 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_a8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        rax_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
            &var_a8);
        
        if (rax_1)
        {
            *arg1 = 0;
            *(arg1 + 8) = rax_1;
        }
        else
        {
            var_a8 = nullptr;
            int64_t var_a0 = 1;
            int64_t var_98_3 = 0;
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            var_68 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
            char rax_2;
            int64_t rdx_1;
            rax_2 = std::io::stdio::Stdin::read_line::h4f274dfaf65c22af(&var_68, &var_a8);
            
            if (!(rax_2 & 1))
            {
                char* rax_6;
                int64_t rdx_5;
                rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hbcac274ffcd47b99(var_a0, 
                    var_98_3);
                
                if (!core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_6, rdx_5))
                {
                    *arg1 = 0xd;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_a8);
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_a8);
                    label_7acd25:
                    int64_t rax_8 = std::fs::write::h4bd82eacd25dfa2c(&var_50);
                    
                    if (!rax_8)
                        goto label_7acd6e;
                    
                    bat::config::generate_config_file::_$u7b$$u7b$closure$u7d$$u7d$::hdf5ae32e43f4c068(&var_a8, r15, r14, rax_8);
                    void** const rax_9 = var_a8;
                    var_68 = var_a0;
                    
                    if (-(rax_9) != -0x8000000000000000)
                    {
                        *(arg1 + 0x10) = var_68;
                        *arg1 = 0xb;
                        *(arg1 + 8) = rax_9;
                    }
                    else
                    {
                        r15 = var_48;
                        r14 = var_40;
                        label_7acd6e:
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_68, r15, 
                            r14);
                        var_78 = &var_68;
                        int64_t (* var_70_3)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
                        var_a8 = &data_ac8610;
                        int64_t var_a0_4 = 2;
                        int64_t var_88_3 = 0;
                        int64_t** var_98_5 = &var_78;
                        int64_t var_90_3 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
                        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(
                            &var_68);
                        *arg1 = 0xd;
                    }
                }
            }
            else
            {
                *arg1 = 0;
                *(arg1 + 8) = rdx_1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_a8);
            }
        }
    }
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(&var_50);
}
