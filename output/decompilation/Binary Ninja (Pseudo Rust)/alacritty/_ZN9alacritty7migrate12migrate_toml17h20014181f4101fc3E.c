
  fn alacritty::migrate::migrate_toml::h20014181f4101fc3(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_1f8: i32;
    let rdx_1: u64 = _$LT$toml_edit..document..DocumentMut$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hbf17e879749770fa(&var_1f8, arg2[1], arg2[2]);
    let var_1f0: i128;
    let mut var_e8: i128;
    
    if var_1f8 != 0xc
    {
        memcpy(&var_e8, &var_1f8, 0xc8);
        alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c833a0, 
            &data_c833b0);
        
        if !(0 + -(var_1f8))
        {
            'label_85ffdb:
            arg1[3] = *var_1f0[8];
            *arg1.byte_offset(8) = var_1f8;
            *arg1 = 0xc;
            core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(
                &var_e8);
        }
        else
        {
            alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c833d0, 
                &data_c833e0);
            
            if var_1f8 != -0x8000000000000000
            {
                goto 'label_85ffdb;
            }
            
            alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c83400, 
                &data_c83410);
            
            if var_1f8 != -0x8000000000000000
            {
                goto 'label_85ffdb;
            }
            
            alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c83430, 
                &data_c83440);
            let mut rax_2: i64 = var_1f8;
            
            if rax_2 != -0x8000000000000000
            {
                'label_860017:
                *arg1.byte_offset(0x10) = var_1f0;
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
                
                if rax_2 != -0x8000000000000000
                {
                    goto 'label_860017;
                }
                
                alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c83490, 
                    &data_c834a0);
                rax_2 = var_1f8;
                
                if rax_2 != -0x8000000000000000
                {
                    goto 'label_860017;
                }
                
                alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c834c0, 
                    &data_c834d0);
                rax_2 = var_1f8;
                
                if rax_2 != -0x8000000000000000
                {
                    goto 'label_860017;
                }
                
                alacritty::migrate::move_value::ha75dcc59eab66952(&var_1f8, &var_e8, &data_c834f0, 
                    &data_c83500);
                rax_2 = var_1f8;
                
                if rax_2 != -0x8000000000000000
                {
                    goto 'label_860017;
                }
                
                memcpy(arg1, &var_e8, 0xc8);
            }
        }
    }
    else
    {
        let var_1a0: i64;
        let var_98_1: i64 = var_1a0;
        let var_1b0: i128;
        let var_a8_1: i128 = var_1b0;
        let var_1c0: i128;
        let var_b8_1: i128 = var_1c0;
        let var_1d0: i128;
        let var_c8_1: i128 = var_1d0;
        let var_1e0: i128;
        let var_d8_1: i128 = var_1e0;
        var_e8 = var_1f0;
        let mut var_208: *mut i128 = &var_e8;
        let var_200_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = _$LT$toml_edit..error..TomlError$u20$as$u20$core..fmt..Display$GT$::fmt::hbb15701e6108b9db;
        let mut var_118: *mut *mut c_void = &data_c83390;
        let var_110_1: i64 = 1;
        let var_f8_1: i64 = 0;
        let var_108_1: *mut *mut i128 = &var_208;
        let var_100_1: i64 = 1;
        let mut var_130: i128;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_130, 0, rdx_1, &var_118);
        let var_120: i64;
        arg1[3] = var_120;
        *arg1.byte_offset(8) = var_130;
        *arg1 = 0xc;
        core::ptr::drop_in_place$LT$toml_edit..error..TomlError$GT$::hff698a679f654637(&var_e8);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(arg2)
}
