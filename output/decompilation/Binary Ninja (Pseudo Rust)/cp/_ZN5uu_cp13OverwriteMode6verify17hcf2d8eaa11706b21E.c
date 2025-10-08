
  fn uu_cp::OverwriteMode::verify::hcf2d8eaa11706b21(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64, arg5: i8)

{
    if arg2 == 0
    {
        *arg1 = -0x7ffffffffffffff4;
    }
    else
    {
        let mut var_128: *mut c_void;
        let mut var_f8: *mut *mut i64;
        let mut var_98: *mut i64;
        
        if arg2 != 1
        {
            if arg5 != 0
            {
                var_f8 = 1;
                let var_f0_4: i64 = arg3;
                let var_e8_3: i64 = arg4;
                let var_e0_2: i8 = 1;
                var_98 = &var_f8;
                let var_90_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_128 = &data_55eb08;
                let var_120_5: i64 = 2;
                let var_108_4: i64 = 0;
                let var_118_5: *mut *mut i64 = &var_98;
                let var_110_4: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_128);
            }
            
            *arg1 = -0x7ffffffffffffff9;
            arg1[1] = 0;
        }
        else
        {
            uu_cp::file_mode_for_interactive_overwrite::h1fc34d69e34b5e78(&var_98, arg3);
            
            if var_98 != -0x8000000000000000
            {
                let var_88: i64;
                let var_58_1: i64 = var_88;
                let mut var_68: i128 = var_98;
                let var_70: i64;
                let var_38_1: i64 = var_70;
                let var_80: i128;
                let mut var_48: i128 = var_80;
                let mut rax_7: *mut *mut i64;
                let mut rdx_3: i64;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_f8 = rax_7;
                let var_f0_5: i64 = rdx_3;
                let mut var_c8: u64 = &var_f8;
                let var_c0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                var_128 = &data_55e700;
                let var_120_6: i64 = 2;
                let var_108_5: i64 = 0;
                let var_118_6: *mut u64 = &var_c8;
                let var_110_5: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_c8 = 1;
                let var_c0_3: i64 = arg3;
                let var_b8_1: i64 = arg4;
                let var_b0_1: i8 = 1;
                var_128 = &var_c8;
                let var_120_7: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_118_7: *mut i128 = &var_68;
                let mut var_110_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_108_6: *mut i128 = &var_48;
                let var_100_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_f8 = &data_55eb28;
                let var_f0_6: i64 = 4;
                let var_d8_1: i64 = 0;
                let var_e8_4: *const *mut c_void = &var_128;
                let mut var_e0: i8;
                var_e0 = 3;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
                var_128 = &data_55eb68;
                let var_120_8: i64 = 1;
                let var_118_8: i64 = 8;
                var_110_6 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_128);
                let rax_11: i8 = uucore::read_yes::h67cb9532536454c0();
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_48);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_68);
                
                if rax_11 != 0
                {
                    *arg1 = -0x7ffffffffffffff4;
                }
                else
                {
                    *arg1 = -0x7ffffffffffffff9;
                    arg1[1] = 1;
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4ba7db36afe98420(&var_98);
                let mut rax_1: *mut *mut i64;
                let mut rdx_1: i64;
                rax_1 = uucore::util_name::h074417a1e6395129();
                var_f8 = rax_1;
                let var_f0_1: i64 = rdx_1;
                var_98 = &var_f8;
                let var_90_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                var_128 = &data_55e700;
                let var_120_1: i64 = 2;
                let var_108_1: i64 = 0;
                let var_118_1: *mut *mut i64 = &var_98;
                let var_110_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_f8 = 1;
                let var_f0_2: i64 = arg3;
                let var_e8_1: i64 = arg4;
                let var_e0_1: i8 = 1;
                var_98 = &var_f8;
                let var_90_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_128 = &data_55eb78;
                let var_120_2: i64 = 2;
                let var_108_2: i64 = 0;
                let var_118_2: *mut *mut i64 = &var_98;
                let mut var_110_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_128 = &data_55eb68;
                let var_120_3: i64 = 1;
                let var_118_3: i64 = 8;
                var_110_2 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_128);
                
                if uucore::read_yes::h67cb9532536454c0() == 0
                {
                    *arg1 = -0x7ffffffffffffff9;
                    arg1[1] = 1;
                }
                else
                {
                    *arg1 = -0x7ffffffffffffff4;
                }
            }
        }
    }
}
