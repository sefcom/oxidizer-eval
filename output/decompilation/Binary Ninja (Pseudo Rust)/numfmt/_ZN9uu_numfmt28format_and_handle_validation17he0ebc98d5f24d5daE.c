
  fn uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(arg1: i64, arg2: i64, arg3: *mut i64) -> *mut i128

{
    let mut var_30: i64 = arg1;
    let var_28: i64 = arg2;
    let mut var_80: i64;
    uu_numfmt::format::format_and_print::he481f9ff3837b01f(&var_80, arg1, arg2, arg3);
    
    if var_80 != -0x8000000000000000
    {
        let var_70: i64;
        let var_38_1: i64 = var_70;
        let mut var_48: i128 = var_80;
        let mut rbp: i64;
        rbp = 1;
        let mut var_d0: *mut c_void;
        let mut var_c8: i128;
        let mut var_a0: *mut i64;
        let mut var_68: *mut *mut i64;
        let mut rbx: *mut i64;
        
        match jump_table_422394[arg3[0x19]]
        {
            0x9da35 =>
            {
                let var_b8_1: i64 = var_70;
                let var_c8_1: i128 = var_80;
                var_d0 = 2;
                return alloc::boxed::Box$LT$T$GT$::new::hd76962ee9d025faf(&var_d0);
            }
            0x9da61 =>
            {
                let mut rax_7: *mut i64;
                let mut rdx_1: i64;
                rax_7 = uucore::util_name::h60d842bf27b05e82();
                var_a0 = rax_7;
                let var_98_1: i64 = rdx_1;
                var_68 = &var_a0;
                let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_d0 = &data_535798;
                var_c8 = 2;
                let var_b0_1: i64 = 0;
                *var_c8[8] = &var_68;
                let var_b8_2: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d0);
                var_a0 = &var_48;
                let var_98_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_d0 = &data_5357b8;
                var_c8 = 2;
                let var_b0_2: i64 = 0;
                *var_c8[8] = &var_a0;
                let var_b8_3: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d0);
                'label_4bfea7:
                rbx = nullptr;
                'label_4bff70:
                var_a0 = &var_30;
                let var_98_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_d0 = &data_5357b8;
                var_c8 = 2;
                let var_b0_4: i64 = 0;
                *var_c8[8] = &var_a0;
                let var_b8_5: i64 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_d0);
                
                if rbx == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                        &var_48);
                }
            }
            0x9db13 =>
            {
                goto 'label_4bfea7;
            }
            0x9db1a =>
            {
                let var_50_1: i64 = var_70;
                let mut var_60: i64;
                var_60 = var_80;
                var_68 = 2;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2);
                let mut rax_9: i64;
                let mut rdx_2: i64;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                let mut var_20: i64 = rax_9;
                let var_18_1: i64 = rdx_2;
                var_a0 = &var_20;
                let var_98_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                let var_90_1: *mut i64 = &var_68;
                let var_88_1: fn(arg1: i64, arg2: *mut c_void) -> i64 = _$LT$uu_numfmt..errors..NumfmtError$u20$as$u20$core..fmt..Display$GT$::fmt::h7cd3ac5e9e6f0d91;
                var_d0 = &data_535768;
                var_c8 = 3;
                let var_b0_3: i64 = 0;
                *var_c8[8] = &var_a0;
                let var_b8_4: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d0);
                core::ptr::drop_in_place$LT$uu_numfmt..errors..NumfmtError$GT$::h5e25896d8823b081(
                    &var_68);
                rbx = 1;
                goto 'label_4bff70;
            }
        }
    }
    
    nullptr
}
