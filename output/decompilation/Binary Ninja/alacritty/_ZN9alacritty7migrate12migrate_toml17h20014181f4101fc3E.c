
  int64_t alacritty::migrate::migrate_toml::h20014181f4101fc3(int64_t* arg1, int64_t* arg2)

{
    int32_t var_1f8;
    uint64_t rdx_1 = _$LT$toml_edit..document..DocumentMut$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hbf17e879749770fa(&var_1f8, arg2[1], arg2[2]);
    int128_t var_1f0;
    int128_t var_e8;
    
    if (var_1f8 != 0xc)
    {
        memcpy(&var_e8, &var_1f8, 0xc8);
        alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c833a0, 
            &data_c833b0);
        
        if (!(0 + -(var_1f8)))
        {
            label_85ffdb:
            arg1[3] = *var_1f0[8];
            *(arg1 + 8) = var_1f8;
            *arg1 = 0xc;
            core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(
                &var_e8);
        }
        else
        {
            alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c833d0, 
                &data_c833e0);
            
            if (var_1f8 != -0x8000000000000000)
                goto label_85ffdb;
            
            alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c83400, 
                &data_c83410);
            
            if (var_1f8 != -0x8000000000000000)
                goto label_85ffdb;
            
            alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c83430, 
                &data_c83440);
            int64_t rax_2 = var_1f8;
            
            if (rax_2 != -0x8000000000000000)
            {
                label_860017:
                *(arg1 + 0x10) = var_1f0;
                arg1[1] = rax_2;
                *arg1 = 0xc;
                core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(
                    &var_e8);
            }
            else
            {
                alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c83460, 
                    &data_c83470);
                rax_2 = var_1f8;
                
                if (rax_2 != -0x8000000000000000)
                    goto label_860017;
                
                alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c83490, 
                    &data_c834a0);
                rax_2 = var_1f8;
                
                if (rax_2 != -0x8000000000000000)
                    goto label_860017;
                
                alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c834c0, 
                    &data_c834d0);
                rax_2 = var_1f8;
                
                if (rax_2 != -0x8000000000000000)
                    goto label_860017;
                
                alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c834f0, 
                    &data_c83500);
                rax_2 = var_1f8;
                
                if (rax_2 != -0x8000000000000000)
                    goto label_860017;
                
                memcpy(arg1, &var_e8, 0xc8);
            }
        }
    }
    else
    {
        int64_t var_1a0;
        int64_t var_98_1 = var_1a0;
        int128_t var_1b0;
        int128_t var_a8_1 = var_1b0;
        int128_t var_1c0;
        int128_t var_b8_1 = var_1c0;
        int128_t var_1d0;
        int128_t var_c8_1 = var_1d0;
        int128_t var_1e0;
        int128_t var_d8_1 = var_1e0;
        var_e8 = var_1f0;
        int128_t* var_208 = &var_e8;
        uint64_t (* var_200_1)(int32_t* arg1, int64_t* arg2) = _$LT$toml_edit..error..TomlError$u20$as$u20$core..fmt..Display$GT$::fmt::hbb15701e6108b9db;
        void** const var_118 = &data_c83390;
        int64_t var_110_1 = 1;
        int64_t var_f8_1 = 0;
        int128_t** var_108_1 = &var_208;
        int64_t var_100_1 = 1;
        int128_t var_130;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_130, 0, rdx_1, &var_118);
        int64_t var_120;
        arg1[3] = var_120;
        *(arg1 + 8) = var_130;
        *arg1 = 0xc;
        core::ptr::drop_in_place$LT$toml_edit..error..TomlError$GT$::hff698a679f654637(&var_e8);
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(arg2);
}
