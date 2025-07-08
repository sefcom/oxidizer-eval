
  uint64_t uu_rm::prompt_file_permission_readonly::h2197b873951768fc(int64_t arg1)

{
    int32_t var_e0;
    std::fs::metadata::h6df0603967c240bb(&var_e0, arg1);
    uint64_t rbp;
    void* const var_150;
    int64_t* var_120;
    int64_t* var_108;
    void* var_e8;
    int64_t rsi;
    
    if (var_e0 != 2)
    {
        rbp = 1;
        char var_a8;
        
        if (!(var_a8 & 0x92))
        {
            int64_t var_90;
            
            if (var_90)
                goto label_4b8f42;
            
            int64_t* rax_4;
            int64_t rdx_2;
            rax_4 = uucore::util_name::h60d842bf27b05e82();
            var_108 = rax_4;
            int64_t var_100_3 = rdx_2;
            var_120 = &var_108;
            int64_t (* var_118_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_150 = &data_527970;
            int64_t var_148_4 = 2;
            int64_t var_130_3 = 0;
            int64_t** var_140_4 = &var_120;
            int64_t var_138_3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            var_108 = 1;
            int64_t var_100_4 = arg1;
            int64_t var_f8_2 = rsi;
            char var_f0_2 = 1;
            var_120 = &var_108;
            int64_t (* var_118_4)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_150 = &data_527b78;
            int64_t var_148_5 = 2;
            int64_t var_130_4 = 0;
            int64_t** var_140_5 = &var_120;
            int64_t var_138_4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            var_150 = &data_527b08;
            int64_t var_148_6 = 1;
            int64_t var_140_6 = 8;
            var_138_4 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            var_e8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                &var_e8);
            rbp = uucore::read_yes::hc350e858ab85cf03();
        }
    }
    else
    {
        label_4b8f42:
        int64_t* rax_1;
        int64_t rdx_1;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_108 = rax_1;
        int64_t var_100_1 = rdx_1;
        var_120 = &var_108;
        int64_t (* var_118_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        var_150 = &data_527970;
        int64_t var_148_1 = 2;
        int64_t var_130_1 = 0;
        int64_t** var_140_1 = &var_120;
        int64_t var_138_1 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
        var_108 = 1;
        int64_t var_100_2 = arg1;
        int64_t var_f8_1 = rsi;
        char var_f0_1 = 1;
        var_120 = &var_108;
        int64_t (* var_118_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_150 = &data_527b98;
        int64_t var_148_2 = 2;
        int64_t var_130_2 = 0;
        int64_t** var_140_2 = &var_120;
        int64_t var_138_2 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
        var_150 = &data_527b08;
        int64_t var_148_3 = 1;
        int64_t var_140_3 = 8;
        var_138_2 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
        var_e8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
            &var_e8);
        rbp = uucore::read_yes::hc350e858ab85cf03();
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
    return rbp;
}
