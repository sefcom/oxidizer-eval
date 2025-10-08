
  void uu_tail::args::Settings::check_warnings::h0e1cfe5e0e5b7f3f(void* arg1)

{
    void* const var_70;
    int64_t* var_40;
    int64_t var_30;
    uint32_t rax;
    
    if (*(arg1 + 0x48))
    {
        rax = *(arg1 + 0x4c);
        int64_t var_58_1;
        char const (** const rax_2)[0xbb];
        
        if (!rax)
        {
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_30 = rax_3;
            int64_t var_28_2 = rdx_2;
            var_40 = &var_30;
            int64_t (* var_38_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_70 = &data_573098;
            int64_t var_68_2 = 2;
            int64_t var_50_2 = 0;
            int64_t** var_60_2 = &var_40;
            var_58_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            rax_2 = &data_5730c8;
            label_49fa54:
            var_70 = rax_2;
            int64_t var_68_3 = 1;
            int64_t var_60_3 = 8;
            var_58_1 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        }
        else if (rax == 2)
        {
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 = uucore::util_name::h074417a1e6395129();
            var_30 = rax_1;
            int64_t var_28_1 = rdx_1;
            var_40 = &var_30;
            int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_70 = &data_573098;
            int64_t var_68_1 = 2;
            int64_t var_50_1 = 0;
            int64_t** var_60_1 = &var_40;
            var_58_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            rax_2 = &data_5730b8;
            goto label_49fa54;
        }
    }
    
    int32_t rbp = *(arg1 + 0x44);
    char r14 = *(arg1 + 0x4c);
    int64_t var_58_2;
    void* rax_5;
    
    if (rbp)
    {
        if (r14 != 2)
        {
            if (!uu_tail::platform::unix::supports_pid_checks::ha9469f91d23a1bd0(rbp))
            {
                int64_t rax_7;
                int64_t rdx_4;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_30 = rax_7;
                int64_t var_28_4 = rdx_4;
                var_40 = &var_30;
                int64_t (* var_38_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_70 = &data_573098;
                int64_t var_68_5 = 2;
                int64_t var_50_4 = 0;
                int64_t** var_60_5 = &var_40;
                int64_t var_58_3 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
                var_70 = &data_5730e8;
                int64_t var_68_6 = 1;
                int64_t var_60_6 = 8;
                var_58_3 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            }
            
            goto label_49fbb7;
        }
        
        int64_t rax_4;
        int64_t rdx_3;
        rax_4 = uucore::util_name::h074417a1e6395129();
        var_30 = rax_4;
        int64_t var_28_3 = rdx_3;
        var_40 = &var_30;
        int64_t (* var_38_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
        var_70 = &data_573098;
        int64_t var_68_4 = 2;
        int64_t var_50_3 = 0;
        int64_t** var_60_4 = &var_40;
        var_58_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        rax_5 = &data_5730d8;
        label_49fc78:
        var_70 = rax_5;
        int64_t var_68_8 = 1;
        int64_t var_60_8 = 8;
        var_58_2 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
    }
    else if (r14 != 2)
    {
        label_49fbb7:
        
        if (uu_tail::args::Settings::has_stdin::h300d2999bcc0a3dc(arg1))
        {
            rax = rbp;
            
            if (r14 | rax || *(arg1 + 0x28) != 1)
            {
                label_49fbf9:
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                
                if (std::sys::io::is_terminal::isatty::is_terminal::hd4d42d74aaf8df1c())
                {
                    int64_t rax_8;
                    int64_t rdx_5;
                    rax_8 = uucore::util_name::h074417a1e6395129();
                    var_30 = rax_8;
                    int64_t var_28_5 = rdx_5;
                    var_40 = &var_30;
                    int64_t (* var_38_5)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    var_70 = &data_573098;
                    int64_t var_68_7 = 2;
                    int64_t var_50_5 = 0;
                    int64_t** var_60_7 = &var_40;
                    var_58_2 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
                    rax_5 = &data_5730f8;
                    goto label_49fc78;
                }
            }
            else
            {
                same_file::Handle::stdin::h12b97f800844609d(&var_70);
                
                if (!core::result::Result$LT$T$C$E$GT$::is_ok_and::he1bd16e776e93480(&var_70))
                    goto label_49fbf9;
            }
        }
    }
}
