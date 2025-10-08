
  uint64_t uu_mkfifo::uumain::uumain::hcd654a3e885f58db(int64_t arg1)

{
    char const (** const var_338)[0x6f];
    uu_mkfifo::uu_app::hfa7e86d425877003(&var_338);
    char* var_440;
    clap_builder::builder::command::Command::try_get_matches_from::hd67f5003b1befad6(&var_440, 
        &var_338, arg1);
    char* rax = var_440;
    int64_t (* var_438)(int64_t* arg1, int64_t arg2);
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_438);
    
    int64_t var_410;
    int64_t var_3a0_1 = var_410;
    int128_t var_420;
    int128_t var_3b0_1 = var_420;
    int128_t var_430;
    int128_t var_3c0_1 = var_430;
    char* var_3d0 = rax;
    int64_t (* var_3c8_1)(int64_t* arg1, int64_t arg2) = var_438;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc60474ede53bf308(
        &var_338, &var_3d0, "modei128 as dyn ERANGEEDEADLKENA…", 4);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::hc09ea3c423f7eb26(
        "modei128 as dyn ERANGEEDEADLKENA…", 4, &var_338);
    uint64_t result;
    char var_460;
    int32_t var_458;
    char var_3f0;
    int32_t rbp_3;
    
    if (!rax_2)
    {
        rbp_3 = ~uucore::features::mode::get_umask::h22fe72fd4e3f2e99() & 0x1b6;
        label_453592:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4408a3996b597266(
            &var_338, &var_3d0, "fifo\x1b[0mnameCyan    "`$\MODEE…", 4);
        int64_t var_70;
        clap_builder::parser::error::MatchesError::unwrap::h099c2c6036fe3e39(&var_70, 
            "fifo\x1b[0mnameCyan    "`$\MODEE…", 4, &var_338);
        
        if (!var_70)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h33b801b8ce3fd3e2(&var_440, "missing operandcannot create fif…", 0xf);
            int64_t var_328_6 = var_430;
            var_338 = var_440;
            int64_t var_320;
            var_320 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::hb985850797d25983(&var_338);
        }
        else
        {
            void var_350;
            core::iter::traits::iterator::Iterator::collect::h944c96bc4b1444e0(&var_350, &var_70);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h44e5cc6fc3ebc44f(&var_3f0, &var_350);
            int64_t var_408;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6194289213b04d71(&var_408, &var_3f0);
            
            if (var_408 == -0x8000000000000000)
            {
                label_45384a:
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h607780cb7135b8b2(&var_3f0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdfef5a543da6423a(&var_3d0);
                return 0;
            }
            
            while (true)
            {
                uint64_t var_3f8;
                uint64_t var_468_1 = var_3f8;
                int128_t var_478 = var_408;
                _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_338, *var_478[8], var_3f8);
                char* path;
                int64_t rdx_4;
                path = core::result::Result$LT$T$C$E$GT$::unwrap::ha00486629438f698(&var_338);
                int32_t rax_7 = mkfifo(path, 0x1b6);
                core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h760da8c5216c3aba(path, 
                    rdx_4);
                uint64_t var_488;
                
                if (rax_7 == 0xffffffff)
                {
                    int128_t zmm0_4 = var_478;
                    var_440 = nullptr;
                    var_438 = zmm0_4;
                    *var_430[8] = 1;
                    var_460 = &var_440;
                    var_458 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_338 = &data_4dd9c0;
                    int64_t var_330_2 = 2;
                    int64_t var_318_2 = 0;
                    char* var_328_3 = &var_460;
                    int64_t var_320_2 = 1;
                    int128_t var_380;
                    core::option::Option$LT$T$GT$::map_or_else::h4f5725439c53c8c9(&var_380, 
                        &var_338);
                    var_320_2 = 1;
                    var_338 = var_380;
                    int64_t var_370;
                    int64_t var_328_4 = var_370;
                    uint64_t rax_9 = alloc::boxed::Box$LT$T$GT$::new::hb985850797d25983(&var_338);
                    var_488 = rax_9;
                    int64_t* var_480_1 = &data_4dda50;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_9));
                    int64_t rax_11;
                    int64_t rdx_5;
                    rax_11 = uucore::util_name::h074417a1e6395129();
                    var_460 = rax_11;
                    var_458 = rdx_5;
                    var_440 = &var_460;
                    var_438 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec44a5bec1f7ca2c;
                    var_430 = &var_488;
                    *var_430[8] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hd4c92501c5cc0b6e;
                    var_338 = &data_4dd9e0;
                    int64_t var_330_3 = 3;
                    int64_t var_318_3 = 0;
                    char** var_328_5 = &var_440;
                    int64_t var_320_3 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_338);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h91dc632a27c7bd12(var_488, var_480_1);
                }
                
                uint64_t rax_12 = std::fs::set_permissions::h22af05646ff22b25(&var_478, rbp_3);
                
                if (rax_12)
                {
                    var_488 = rax_12;
                    int128_t zmm0_6 = var_478;
                    var_440 = nullptr;
                    var_438 = zmm0_6;
                    *var_430[8] = 1;
                    var_460 = &var_440;
                    var_458 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    uint64_t* var_450_1 = &var_488;
                    int64_t (* var_448_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_338 = &data_4dda10;
                    int64_t var_330_4 = 2;
                    int64_t var_318_4 = 0;
                    char* var_328_7 = &var_460;
                    int64_t var_320_4 = 2;
                    int128_t var_368;
                    core::option::Option$LT$T$GT$::map_or_else::h4f5725439c53c8c9(&var_368, 
                        &var_338);
                    var_320_4 = 1;
                    var_338 = var_368;
                    int64_t var_358;
                    int64_t var_328_8 = var_358;
                    result = alloc::boxed::Box$LT$T$GT$::new::hb985850797d25983(&var_338);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::head3503b2f14cc7e(
                        var_488);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3773246715216e37(
                        var_478, *var_478[8]);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h607780cb7135b8b2(&var_3f0);
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h87ad4e3edb19e26a(0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3773246715216e37(var_478, 
                    *var_478[8]);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6194289213b04d71(&var_408, &var_3f0);
                
                if (var_408 == -0x8000000000000000)
                    goto label_45384a;
            }
        }
    }
    else
    {
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_460, 
            *(rax_2 + 8), *(rax_2 + 0x10));
        
        if (!var_460)
        {
            rbp_3 = var_458;
            goto label_453592;
        }
        
        char var_45f;
        var_3f0 = var_45f;
        var_440 = &var_3f0;
        int64_t (* var_438_1)(char* arg1, int64_t* arg2) = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
        var_338 = &data_4dd9b0;
        int64_t var_330_1 = 1;
        int64_t var_318_1 = 0;
        char** var_328_1 = &var_440;
        int64_t var_320_1 = 1;
        int128_t var_398;
        core::option::Option$LT$T$GT$::map_or_else::h4f5725439c53c8c9(&var_398, &var_338);
        var_320_1 = 1;
        var_338 = var_398;
        int64_t var_388;
        int64_t var_328_2 = var_388;
        result = alloc::boxed::Box$LT$T$GT$::new::hb985850797d25983(&var_338);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdfef5a543da6423a(&var_3d0);
    return result;
}
