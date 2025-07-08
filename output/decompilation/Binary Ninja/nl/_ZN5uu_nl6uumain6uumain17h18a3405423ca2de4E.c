
  int64_t* uu_nl::uumain::uumain::h18a3405423ca2de4(int64_t arg1)

{
    void** const r12;
    void** const var_28 = r12;
    void var_2f8;
    uu_nl::uu_app::h62e86bf6f8f43d48(&var_2f8);
    char const (** const var_448)[0xb4];
    clap_builder::builder::command::Command::try_get_matches_from::h033a09a389891337(&var_448, 
        &var_2f8, arg1);
    char const (** const rax)[0xb4] = var_448;
    int64_t* result;
    int64_t var_440;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_418;
        int64_t var_340_1 = var_418;
        int128_t var_428;
        int128_t var_350_1 = var_428;
        int128_t var_438;
        int128_t var_360_1 = var_438;
        char const (** const var_370)[0xb4] = rax;
        int64_t var_368_1 = var_440;
        _$LT$uu_nl..Settings$u20$as$u20$core..default..Default$GT$::default::h47e143bb2e6f00be(
            &var_2f8);
        void var_398;
        uu_nl::helper::parse_options::h06a5fa1f1b26e68c(&var_398, &var_2f8, &var_370);
        int64_t var_388;
        int128_t var_468;
        int64_t* var_400;
        int64_t var_3d8;
        
        if (!var_388)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd841e96b2ed2d7b8(
                &var_448, &var_370, "fileEDOMmode{", 4);
            clap_builder::parser::error::MatchesError::unwrap::h2c4cd7150173c076(&var_3d8, 
                "fileEDOMmode{", 4, &var_448);
            
            if (!var_3d8)
            {
                int128_t* rax_5 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
                
                if (!rax_5)
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hccf532128df738d2(
                    &var_448, "-: Is a directory\nUnknownErrnoE…", 1);
                int64_t rax_6 = var_438;
                int64_t var_458_1 = rax_6;
                int128_t zmm0_5 = var_448;
                var_468 = zmm0_5;
                rax_5[1] = rax_6;
                *rax_5 = zmm0_5;
                alloc::slice::hack::into_vec::h6086311a78a256e6(&var_400, rax_5, 1);
            }
            else
            {
                int128_t var_3a8;
                int128_t var_308_1 = var_3a8;
                int128_t var_3b8;
                int128_t var_318_1 = var_3b8;
                int64_t var_3c8;
                int128_t var_328_1 = var_3c8;
                int128_t var_338 = var_3d8;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he4cba287fed817ee(&var_400, &var_338);
            }
            
            var_3d8 = 1;
            int64_t var_298;
            int64_t var_3d0_1 = var_298;
            int64_t var_3c8_2 = 0;
            int64_t var_3f8;
            int64_t var_380 = var_3f8;
            int64_t var_3f0;
            int64_t var_378_1 = var_3f8 + var_3f0 * 0x18;
            void* rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86a1599bc622aaf5(&var_380);
            
            if (!rax_9)
            {
                label_55a78c:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&var_400);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&var_398);
                core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h5000854313336602(&var_2f8);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h00ca7bfe9d9c54d0(&var_370);
                return nullptr;
            }
            
            void* r15_1 = rax_9;
            
            while (true)
            {
                char* rbp_1 = *(r15_1 + 8);
                r12 = *(r15_1 + 0x10);
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc8f8342c6b12a3e(rbp_1, r12, "-: Is a directory\nUnknownErrnoE…", 1))
                {
                    if (!std::path::Path::is_dir::h9ac0db933706da51(rbp_1, r12))
                    {
                        std::fs::File::open::hf1f071da76d1106b(&var_448, rbp_1);
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6473cf8ad0bdd484(&var_468, &var_448);
                        result = var_468;
                        
                        if (result)
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&var_400);
                            break;
                        }
                        
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc950eb83a0d53243(&var_448, 0x2000, *var_468[8]);
                        int128_t* result_2;
                        void** rdx_10;
                        result_2 = uu_nl::nl::hef3517d7e99c9fcf(&var_448, &var_3d8, &var_2f8);
                        result = result_2;
                        
                        if (result_2)
                        {
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h260c121303b9dae7(&var_448);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&var_400);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h260c121303b9dae7(&var_448);
                    }
                    else
                    {
                        int64_t rax_13;
                        int64_t rdx_5;
                        rax_13 = uucore::util_name::h60d842bf27b05e82();
                        var_468 = rax_13;
                        *var_468[8] = rdx_5;
                        int128_t* var_3e8 = &var_468;
                        int64_t (* var_3e0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he930d6131e526b78;
                        var_448 = &data_6d6d98;
                        int64_t var_440_2 = 2;
                        var_428 = 0;
                        var_438 = &var_3e8;
                        *var_438[8] = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_448);
                        var_468 = rbp_1;
                        *var_468[8] = r12;
                        var_3e8 = &var_468;
                        int64_t (* var_3e0_2)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_448 = &data_6d6e20;
                        var_440 = 2;
                        var_428 = 0;
                        var_438 = &var_3e8;
                        *var_438[8] = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_448);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    }
                }
                else
                {
                    std::io::stdio::stdin::h7215cc131abb55d8();
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd28ab478f7e713df(&var_448, 0x2000, &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                    int128_t* result_1;
                    void** rdx_4;
                    result_1 = uu_nl::nl::h577667c2138e41ae(&var_448, &var_3d8, &var_2f8);
                    result = result_1;
                    
                    if (result_1)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h5f137f6a111fb9c8(var_448, var_440);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&var_400);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h5f137f6a111fb9c8(var_448, var_440);
                }
                
                void* rax_10 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86a1599bc622aaf5(&var_380);
                r15_1 = rax_10;
                
                if (!rax_10)
                    goto label_55a78c;
            }
        }
        else
        {
            void** var_390;
            alloc::str::join_generic_copy::heb883ebb97bebee6(&var_448, var_390, var_388, 
                "\nline number overflow/home/34r7…", 1);
            int64_t var_3c8_1 = var_438;
            var_3d8 = var_448;
            var_400 = &var_3d8;
            int64_t (* var_3f8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_448 = &data_6d6e10;
            int64_t var_440_1 = 1;
            var_428 = 0;
            var_438 = &var_400;
            *var_438[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h2afcfe8c4e1744ed(&var_468, &var_448);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(&var_3d8);
            int64_t var_458;
            var_438 = var_458;
            var_448 = var_468;
            *var_438[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h02c3afd2888e012a(&var_448);
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&var_398);
        core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h5000854313336602(&var_2f8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h00ca7bfe9d9c54d0(&var_370);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_440);
    return result;
}
