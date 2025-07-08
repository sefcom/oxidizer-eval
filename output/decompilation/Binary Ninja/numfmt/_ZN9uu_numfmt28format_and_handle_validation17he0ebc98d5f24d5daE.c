
  int128_t* uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_30 = arg1;
    int64_t var_28 = arg2;
    int64_t var_80;
    uu_numfmt::format::format_and_print::he481f9ff3837b01f(&var_80, arg1, arg2, arg3);
    
    if (var_80 != -0x8000000000000000)
    {
        int64_t var_70;
        int64_t var_38_1 = var_70;
        int128_t var_48 = var_80;
        int64_t rbp;
        rbp = 1;
        void* const var_d0;
        int128_t var_c8;
        int64_t* var_a0;
        int64_t** var_68;
        int64_t* rbx;
        
        switch (jump_table_422394[arg3[0x19]])
        {
            case 0x9da35:
            {
                int64_t var_b8_1 = var_70;
                int128_t var_c8_1 = var_80;
                var_d0 = 2;
                return alloc::boxed::Box$LT$T$GT$::new::hd76962ee9d025faf(&var_d0);
                break;
            }
            case 0x9da61:
            {
                int64_t* rax_7;
                int64_t rdx_1;
                rax_7 = uucore::util_name::h60d842bf27b05e82();
                var_a0 = rax_7;
                int64_t var_98_1 = rdx_1;
                var_68 = &var_a0;
                int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_d0 = &data_535798;
                var_c8 = 2;
                int64_t var_b0_1 = 0;
                *var_c8[8] = &var_68;
                int64_t var_b8_2 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d0);
                var_a0 = &var_48;
                int64_t (* var_98_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_d0 = &data_5357b8;
                var_c8 = 2;
                int64_t var_b0_2 = 0;
                *var_c8[8] = &var_a0;
                int64_t var_b8_3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d0);
                label_4bfea7:
                rbx = nullptr;
                label_4bff70:
                var_a0 = &var_30;
                int64_t (* var_98_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_d0 = &data_5357b8;
                var_c8 = 2;
                int64_t var_b0_4 = 0;
                *var_c8[8] = &var_a0;
                int64_t var_b8_5 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_d0);
                
                if (!rbx)
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                        &var_48);
                break;
            }
            case 0x9db13:
            {
                goto label_4bfea7;
            }
            case 0x9db1a:
            {
                int64_t var_50_1 = var_70;
                int64_t var_60;
                var_60 = var_80;
                var_68 = 2;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2);
                int64_t rax_9;
                int64_t rdx_2;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                int64_t var_20 = rax_9;
                int64_t var_18_1 = rdx_2;
                var_a0 = &var_20;
                int64_t (* var_98_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                int64_t* var_90_1 = &var_68;
                int64_t (* var_88_1)(int64_t arg1, void* arg2) = _$LT$uu_numfmt..errors..NumfmtError$u20$as$u20$core..fmt..Display$GT$::fmt::h7cd3ac5e9e6f0d91;
                var_d0 = &data_535768;
                var_c8 = 3;
                int64_t var_b0_3 = 0;
                *var_c8[8] = &var_a0;
                int64_t var_b8_4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d0);
                core::ptr::drop_in_place$LT$uu_numfmt..errors..NumfmtError$GT$::h5e25896d8823b081(
                    &var_68);
                rbx = 1;
                goto label_4bff70;
            }
        }
    }
    
    return nullptr;
}
