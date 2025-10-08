
  fn alacritty::migrate::migrate::hd130364cc6c1f643(arg1: *mut i64) -> i64

{
    let mut r14: i64 = -0x8000000000000000;
    let r15: i64 = *arg1;
    let mut var_118: i128;
    let mut var_78: i128;
    
    if -(r15) != -0x8000000000000000
    {
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_118, arg1[1], arg1[2]);
        let var_108: i64;
        let var_68_1: i64 = var_108;
        var_78 = var_118;
    }
    else
    {
        var_78 = -0x8000000000000000;
    }
    
    core::option::Option$LT$T$GT$::or_else::h0b1f5b4de00d6415(&var_118, &var_78);
    let mut var_30: i64;
    core::option::Option$LT$T$GT$::or_else::h4ae75538c15e033b(&var_30, &var_118);
    
    if var_30 == -0x8000000000000000
    {
        var_118 = &data_c83320;
        *var_118[8] = 1;
        let var_108_2: i64 = 8;
        let var_100_1: i128 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        std::process::exit::hcda678ff272dfed1(1);
        /* no return */
    }
    
    let mut var_c8: i128 = var_30;
    let mut var_e8: i128;
    let mut var_a8: *mut i128;
    let var_60: i64;
    let mut var_48: *mut i128;
    let var_20: u64;
    
    if arg1[3] == 0
    {
        if r15 != -0x8000000000000000
        {
            _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_118, arg1[1], arg1[2]);
            r14 = var_118;
            var_78 = var_118;
        }
        
        let rax_4: i16 = *arg1.byte_offset(0x19);
        var_e8 = r14;
        var_e8 = var_78;
        let var_cf_1: i16 = rax_4;
        let var_cd_1: i8 = 1;
        let var_d0_1: i8 = 1;
        alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_78, &var_e8, *var_c8[8], var_20, 
            5);
        
        if var_78 == 1
        {
            let var_38: i64 = var_60;
            var_48 = var_78;
            var_118 = &data_c83330;
            *var_118[8] = 1;
            let var_108_5: i64 = 8;
            let mut var_100_3: i128 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
            var_a8 = &var_c8;
            let var_a0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            let var_98_2: *mut *mut i128 = &var_48;
            let var_90_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_118 = &data_c83340;
            *var_118[8] = 3;
            *var_100_3[8] = 0;
            let var_108_6: *mut *mut i128 = &var_a8;
            var_100_3 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
            std::process::exit::hcda678ff272dfed1(1);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty..migrate..Migration$C$alloc..string..String$GT$$GT$::h5cb2b8afeb317d5d(&var_78);
        core::ptr::drop_in_place$LT$alacritty..cli..MigrateOptions$GT$::h13a483324731ab8c(&var_e8);
    }
    
    alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_78, arg1, *var_c8[8], var_20, 5);
    
    if var_78 == 1
    {
        let var_d8: i64 = var_60;
        var_e8 = var_78;
        var_118 = &data_c83330;
        *var_118[8] = 1;
        let var_108_3: i64 = 8;
        let mut var_100_2: i128 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        var_a8 = &var_c8;
        let var_a0: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        let var_98_1: *mut i128 = &var_e8;
        let var_90: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_118 = &data_c83340;
        *var_118[8] = 3;
        *var_100_2[8] = 0;
        let var_108_4: *mut *mut i128 = &var_a8;
        var_100_2 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        std::process::exit::hcda678ff272dfed1(1);
        /* no return */
    }
    
    let var_50: i64;
    let var_88: i64 = var_50;
    let mut var_98: i64;
    var_98 = var_60;
    var_a8 = var_78;
    
    if *arg1.byte_offset(0x1b) == 0
    {
        alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(&var_e8, &var_a8, 0);
        var_48 = &var_e8;
        let var_40_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_118 = &data_c82f40;
        *var_118[8] = 2;
        let mut var_100: i128;
        *var_100[8] = 0;
        let var_108_1: *mut *mut i128 = &var_48;
        var_100 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_118);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_e8);
    }
    
    core::ptr::drop_in_place$LT$alacritty..migrate..Migration$GT$::h82cf96c51dcdbc49(&var_a8);
    core::mem::drop::ha42964a555fb617b(&var_c8);
    core::ptr::drop_in_place$LT$alacritty..cli..MigrateOptions$GT$::h13a483324731ab8c(arg1)
}
