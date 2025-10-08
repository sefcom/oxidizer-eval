
  fn uu_rm::handle_writable_directory::ha4e75ec62de4407c(arg1: i64, arg2: i64, arg3: i8, arg4: i8, arg5: i32) -> i64

{
    let mut result: i8;
    let mut rcx: i8;
    
    if arg3 == 2 || (arg3 & 1) == 0
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rcx = std::sys::io::is_terminal::isatty::is_terminal::he401db6fc1473b6f() ^ 1;
        result = 1;
    }
    
    if (arg3 != 2 && (arg3 & 1) != 0) || (arg4 == 3 & rcx) == 0
    {
        let mut var_a0: *mut c_void;
        let mut var_60: *mut i64;
        let mut var_50: *mut *mut i64;
        
        if (arg5 & 0x100) != 0
        {
            if arg5 >= 0
            {
                let mut rax_4: *mut *mut i64;
                let mut rdx_3: i64;
                rax_4 = uucore::util_name::h074417a1e6395129();
                var_50 = rax_4;
                let var_48_4: i64 = rdx_3;
                var_60 = &var_50;
                let var_58_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                let var_98_5: i64 = 2;
                let var_80_4: i64 = 0;
                let var_90_5: *mut *mut i64 = &var_60;
                let var_88_4: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                let var_48_5: i64 = arg1;
                let var_40_3: i64 = arg2;
                let var_38_2: i8 = 1;
                var_60 = &var_50;
                let var_58_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea710;
                let var_98_6: i64 = 2;
                let var_80_5: i64 = 0;
                let var_90_6: *mut *mut i64 = &var_60;
                let mut var_88_5: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                let var_98_7: i64 = 1;
                let var_90_7: i64 = 8;
                var_88_5 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
            
            result = 1;
            
            if arg4 == 2
            {
                let mut rax_12: *mut *mut i64;
                let mut rdx_7: i64;
                rax_12 = uucore::util_name::h074417a1e6395129();
                var_50 = rax_12;
                let var_48_10: i64 = rdx_7;
                var_60 = &var_50;
                let var_58_10: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                let var_98_13: i64 = 2;
                let var_80_10: i64 = 0;
                let var_90_13: *mut *mut i64 = &var_60;
                let var_88_10: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                let var_48_11: i64 = arg1;
                let var_40_7: i64 = arg2;
                let var_38_4: i8 = 1;
                var_60 = &var_50;
                let var_58_11: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea730;
                let var_98_14: i64 = 2;
                let var_80_11: i64 = 0;
                let var_90_14: *mut *mut i64 = &var_60;
                let mut var_88_11: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                let var_98_15: i64 = 1;
                let var_90_15: i64 = 8;
                var_88_11 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
        }
        else
        {
            if arg5 >= 0
            {
                let mut rax: *mut *mut i64;
                let mut rdx_1: i64;
                rax = uucore::util_name::h074417a1e6395129();
                var_50 = rax;
                let var_48_1: i64 = rdx_1;
                var_60 = &var_50;
                let var_58_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                let var_98_1: i64 = 2;
                let var_80_1: i64 = 0;
                let var_90_1: *mut *mut i64 = &var_60;
                let var_88_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                let var_48_2: i64 = arg1;
                let var_40_1: i64 = arg2;
                let var_38_1: i8 = 1;
                var_60 = &var_50;
                let var_58_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea6f0;
                let var_98_2: i64 = 2;
                let var_80_2: i64 = 0;
                let var_90_2: *mut *mut i64 = &var_60;
                let mut var_88_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                let var_98_3: i64 = 1;
                let var_90_3: i64 = 8;
                var_88_2 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
            
            result = 1;
            
            if arg4 == 2
            {
                let mut rax_8: *mut *mut i64;
                let mut rdx_5: i64;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_50 = rax_8;
                let var_48_7: i64 = rdx_5;
                var_60 = &var_50;
                let var_58_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a0 = &data_4ea4a0;
                let var_98_9: i64 = 2;
                let var_80_7: i64 = 0;
                let var_90_9: *mut *mut i64 = &var_60;
                let var_88_7: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_50 = 1;
                let var_48_8: i64 = arg1;
                let var_40_5: i64 = arg2;
                let var_38_3: i8 = 1;
                var_60 = &var_50;
                let var_58_8: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a0 = &data_4ea6f0;
                let var_98_10: i64 = 2;
                let var_80_8: i64 = 0;
                let var_90_10: *mut *mut i64 = &var_60;
                let mut var_88_8: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &data_4ea630;
                let var_98_11: i64 = 1;
                let var_90_11: i64 = 8;
                var_88_8 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
                var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_a0);
                return uucore::read_yes::h67cb9532536454c0();
            }
        }
    }
    
    result
}
