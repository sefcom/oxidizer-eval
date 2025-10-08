
  void uu_cp::OverwriteMode::verify::hcf2d8eaa11706b21(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4, char arg5)

{
    if (!arg2)
        *arg1 = -0x7ffffffffffffff4;
    else
    {
        void* const var_128;
        int64_t** var_f8;
        int64_t* var_98;
        
        if (arg2 != 1)
        {
            if (arg5)
            {
                var_f8 = 1;
                int64_t var_f0_4 = arg3;
                int64_t var_e8_3 = arg4;
                char var_e0_2 = 1;
                var_98 = &var_f8;
                int64_t (* var_90_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_128 = &data_55eb08;
                int64_t var_120_5 = 2;
                int64_t var_108_4 = 0;
                int64_t** var_118_5 = &var_98;
                int64_t var_110_4 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_128);
            }
            
            *arg1 = -0x7ffffffffffffff9;
            arg1[1] = 0;
        }
        else
        {
            uu_cp::file_mode_for_interactive_overwrite::h1fc34d69e34b5e78(&var_98, arg3);
            
            if (var_98 != -0x8000000000000000)
            {
                int64_t var_88;
                int64_t var_58_1 = var_88;
                int128_t var_68 = var_98;
                int64_t var_70;
                int64_t var_38_1 = var_70;
                int128_t var_80;
                int128_t var_48 = var_80;
                int64_t** rax_7;
                int64_t rdx_3;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_f8 = rax_7;
                int64_t var_f0_5 = rdx_3;
                uint64_t var_c8 = &var_f8;
                int64_t (* var_c0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                var_128 = &data_55e700;
                int64_t var_120_6 = 2;
                int64_t var_108_5 = 0;
                uint64_t* var_118_6 = &var_c8;
                int64_t var_110_5 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_c8 = 1;
                int64_t var_c0_3 = arg3;
                int64_t var_b8_1 = arg4;
                char var_b0_1 = 1;
                var_128 = &var_c8;
                int64_t (* var_120_7)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int128_t* var_118_7 = &var_68;
                int64_t (* var_110_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                int128_t* var_108_6 = &var_48;
                int64_t (* var_100_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_f8 = &data_55eb28;
                int64_t var_f0_6 = 4;
                int64_t var_d8_1 = 0;
                void* const* var_e8_4 = &var_128;
                char var_e0;
                var_e0 = 3;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
                var_128 = &data_55eb68;
                int64_t var_120_8 = 1;
                int64_t var_118_8 = 8;
                var_110_6 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_128);
                char rax_11 = uucore::read_yes::h67cb9532536454c0();
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_48);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_68);
                
                if (rax_11)
                    *arg1 = -0x7ffffffffffffff4;
                else
                {
                    *arg1 = -0x7ffffffffffffff9;
                    arg1[1] = 1;
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4ba7db36afe98420(&var_98);
                int64_t** rax_1;
                int64_t rdx_1;
                rax_1 = uucore::util_name::h074417a1e6395129();
                var_f8 = rax_1;
                int64_t var_f0_1 = rdx_1;
                var_98 = &var_f8;
                int64_t (* var_90_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                var_128 = &data_55e700;
                int64_t var_120_1 = 2;
                int64_t var_108_1 = 0;
                int64_t** var_118_1 = &var_98;
                int64_t var_110_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_f8 = 1;
                int64_t var_f0_2 = arg3;
                int64_t var_e8_1 = arg4;
                char var_e0_1 = 1;
                var_98 = &var_f8;
                int64_t (* var_90_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_128 = &data_55eb78;
                int64_t var_120_2 = 2;
                int64_t var_108_2 = 0;
                int64_t** var_118_2 = &var_98;
                int64_t var_110_2 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_128 = &data_55eb68;
                int64_t var_120_3 = 1;
                int64_t var_118_3 = 8;
                var_110_2 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_128);
                
                if (!uucore::read_yes::h67cb9532536454c0())
                {
                    *arg1 = -0x7ffffffffffffff9;
                    arg1[1] = 1;
                }
                else
                    *arg1 = -0x7ffffffffffffff4;
            }
        }
    }
}
