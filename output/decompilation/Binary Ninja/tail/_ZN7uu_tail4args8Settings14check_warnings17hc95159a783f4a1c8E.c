
  void uu_tail::args::Settings::check_warnings::hc95159a783f4a1c8(void* arg1)

{
    char r14 = *(arg1 + 0x4c);
    void* const var_70;
    int64_t* var_40;
    int64_t var_30;
    uint32_t rax;
    
    if (*(arg1 + 0x48))
    {
        rax = r14;
        
        if (!rax)
        {
            int64_t rax_2;
            int64_t rdx_2;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            var_30 = rax_2;
            int64_t var_28_2 = rdx_2;
            var_40 = &var_30;
            int64_t (* var_38_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            var_70 = &data_5bb5c0;
            int64_t var_68_3 = 2;
            int64_t var_50_2 = 0;
            int64_t** var_60_3 = &var_40;
            int64_t var_58_2 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            var_70 = &data_5bb5f0;
            int64_t var_68_4 = 1;
            int64_t var_60_4 = 8;
            var_58_2 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            r14 = 0;
        }
        else if (rax == 2)
        {
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 = uucore::util_name::h60d842bf27b05e82();
            var_30 = rax_1;
            int64_t var_28_1 = rdx_1;
            var_40 = &var_30;
            int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            var_70 = &data_5bb5c0;
            int64_t var_68_1 = 2;
            int64_t var_50_1 = 0;
            int64_t** var_60_1 = &var_40;
            int64_t var_58_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            var_70 = &data_5bb5e0;
            int64_t var_68_2 = 1;
            int64_t var_60_2 = 8;
            var_58_1 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            r14 = 2;
        }
    }
    
    int32_t rbp = *(arg1 + 0x44);
    int64_t var_58_3;
    void* rax_4;
    
    if (rbp)
    {
        if (r14 != 2)
        {
            if (!uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(rbp))
            {
                int64_t rax_6;
                int64_t rdx_4;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                var_30 = rax_6;
                int64_t var_28_4 = rdx_4;
                var_40 = &var_30;
                int64_t (* var_38_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_70 = &data_5bb5c0;
                int64_t var_68_6 = 2;
                int64_t var_50_4 = 0;
                int64_t** var_60_6 = &var_40;
                int64_t var_58_4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                var_70 = &data_5bb610;
                int64_t var_68_7 = 1;
                int64_t var_60_7 = 8;
                var_58_4 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            }
            
            goto label_4f9b3b;
        }
        
        int64_t rax_3;
        int64_t rdx_3;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_30 = rax_3;
        int64_t var_28_3 = rdx_3;
        var_40 = &var_30;
        int64_t (* var_38_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        var_70 = &data_5bb5c0;
        int64_t var_68_5 = 2;
        int64_t var_50_3 = 0;
        int64_t** var_60_5 = &var_40;
        var_58_3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
        rax_4 = &data_5bb600;
        label_4f9bff:
        var_70 = rax_4;
        int64_t var_68_9 = 1;
        int64_t var_60_9 = 8;
        var_58_3 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
    }
    else if (r14 != 2)
    {
        label_4f9b3b:
        rax = uu_tail::args::Settings::has_stdin::h99629f892128a309(arg1);
        
        if (rax)
        {
            if (!rbp && !r14 && *(arg1 + 0x28) == 1)
            {
                same_file::Handle::stdin::hcbeef53980d87d0e(&var_70);
                rax = core::result::Result$LT$T$C$E$GT$::map_or::h697c815cf75a0919(&var_70);
            }
            
            if (rbp || r14 || *(arg1 + 0x28) != 1 || !rax)
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_70 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                
                if (std::sys::pal::unix::io::is_terminal::h77c9f849b4b1037f())
                {
                    int64_t rax_7;
                    int64_t rdx_5;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    var_30 = rax_7;
                    int64_t var_28_5 = rdx_5;
                    var_40 = &var_30;
                    int64_t (* var_38_5)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_70 = &data_5bb5c0;
                    int64_t var_68_8 = 2;
                    int64_t var_50_5 = 0;
                    int64_t** var_60_8 = &var_40;
                    var_58_3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                    rax_4 = &data_5bb620;
                    goto label_4f9bff;
                }
            }
        }
    }
}
