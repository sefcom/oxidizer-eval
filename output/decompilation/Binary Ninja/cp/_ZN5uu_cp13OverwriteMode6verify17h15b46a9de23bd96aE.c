
  void uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4, char arg5)

{
    if (!arg2)
        *arg1 = 0xd;
    else
    {
        void* const var_130;
        char const (** const var_100)[0x9];
        char const (** const* var_88)[0x9];
        
        if (arg2 != 1)
        {
            if (arg5)
            {
                var_100 = 1;
                int64_t var_f8_3 = arg3;
                int64_t var_f0_2 = arg4;
                char var_e8_1 = 1;
                var_88 = &var_100;
                int64_t (* var_80_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_130 = &data_5b5dd8;
                int64_t var_128_4 = 2;
                int64_t var_110_3 = 0;
                char const (** const** var_120_4)[0x9] = &var_88;
                int64_t var_118_3 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_130);
            }
            
            *arg1 = 8;
            arg1[1] = 0;
        }
        else
        {
            uu_cp::file_mode_for_interactive_overwrite::h819430914012e276(&var_88);
            char rbp_1;
            int64_t* var_d0;
            int128_t var_70;
            void* var_58;
            
            if (var_88 == -0x8000000000000000)
            {
                char const (** rax_5)[0x9];
                int64_t rdx_2;
                rax_5 = uucore::util_name::h60d842bf27b05e82();
                var_100 = rax_5;
                int64_t var_f8_4 = rdx_2;
                var_d0 = &var_100;
                int64_t (* var_c8_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                var_130 = &data_5b5cc8;
                int64_t var_128_5 = 2;
                int64_t var_110_4 = 0;
                int64_t** var_120_5 = &var_d0;
                int64_t var_118_4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_100 = 1;
                int64_t var_f8_5 = arg3;
                int64_t var_f0_3 = arg4;
                char var_e8_2 = 1;
                var_d0 = &var_100;
                int64_t (* var_c8_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_130 = &data_5b5e48;
                int64_t var_128_6 = 2;
                int64_t var_110_5 = 0;
                int64_t** var_120_6 = &var_d0;
                int64_t var_118_5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_130 = &data_5b5e38;
                int64_t var_128_7 = 1;
                int64_t var_120_7 = 8;
                var_118_5 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_58 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_58);
                rbp_1 = uucore::read_yes::hc350e858ab85cf03();
                
                if (var_88 != -0x8000000000000000)
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                        &var_88);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                        &var_70);
                }
            }
            else
            {
                int64_t var_78;
                int64_t var_48_1 = var_78;
                var_58 = var_88;
                int64_t var_60;
                int64_t var_98_1 = var_60;
                int128_t var_a8 = var_70;
                char const (** rax_3)[0x9];
                int64_t rdx_1;
                rax_3 = uucore::util_name::h60d842bf27b05e82();
                var_100 = rax_3;
                int64_t var_f8_1 = rdx_1;
                var_d0 = &var_100;
                int64_t (* var_c8_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                var_130 = &data_5b5cc8;
                int64_t var_128_1 = 2;
                int64_t var_110_1 = 0;
                int64_t** var_120_1 = &var_d0;
                int64_t var_118_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_d0 = 1;
                int64_t var_c8_2 = arg3;
                int64_t var_c0_1 = arg4;
                char var_b8_1 = 1;
                var_130 = &var_d0;
                int64_t (* var_128_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                int64_t* var_120_2 = &var_58;
                int64_t (* var_118_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                int128_t* var_110_2 = &var_a8;
                int64_t (* var_108_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_100 = &data_5b5df8;
                int64_t var_f8_2 = 4;
                int64_t var_e0_1 = 0;
                void* const* var_f0_1 = &var_130;
                char var_e8;
                var_e8 = 3;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_100);
                var_130 = &data_5b5e38;
                int64_t var_128_3 = 1;
                int64_t var_120_3 = 8;
                var_118_2 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                void* var_38 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_38);
                rbp_1 = uucore::read_yes::hc350e858ab85cf03();
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_58);
            }
            
            if (!rbp_1)
            {
                *arg1 = 8;
                arg1[1] = 1;
            }
            else
                *arg1 = 0xd;
        }
    }
}
