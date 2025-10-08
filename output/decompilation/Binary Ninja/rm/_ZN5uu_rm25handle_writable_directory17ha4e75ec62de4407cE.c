
  int64_t uu_rm::handle_writable_directory::ha4e75ec62de4407c(int64_t arg1, int64_t arg2, char arg3, char arg4, int32_t arg5)

{
    char result;
    char rcx;
    
    if (arg3 == 2 || !(arg3 & 1))
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rcx = std::sys::io::is_terminal::isatty::is_terminal::he401db6fc1473b6f() ^ 1;
        result = 1;
    }
    
    if ((arg3 != 2 && arg3 & 1) || !(arg4 == 3 & rcx))
    {
        void* const var_a0;
        int64_t* var_60;
        int64_t** var_50;
        
        if (arg5 & 0x100)
        {
            if (arg5 >= 0)
            {
                int64_t** rax_4;
                int64_t rdx_3;
                rax_4 = uucore::util_name::h074417a1e6395129();
                var_50 = rax_4;
                int64_t var_48_4 = rdx_3;
                var_60 = &var_50;
                int64_t (* var_58_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                int64_t var_98_5 = 2;
                int64_t var_80_4 = 0;
                int64_t** var_90_5 = &var_60;
                int64_t var_88_4 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                int64_t var_48_5 = arg1;
                int64_t var_40_3 = arg2;
                char var_38_2 = 1;
                var_60 = &var_50;
                int64_t (* var_58_5)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea710;
                int64_t var_98_6 = 2;
                int64_t var_80_5 = 0;
                int64_t** var_90_6 = &var_60;
                int64_t var_88_5 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                int64_t var_98_7 = 1;
                int64_t var_90_7 = 8;
                var_88_5 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
            
            result = 1;
            
            if (arg4 == 2)
            {
                int64_t** rax_12;
                int64_t rdx_7;
                rax_12 = uucore::util_name::h074417a1e6395129();
                var_50 = rax_12;
                int64_t var_48_10 = rdx_7;
                var_60 = &var_50;
                int64_t (* var_58_10)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                int64_t var_98_13 = 2;
                int64_t var_80_10 = 0;
                int64_t** var_90_13 = &var_60;
                int64_t var_88_10 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                int64_t var_48_11 = arg1;
                int64_t var_40_7 = arg2;
                char var_38_4 = 1;
                var_60 = &var_50;
                int64_t (* var_58_11)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea730;
                int64_t var_98_14 = 2;
                int64_t var_80_11 = 0;
                int64_t** var_90_14 = &var_60;
                int64_t var_88_11 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                int64_t var_98_15 = 1;
                int64_t var_90_15 = 8;
                var_88_11 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
        }
        else
        {
            if (arg5 >= 0)
            {
                int64_t** rax;
                int64_t rdx_1;
                rax = uucore::util_name::h074417a1e6395129();
                var_50 = rax;
                int64_t var_48_1 = rdx_1;
                var_60 = &var_50;
                int64_t (* var_58_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                int64_t var_98_1 = 2;
                int64_t var_80_1 = 0;
                int64_t** var_90_1 = &var_60;
                int64_t var_88_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                int64_t var_48_2 = arg1;
                int64_t var_40_1 = arg2;
                char var_38_1 = 1;
                var_60 = &var_50;
                int64_t (* var_58_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea6f0;
                int64_t var_98_2 = 2;
                int64_t var_80_2 = 0;
                int64_t** var_90_2 = &var_60;
                int64_t var_88_2 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                int64_t var_98_3 = 1;
                int64_t var_90_3 = 8;
                var_88_2 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
            
            result = 1;
            
            if (arg4 == 2)
            {
                int64_t** rax_8;
                int64_t rdx_5;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_50 = rax_8;
                int64_t var_48_7 = rdx_5;
                var_60 = &var_50;
                int64_t (* var_58_7)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                int64_t var_98_9 = 2;
                int64_t var_80_7 = 0;
                int64_t** var_90_9 = &var_60;
                int64_t var_88_7 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                int64_t var_48_8 = arg1;
                int64_t var_40_5 = arg2;
                char var_38_3 = 1;
                var_60 = &var_50;
                int64_t (* var_58_8)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea6f0;
                int64_t var_98_10 = 2;
                int64_t var_80_8 = 0;
                int64_t** var_90_10 = &var_60;
                int64_t var_88_8 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                int64_t var_98_11 = 1;
                int64_t var_90_11 = 8;
                var_88_8 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
        }
    }
    
    return result;
}
