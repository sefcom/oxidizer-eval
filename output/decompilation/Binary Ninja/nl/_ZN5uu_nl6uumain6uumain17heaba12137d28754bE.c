
  uint64_t uu_nl::uumain::uumain::heaba12137d28754b(int64_t arg1)

{
    void var_2f8;
    uu_nl::uu_app::h74b291b671810a4f(&var_2f8);
    void** const var_428;
    clap_builder::builder::command::Command::try_get_matches_from::h308df5a65a1239bb(&var_428, 
        &var_2f8, arg1);
    void** const rax = var_428;
    int64_t var_420;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_420);
    
    int64_t var_3f8;
    int64_t var_358_1 = var_3f8;
    int128_t var_408;
    int128_t var_368_1 = var_408;
    int128_t var_418;
    int128_t var_378_1 = var_418;
    void** const var_388 = rax;
    int64_t var_380_1 = var_420;
    _$LT$uu_nl..Settings$u20$as$u20$core..default..Default$GT$::default::h620fb6845dbefcfc(
        &var_2f8);
    void var_3a0;
    uu_nl::helper::parse_options::h86152a37c7326ed9(&var_3a0, &var_2f8, &var_388);
    int64_t var_390;
    uint64_t result;
    int128_t var_448;
    int128_t* var_3c8;
    
    if (!var_390)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h13ac86c527bd7718(
            &var_428, &var_388);
        int64_t var_338;
        clap_builder::parser::error::MatchesError::unwrap::h9bb00a1a35a07b0b(&var_338, &var_428);
        void* rbp_1;
        void* r13_2;
        int64_t var_298;
        
        if (!var_338)
        {
            void* rax_7 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if (!rax_7)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            rbp_1 = rax_7;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h07fd9f5272f024a0(&var_428, "-: Is a directory\nutf8info\", 1);
            int64_t rax_8 = var_418;
            int64_t var_438_3 = rax_8;
            int128_t zmm0_4 = var_428;
            var_448 = zmm0_4;
            *(rbp_1 + 0x10) = rax_8;
            *rbp_1 = zmm0_4;
            var_3c8 = 1;
            void* var_3c0_2 = rbp_1;
            int64_t var_3b8_1 = 1;
            var_448 = 1;
            *var_448[8] = var_298;
            int64_t var_438_4 = 0;
            r13_2 = rbp_1 + 0x18;
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h7da7d97a1a0221bb(&var_3c8, &var_338);
            void* var_3c0;
            rbp_1 = var_3c0;
            var_448 = 1;
            *var_448[8] = var_298;
            int64_t var_438_2 = 0;
            int64_t var_3b8;
            
            if (!var_3b8)
            {
                label_51222e:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7229cc5435748ab6(&var_3c8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7229cc5435748ab6(&var_3a0);
                core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::hc93d56db49570a85(&var_2f8);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc82f089ed33143c7(&var_388);
                return 0;
            }
            
            r13_2 = var_3b8 * 0x18 + rbp_1;
        }
        void* rax_10 = rbp_1 + 0x18;
        
        while (true)
        {
            void* rbx_1 = rax_10;
            uint64_t result_6 = *(rbp_1 + 8);
            uint64_t r15_1 = *(rbp_1 + 0x10);
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hce4c57ff4d671dea(result_6, r15_1, "-: Is a directory\nutf8info\", 1))
            {
                uint64_t result_4;
                uint64_t var_3d0;
                
                if (!std::path::Path::is_dir::h02edbc48c38d7d9e(result_6, r15_1))
                {
                    std::fs::File::open::h6436d7133be25281(&var_428, result_6);
                    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5b35011457601d46(&result_4, &var_428);
                    uint64_t result_2 = result_4;
                    
                    if (result_2)
                    {
                        result = result_2;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7229cc5435748ab6(&var_3c8);
                        break;
                    }
                    
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h96b71b36d765d9f6(&var_428, var_3d0);
                    uint64_t result_3;
                    uint64_t rdx_10;
                    result_3 = uu_nl::nl::h35015bef5586a627(&var_428, &var_448, &var_2f8);
                    
                    if (result_3)
                    {
                        result = result_3;
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h1d8fb80c34ceb3ef(&var_428);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7229cc5435748ab6(&var_3c8);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h1d8fb80c34ceb3ef(&var_428);
                    rax_10 = rbx_1 + 0x18;
                    
                    if (rbx_1 == r13_2)
                        rax_10 = rbx_1;
                    
                    if (rbx_1 == r13_2)
                        goto label_51222e;
                }
                else
                {
                    uint64_t result_5;
                    int64_t rdx_6;
                    result_5 = uucore::util_name::h074417a1e6395129();
                    result_4 = result_5;
                    int64_t var_3d0_1 = rdx_6;
                    uint64_t* var_3b0 = &result_4;
                    int64_t (* var_3a8_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha55ed9224fb9838c;
                    var_428 = &data_6392f8;
                    int64_t var_420_2 = 2;
                    var_408 = 0;
                    var_418 = &var_3b0;
                    *var_418[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_428);
                    result_4 = result_6;
                    var_3d0 = r15_1;
                    var_3b0 = &result_4;
                    uint64_t (* var_3a8_2)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_428 = &data_639380;
                    var_420 = 2;
                    var_408 = 0;
                    var_418 = &var_3b0;
                    *var_418[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_428);
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    rax_10 = rbx_1 + 0x18;
                    
                    if (rbx_1 == r13_2)
                        rax_10 = rbx_1;
                    
                    if (rbx_1 == r13_2)
                        goto label_51222e;
                }
            }
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::haab3c02a7d96625a(
                    &var_428, &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                uint64_t result_1;
                uint64_t rdx_5;
                result_1 = uu_nl::nl::h4b75da385e4f9ffb(&var_428, &var_448, &var_2f8);
                
                if (result_1)
                {
                    result = result_1;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hb489bd126f1efd0e(var_428, var_420);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7229cc5435748ab6(&var_3c8);
                    break;
                }
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hb489bd126f1efd0e(var_428, var_420);
                rax_10 = rbx_1 + 0x18;
                
                if (rbx_1 == r13_2)
                    rax_10 = rbx_1;
                
                if (rbx_1 == r13_2)
                    goto label_51222e;
            }
            
            rbp_1 = rbx_1;
            
            if (!rbx_1)
                goto label_51222e;
        }
    }
    else
    {
        int64_t var_398;
        alloc::str::join_generic_copy::hc42ce15d8f58f76f(&var_428, var_398, var_390);
        int64_t var_438_1 = var_418;
        var_448 = var_428;
        var_3c8 = &var_448;
        int64_t (* var_3c0_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_428 = &data_639370;
        int64_t var_420_1 = 1;
        var_408 = 0;
        var_418 = &var_3c8;
        *var_418[8] = 1;
        int128_t var_350;
        core::option::Option$LT$T$GT$::map_or_else::h5b303b602cbb50fb(&var_350, &var_428);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(var_448, 
            *var_448[8]);
        *var_418[8] = 1;
        var_428 = var_350;
        int64_t var_340;
        var_418 = var_340;
        result = alloc::boxed::Box$LT$T$GT$::new::h45e38ec569034dd2(&var_428);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7229cc5435748ab6(
        &var_3a0);
    core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::hc93d56db49570a85(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc82f089ed33143c7(&var_388);
    return result;
}
