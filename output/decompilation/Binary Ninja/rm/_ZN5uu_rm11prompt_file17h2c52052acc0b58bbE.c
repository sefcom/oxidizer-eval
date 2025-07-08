
  uint64_t uu_rm::prompt_file::h2c52052acc0b58bb(int64_t arg1, uint64_t arg2, char arg3)

{
    uint64_t result;
    
    if (!arg3)
        result = 1;
    else
    {
        void* const var_160;
        void* const* var_128;
        int64_t* var_108;
        int32_t var_e0;
        int32_t var_a8;
        uint64_t rbx_1;
        
        if (arg3 == 2)
        {
            std::fs::symlink_metadata::h9e12b59fb6df20f8(&var_e0, arg1);
            
            if (var_e0 != 2 && (0xf000 & var_a8) == 0xa000)
            {
                void** rax_1;
                int64_t rdx_1;
                rax_1 = uucore::util_name::h60d842bf27b05e82();
                var_128 = rax_1;
                int64_t var_120_1 = rdx_1;
                var_108 = &var_128;
                int32_t var_100;
                var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_160 = &data_527970;
                int64_t var_158_1 = 2;
                int64_t var_140_1 = 0;
                int64_t** var_150_1 = &var_108;
                int64_t var_148_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_160);
                var_128 = 1;
                int64_t var_120_2 = arg1;
                uint64_t var_118_1 = arg2;
                char var_110_1 = 1;
                var_108 = &var_128;
                var_100 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_160 = &data_527ae8;
                int64_t var_158_2 = 2;
                int64_t var_140_2 = 0;
                int64_t** var_150_2 = &var_108;
                int64_t var_148_2 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_160);
                var_160 = &data_527b08;
                int64_t var_158_3 = 1;
                int64_t var_150_3 = 8;
                var_148_2 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_160);
                void* var_130 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_130);
                rbx_1 = uucore::read_yes::hc350e858ab85cf03();
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
                return rbx_1;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
        }
        
        var_108 = 0x1b600000000;
        int32_t var_100_1 = 0;
        int16_t var_fc_1 = 0;
        var_100_1 = 0x101;
        int32_t var_f0;
        std::fs::OpenOptions::open::hd10b8d5ca5b809f9(&var_f0, &var_108, arg1);
        
        if (!var_f0)
        {
            int32_t fd_1;
            int32_t fd = fd_1;
            std::fs::File::metadata::he899a18112e6f19e(&var_e0, &fd);
            
            if (var_e0 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
                
                if (arg3 != 2 || !(var_a8 & 0x92))
                {
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa666ae70153c401(fd);
                    return uu_rm::prompt_file_permission_readonly::h2197b873951768fc(arg1);
                }
                
                int64_t var_90;
                int64_t var_148;
                void* var_f8;
                
                if (!var_90)
                {
                    void* rax_7;
                    int64_t rdx_5;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    var_160 = rax_7;
                    int64_t var_158_8 = rdx_5;
                    var_128 = &var_160;
                    int64_t (* var_120_6)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    var_e0 = &data_527970;
                    int64_t var_d8_6 = 2;
                    int64_t var_c0_5 = 0;
                    void* const** var_d0_6 = &var_128;
                    int64_t var_c8_5 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_160 = 1;
                    int64_t var_158_9 = arg1;
                    uint64_t var_150_5 = arg2;
                    var_148 = 1;
                    var_128 = &var_160;
                    int64_t (* var_120_7)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_e0 = &data_527b38;
                    int64_t var_d8_7 = 2;
                    int64_t var_c0_6 = 0;
                    void* const** var_d0_7 = &var_128;
                    int64_t var_c8_6 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_e0 = &data_527b08;
                    int64_t var_d8_8 = 1;
                    int64_t var_d0_8 = 8;
                    var_c8_6 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_f8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&var_f8);
                }
                else
                {
                    void* rax_5;
                    int64_t rdx_3;
                    rax_5 = uucore::util_name::h60d842bf27b05e82();
                    var_160 = rax_5;
                    int64_t var_158_4 = rdx_3;
                    var_128 = &var_160;
                    int64_t (* var_120_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    var_e0 = &data_527970;
                    int64_t var_d8_1 = 2;
                    int64_t var_c0_1 = 0;
                    void* const** var_d0_1 = &var_128;
                    int64_t var_c8_1 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_160 = 1;
                    int64_t var_158_5 = arg1;
                    uint64_t var_150_4 = arg2;
                    var_148 = 1;
                    var_128 = &var_160;
                    int64_t (* var_120_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_e0 = &data_527b58;
                    int64_t var_d8_2 = 2;
                    int64_t var_c0_2 = 0;
                    void* const** var_d0_2 = &var_128;
                    int64_t var_c8_2 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_e0 = &data_527b08;
                    int64_t var_d8_3 = 1;
                    int64_t var_d0_3 = 8;
                    var_c8_2 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_f8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&var_f8);
                }
                rbx_1 = uucore::read_yes::hc350e858ab85cf03();
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
                rbx_1 = 1;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa666ae70153c401(fd);
            return rbx_1;
        }
        
        int64_t var_e8;
        var_e0 = var_e8;
        char rax_3 = std::io::error::Error::kind::hb2ff5fa058639b3d(var_e8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_e0);
        result = 1;
        
        if (rax_3 == 1)
            return uu_rm::prompt_file_permission_readonly::h2197b873951768fc(arg1);
    }
    
    return result;
}
