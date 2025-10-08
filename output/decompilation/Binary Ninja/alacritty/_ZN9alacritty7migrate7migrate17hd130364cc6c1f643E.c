
  int64_t alacritty::migrate::migrate::hd130364cc6c1f643(int64_t* arg1)

{
    int64_t r14 = -0x8000000000000000;
    int64_t r15 = *arg1;
    int128_t var_118;
    int128_t var_78;
    
    if (-(r15) != -0x8000000000000000)
    {
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_118, arg1[1], arg1[2]);
        int64_t var_108;
        int64_t var_68_1 = var_108;
        var_78 = var_118;
    }
    else
        var_78 = -0x8000000000000000;
    
    core::option::Option$LT$T$GT$::or_else::h0b1f5b4de00d6415(&var_118, &var_78);
    int64_t var_30;
    core::option::Option$LT$T$GT$::or_else::h4ae75538c15e033b(&var_30, &var_118);
    
    if (var_30 == -0x8000000000000000)
    {
        var_118 = &data_c83320;
        *var_118[8] = 1;
        int64_t var_108_2 = 8;
        int128_t var_100_1 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        std::process::exit::hcda678ff272dfed1(1);
        /* no return */
    }
    
    int128_t var_c8 = var_30;
    int128_t var_e8;
    int128_t* var_a8;
    int64_t var_60;
    int128_t* var_48;
    uint64_t var_20;
    
    if (!arg1[3])
    {
        if (r15 != -0x8000000000000000)
        {
            _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_118, arg1[1], arg1[2]);
            r14 = var_118;
            var_78 = var_118;
        }
        
        int16_t rax_4 = *(arg1 + 0x19);
        var_e8 = r14;
        var_e8 = var_78;
        int16_t var_cf_1 = rax_4;
        char var_cd_1 = 1;
        char var_d0_1 = 1;
        alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_78, &var_e8, *var_c8[8], var_20, 
            5);
        
        if (var_78 == 1)
        {
            int64_t var_38 = var_60;
            var_48 = var_78;
            var_118 = &data_c83330;
            *var_118[8] = 1;
            int64_t var_108_5 = 8;
            int128_t var_100_3 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
            var_a8 = &var_c8;
            int64_t (* var_a0_1)(void* arg1, int64_t* arg2) =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            int128_t** var_98_2 = &var_48;
            int64_t (* var_90_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_118 = &data_c83340;
            *var_118[8] = 3;
            *var_100_3[8] = 0;
            int128_t** var_108_6 = &var_a8;
            var_100_3 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
            std::process::exit::hcda678ff272dfed1(1);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty..migrate..Migration$C$alloc..string..String$GT$$GT$::h5cb2b8afeb317d5d(&var_78);
        core::ptr::drop_in_place$LT$alacritty..cli..MigrateOptions$GT$::h13a483324731ab8c(&var_e8);
    }
    
    alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_78, arg1, *var_c8[8], var_20, 5);
    
    if (var_78 == 1)
    {
        int64_t var_d8 = var_60;
        var_e8 = var_78;
        var_118 = &data_c83330;
        *var_118[8] = 1;
        int64_t var_108_3 = 8;
        int128_t var_100_2 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        var_a8 = &var_c8;
        int64_t (* var_a0)(void* arg1, int64_t* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        int128_t* var_98_1 = &var_e8;
        int64_t (* var_90)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_118 = &data_c83340;
        *var_118[8] = 3;
        *var_100_2[8] = 0;
        int128_t** var_108_4 = &var_a8;
        var_100_2 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
        std::process::exit::hcda678ff272dfed1(1);
        /* no return */
    }
    
    int64_t var_50;
    int64_t var_88 = var_50;
    int64_t var_98;
    var_98 = var_60;
    var_a8 = var_78;
    
    if (!*(arg1 + 0x1b))
    {
        alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(&var_e8, &var_a8, 0);
        var_48 = &var_e8;
        int64_t (* var_40_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_118 = &data_c82f40;
        *var_118[8] = 2;
        int128_t var_100;
        *var_100[8] = 0;
        int128_t** var_108_1 = &var_48;
        var_100 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_118);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_e8);
    }
    
    core::ptr::drop_in_place$LT$alacritty..migrate..Migration$GT$::h82cf96c51dcdbc49(&var_a8);
    core::mem::drop::ha42964a555fb617b(&var_c8);
    return core::ptr::drop_in_place$LT$alacritty..cli..MigrateOptions$GT$::h13a483324731ab8c(arg1);
}
