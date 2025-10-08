
  fn uu_tail::args::Settings::check_warnings::h0e1cfe5e0e5b7f3f(arg1: *mut c_void)

{
    let mut var_70: *mut c_void;
    let mut var_40: *mut i64;
    let mut var_30: i64;
    let mut rax: u32;
    
    if *arg1.byte_offset(0x48) != 0
    {
        rax = *arg1.byte_offset(0x4c);
        let mut var_58_1: i64;
        let mut rax_2: *mut *mut [i8; 0xbb];
        
        if rax == 0
        {
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_30 = rax_3;
            let var_28_2: i64 = rdx_2;
            var_40 = &var_30;
            let var_38_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_70 = &data_573098;
            let var_68_2: i64 = 2;
            let var_50_2: i64 = 0;
            let var_60_2: *mut *mut i64 = &var_40;
            var_58_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            rax_2 = &data_5730c8;
            'label_49fa54:
            var_70 = rax_2;
            let var_68_3: i64 = 1;
            let var_60_3: i64 = 8;
            var_58_1 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        }
        else if rax == 2
        {
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 = uucore::util_name::h074417a1e6395129();
            var_30 = rax_1;
            let var_28_1: i64 = rdx_1;
            var_40 = &var_30;
            let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_70 = &data_573098;
            let var_68_1: i64 = 2;
            let var_50_1: i64 = 0;
            let var_60_1: *mut *mut i64 = &var_40;
            var_58_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            rax_2 = &data_5730b8;
            goto 'label_49fa54;
        }
    }
    
    let rbp: i32 = *arg1.byte_offset(0x44);
    let r14: i8 = *arg1.byte_offset(0x4c);
    let mut var_58_2: i64;
    let mut rax_5: *mut c_void;
    
    if rbp != 0
    {
        if r14 != 2
        {
            if uu_tail::platform::unix::supports_pid_checks::ha9469f91d23a1bd0(rbp) == 0
            {
                let mut rax_7: i64;
                let mut rdx_4: i64;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_30 = rax_7;
                let var_28_4: i64 = rdx_4;
                var_40 = &var_30;
                let var_38_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_70 = &data_573098;
                let var_68_5: i64 = 2;
                let var_50_4: i64 = 0;
                let var_60_5: *mut *mut i64 = &var_40;
                let mut var_58_3: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
                var_70 = &data_5730e8;
                let var_68_6: i64 = 1;
                let var_60_6: i64 = 8;
                var_58_3 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            }
            
            goto 'label_49fbb7;
        }
        
        let mut rax_4: i64;
        let mut rdx_3: i64;
        rax_4 = uucore::util_name::h074417a1e6395129();
        var_30 = rax_4;
        let var_28_3: i64 = rdx_3;
        var_40 = &var_30;
        let var_38_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
        var_70 = &data_573098;
        let var_68_4: i64 = 2;
        let var_50_3: i64 = 0;
        let var_60_4: *mut *mut i64 = &var_40;
        var_58_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        rax_5 = &data_5730d8;
        'label_49fc78:
        var_70 = rax_5;
        let var_68_8: i64 = 1;
        let var_60_8: i64 = 8;
        var_58_2 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
    }
    else if r14 != 2
    {
        'label_49fbb7:
        
        if uu_tail::args::Settings::has_stdin::h300d2999bcc0a3dc(arg1) != 0
        {
            rax = rbp != 0;
            
            if (r14 != 0 | rax) != 0 || *arg1.byte_offset(0x28) != 1
            {
                'label_49fbf9:
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                
                if std::sys::io::is_terminal::isatty::is_terminal::hd4d42d74aaf8df1c() != 0
                {
                    let mut rax_8: i64;
                    let mut rdx_5: i64;
                    rax_8 = uucore::util_name::h074417a1e6395129();
                    var_30 = rax_8;
                    let var_28_5: i64 = rdx_5;
                    var_40 = &var_30;
                    let var_38_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                    var_70 = &data_573098;
                    let var_68_7: i64 = 2;
                    let var_50_5: i64 = 0;
                    let var_60_7: *mut *mut i64 = &var_40;
                    var_58_2 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
                    rax_5 = &data_5730f8;
                    goto 'label_49fc78;
                }
            }
            else
            {
                same_file::Handle::stdin::h12b97f800844609d(&var_70);
                
                if core::result::Result$LT$T$C$E$GT$::is_ok_and::he1bd16e776e93480(&var_70) == 0
                {
                    goto 'label_49fbf9;
                }
            }
        }
    }
}
