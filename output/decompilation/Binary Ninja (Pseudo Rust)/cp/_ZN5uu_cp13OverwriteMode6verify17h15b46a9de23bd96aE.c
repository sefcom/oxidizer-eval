
  fn uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64, arg5: i8)

{
    if arg2 == 0
    {
        *arg1 = 0xd;
    }
    else
    {
        let mut var_130: *mut c_void;
        let mut var_100: *mut *mut [i8; 0x9];
        let mut var_88: *const *mut *mut [i8; 0x9];
        
        if arg2 != 1
        {
            if arg5 != 0
            {
                var_100 = 1;
                let var_f8_3: i64 = arg3;
                let var_f0_2: i64 = arg4;
                let var_e8_1: i8 = 1;
                var_88 = &var_100;
                let var_80_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_130 = &data_5b5dd8;
                let var_128_4: i64 = 2;
                let var_110_3: i64 = 0;
                let var_120_4: *mut *const *mut *mut [i8; 0x9] = &var_88;
                let var_118_3: i64 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_130);
            }
            
            *arg1 = 8;
            arg1[1] = 0;
        }
        else
        {
            uu_cp::file_mode_for_interactive_overwrite::h819430914012e276(&var_88);
            let mut rbp_1: i8;
            let mut var_d0: *mut i64;
            let mut var_70: i128;
            let mut var_58: *mut c_void;
            
            if var_88 == -0x8000000000000000
            {
                let mut rax_5: *mut *mut [i8; 0x9];
                let mut rdx_2: i64;
                rax_5 = uucore::util_name::h60d842bf27b05e82();
                var_100 = rax_5;
                let var_f8_4: i64 = rdx_2;
                var_d0 = &var_100;
                let var_c8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                var_130 = &data_5b5cc8;
                let var_128_5: i64 = 2;
                let var_110_4: i64 = 0;
                let var_120_5: *mut *mut i64 = &var_d0;
                let var_118_4: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_100 = 1;
                let var_f8_5: i64 = arg3;
                let var_f0_3: i64 = arg4;
                let var_e8_2: i8 = 1;
                var_d0 = &var_100;
                let var_c8_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_130 = &data_5b5e48;
                let var_128_6: i64 = 2;
                let var_110_5: i64 = 0;
                let var_120_6: *mut *mut i64 = &var_d0;
                let mut var_118_5: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_130 = &data_5b5e38;
                let var_128_7: i64 = 1;
                let var_120_7: i64 = 8;
                var_118_5 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_58 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_58);
                rbp_1 = uucore::read_yes::hc350e858ab85cf03();
                
                if var_88 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                        &var_88);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                        &var_70);
                }
            }
            else
            {
                let var_78: i64;
                let var_48_1: i64 = var_78;
                var_58 = var_88;
                let var_60: i64;
                let var_98_1: i64 = var_60;
                let mut var_a8: i128 = var_70;
                let mut rax_3: *mut *mut [i8; 0x9];
                let mut rdx_1: i64;
                rax_3 = uucore::util_name::h60d842bf27b05e82();
                var_100 = rax_3;
                let var_f8_1: i64 = rdx_1;
                var_d0 = &var_100;
                let var_c8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                var_130 = &data_5b5cc8;
                let var_128_1: i64 = 2;
                let var_110_1: i64 = 0;
                let var_120_1: *mut *mut i64 = &var_d0;
                let var_118_1: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                var_d0 = 1;
                let var_c8_2: i64 = arg3;
                let var_c0_1: i64 = arg4;
                let var_b8_1: i8 = 1;
                var_130 = &var_d0;
                let var_128_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                let var_120_2: *mut i64 = &var_58;
                let mut var_118_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                let var_110_2: *mut i128 = &var_a8;
                let var_108_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_100 = &data_5b5df8;
                let var_f8_2: i64 = 4;
                let var_e0_1: i64 = 0;
                let var_f0_1: *const *mut c_void = &var_130;
                let mut var_e8: i8;
                var_e8 = 3;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_100);
                var_130 = &data_5b5e38;
                let var_128_3: i64 = 1;
                let var_120_3: i64 = 8;
                var_118_2 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                let mut var_38: *mut c_void = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_38);
                rbp_1 = uucore::read_yes::hc350e858ab85cf03();
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_58);
            }
            
            if rbp_1 == 0
            {
                *arg1 = 8;
                arg1[1] = 1;
            }
            else
            {
                *arg1 = 0xd;
            }
        }
    }
}
