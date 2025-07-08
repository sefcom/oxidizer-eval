
  int64_t* uu_readlink::uumain::uumain::h1232513d75c26214(int64_t arg1)

{
    int128_t var_2f8;
    uu_readlink::uu_app::h387e9546761b38a6(&var_2f8);
    int64_t var_388;
    clap_builder::builder::command::Command::try_get_matches_from::h1e41c31790ef42a3(&var_388, 
        &var_2f8, arg1);
    int64_t rax = var_388;
    int64_t* result;
    int64_t var_380;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_358;
        int64_t var_318_1 = var_358;
        int128_t var_368;
        int128_t var_328_1 = var_368;
        int128_t var_378;
        int128_t var_338_1 = var_378;
        int64_t var_348 = rax;
        int64_t var_340_1 = var_380;
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "no-newline) = Zero\x1b[7m", 0xa);
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4);
        int128_t* r15;
        r15 = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "silentquietverbosecanonicalizeca…", 6))
            r15 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "quietverbosecanonicalizecanonica…", 5);
        
        char rax_6 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "verbosecanonicalizecanonicalize-…", 7);
        char var_3dc_1;
        int64_t rbp;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "canonicalizecanonicalize-existin…", 0xc))
        {
            var_3dc_1 = 2;
            rbp = 0;
        }
        else if (
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "canonicalize-existingcanonicaliz…", 0x15))
        {
            var_3dc_1 = 2;
            rbp = 0;
        }
        else if (!
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "canonicalize-missinga Display im…", 0x14))
        {
            rbp = 1;
            var_3dc_1 = 0;
        }
        else
        {
            var_3dc_1 = 2;
            rbp = 0;
        }
        
        char r12_1 = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "canonicalize-existingcanonicaliz…", 0x15))
            r12_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "canonicalize-missinga Display im…", 0x14) * 2;
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1d4f4734d0c0ae5a(
            &var_2f8, &var_348, "filesignoring --no-newline with …", 5);
        clap_builder::parser::error::MatchesError::unwrap::heee1dc496edd81bc(&var_388, 
            "filesignoring --no-newline with …", 5, &var_2f8);
        int64_t* var_3b0;
        int64_t** var_2e8;
        
        if (!var_388)
        {
            label_468fdb:
            var_3b0 = nullptr;
            int64_t var_3a8_1 = 8;
            int64_t var_3a0_1 = 0;
            label_468ffb:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd2f55730b4265e1d(
                &var_388);
            var_2e8 = var_378;
            var_2f8 = var_388;
            *var_2e8[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&var_2f8);
        }
        else
        {
            int128_t var_2c8_1 = var_358;
            int128_t var_2d8_1 = var_368;
            var_2e8 = var_378;
            var_2f8 = var_388;
            int64_t* var_3d8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h18ad71db7dde33d8(&var_3d8, &var_2f8);
            int64_t* rax_10 = var_3d8;
            int128_t var_3d0;
            int128_t var_398 = var_3d0;
            
            if (rax_10 == -0x8000000000000000)
                goto label_468fdb;
            
            int64_t var_3a8;
            var_3a8 = var_398;
            var_3b0 = rax_10;
            int64_t var_3a0;
            
            if (!var_3a0)
                goto label_468ffb;
            
            if (!rax_2)
                goto label_469155;
            
            int64_t rax_14;
            rax_14 = var_3a0 == 1;
            r15 |= rax_14;
            bool cond:1_1 = r15;
            r15 = 0xb;
            
            if (!cond:1_1)
            {
                int64_t rax_15;
                int64_t rdx_2;
                rax_15 = uucore::util_name::h60d842bf27b05e82();
                var_388 = rax_15;
                var_380 = rdx_2;
                var_3d8 = &var_388;
                var_3d0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4d4ff57300358a11;
                var_2f8 = &data_517ec0;
                *var_2f8[8] = 2;
                var_2d8_1 = 0;
                var_2e8 = &var_3d8;
                var_2e8 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                var_2f8 = &data_517f38;
                *var_2f8[8] = 1;
                var_2e8 = 8;
                *var_2e8[8] = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                label_469155:
                r15 = 0xa;
                
                if (rax_3)
                    r15 = nullptr;
            }
            
            var_398 = var_3a8;
            *var_398[8] = var_3a8 + var_3a0 * 0x18;
            void* rax_17 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&var_398);
            
            if (!rax_17)
            {
                label_469356:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&var_3b0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&var_348);
                return nullptr;
            }
            
            void* r14_2 = rax_17;
            
            if (!rbp)
            {
                while (true)
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_2f8, 
                        *(r14_2 + 8), *(r14_2 + 0x10));
                    var_3d8 = var_2f8;
                    *var_3d0[8] = var_2e8;
                    uucore::features::fs::canonicalize::hdcf8813f1915eb73(&var_388, &var_3d8, 
                        r12_1, var_3dc_1);
                    
                    if (var_388 == -0x8000000000000000)
                        break;
                    
                    var_2f8 = var_388;
                    int64_t** rsi_9 = var_378;
                    var_2e8 = rsi_9;
                    int64_t* result_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(*var_2f8[8], rsi_9, 
                        r15));
                    result = result_2;
                    
                    if (result_2)
                        goto label_4693fb;
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_2f8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_3d8);
                    void* rax_23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&var_398);
                    r14_2 = rax_23;
                    
                    if (!rax_23)
                        goto label_469356;
                }
            }
            else
            {
                while (true)
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_2f8, 
                        *(r14_2 + 8), *(r14_2 + 0x10));
                    var_3d8 = var_2f8;
                    *var_3d0[8] = var_2e8;
                    std::fs::read_link::he43356407758612b(&var_388, &var_3d8);
                    
                    if (var_388 == -0x8000000000000000)
                        break;
                    
                    var_2f8 = var_388;
                    int64_t** rsi_6 = var_378;
                    var_2e8 = rsi_6;
                    int64_t* result_1 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(*var_2f8[8], rsi_6, 
                        r15));
                    result = result_1;
                    
                    if (result_1)
                    {
                        label_4693fb:
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(
                            &var_2f8);
                        goto label_469420;
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_2f8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_3d8);
                    void* rax_20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&var_398);
                    r14_2 = rax_20;
                    
                    if (!rax_20)
                        goto label_469356;
                }
            }
            
            if (!rax_6)
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6923bc10bd1d0617(var_380);
            }
            else
            {
                int128_t* var_3b8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc5adabb7353559e2(var_380, r14_2);
                int128_t var_310;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hc17df59e5abcc7e2(
                    &var_310, &var_3b8);
                *var_2e8[8] = 1;
                var_2f8 = var_310;
                int64_t** var_300;
                var_2e8 = var_300;
                result = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&var_2f8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hafbe285716c6b2ef(var_3b8);
            }
            
            label_469420:
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_3d8);
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&var_3b0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&var_348);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_380);
    return result;
}
