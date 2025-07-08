
  fn uu_tail::args::Settings::check_warnings::hc95159a783f4a1c8(arg1: *mut c_void)

{
    let mut r14: i8 = *arg1.byte_offset(0x4c);
    let mut var_70: *mut c_void;
    let mut var_40: *mut i64;
    let mut var_30: i64;
    let mut rax: u32;
    
    if *arg1.byte_offset(0x48) != 0
    {
        rax = r14;
        
        if rax == 0
        {
            let mut rax_2: i64;
            let mut rdx_2: i64;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            var_30 = rax_2;
            let var_28_2: i64 = rdx_2;
            var_40 = &var_30;
            let var_38_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            var_70 = &data_5bb5c0;
            let var_68_3: i64 = 2;
            let var_50_2: i64 = 0;
            let var_60_3: *mut *mut i64 = &var_40;
            let mut var_58_2: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            var_70 = &data_5bb5f0;
            let var_68_4: i64 = 1;
            let var_60_4: i64 = 8;
            var_58_2 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            r14 = 0;
        }
        else if rax == 2
        {
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 = uucore::util_name::h60d842bf27b05e82();
            var_30 = rax_1;
            let var_28_1: i64 = rdx_1;
            var_40 = &var_30;
            let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            var_70 = &data_5bb5c0;
            let var_68_1: i64 = 2;
            let var_50_1: i64 = 0;
            let var_60_1: *mut *mut i64 = &var_40;
            let mut var_58_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            var_70 = &data_5bb5e0;
            let var_68_2: i64 = 1;
            let var_60_2: i64 = 8;
            var_58_1 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            r14 = 2;
        }
    }
    
    let rbp: i32 = *arg1.byte_offset(0x44);
    let mut var_58_3: i64;
    let mut rax_4: *mut c_void;
    
    if rbp != 0
    {
        if r14 != 2
        {
            if uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(rbp) == 0
            {
                let mut rax_6: i64;
                let mut rdx_4: i64;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                var_30 = rax_6;
                let var_28_4: i64 = rdx_4;
                var_40 = &var_30;
                let var_38_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_70 = &data_5bb5c0;
                let var_68_6: i64 = 2;
                let var_50_4: i64 = 0;
                let var_60_6: *mut *mut i64 = &var_40;
                let mut var_58_4: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                var_70 = &data_5bb610;
                let var_68_7: i64 = 1;
                let var_60_7: i64 = 8;
                var_58_4 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
            }
            
            goto 'label_4f9b3b;
        }
        
        let mut rax_3: i64;
        let mut rdx_3: i64;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_30 = rax_3;
        let var_28_3: i64 = rdx_3;
        var_40 = &var_30;
        let var_38_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        var_70 = &data_5bb5c0;
        let var_68_5: i64 = 2;
        let var_50_3: i64 = 0;
        let var_60_5: *mut *mut i64 = &var_40;
        var_58_3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
        rax_4 = &data_5bb600;
        'label_4f9bff:
        var_70 = rax_4;
        let var_68_9: i64 = 1;
        let var_60_9: i64 = 8;
        var_58_3 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
    }
    else if r14 != 2
    {
        'label_4f9b3b:
        rax = uu_tail::args::Settings::has_stdin::h99629f892128a309(arg1);
        
        if rax != 0
        {
            if rbp == 0 && r14 == 0 && *arg1.byte_offset(0x28) == 1
            {
                same_file::Handle::stdin::hcbeef53980d87d0e(&var_70);
                rax = core::result::Result$LT$T$C$E$GT$::map_or::h697c815cf75a0919(&var_70);
            }
            
            if rbp != 0 || r14 != 0 || *arg1.byte_offset(0x28) != 1 || rax == 0
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_70 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                
                if std::sys::pal::unix::io::is_terminal::h77c9f849b4b1037f() != 0
                {
                    let mut rax_7: i64;
                    let mut rdx_5: i64;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    var_30 = rax_7;
                    let var_28_5: i64 = rdx_5;
                    var_40 = &var_30;
                    let var_38_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    var_70 = &data_5bb5c0;
                    let var_68_8: i64 = 2;
                    let var_50_5: i64 = 0;
                    let var_60_8: *mut *mut i64 = &var_40;
                    var_58_3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                    rax_4 = &data_5bb620;
                    goto 'label_4f9bff;
                }
            }
        }
    }
}
