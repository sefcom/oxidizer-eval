
  int64_t* uu_tsort::uumain::uumain::hff4558af46a5d226(int64_t arg1)

{
    void* const var_338;
    uu_tsort::uu_app::he13fe654e24171eb(&var_338);
    int64_t var_460;
    clap_builder::builder::command::Command::try_get_matches_from::hff2c0943be558db2(&var_460, 
        &var_338, arg1);
    int64_t rax = var_460;
    int64_t* result;
    int64_t var_458;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_430;
        int64_t var_388_1 = var_430;
        int128_t var_440;
        int128_t var_398_1 = var_440;
        int128_t var_450;
        int128_t var_3a8_1 = var_450;
        int64_t var_3b8 = rax;
        int64_t var_3b0_1 = var_458;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h28e7d3f2482c50b0(
            &var_338, &var_3b8, "filei128 as dyn ERANGEEDEADLKENA…", 4);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h3a667534f1abdb57(
            "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_338);
        
        if (!rax_2)
        {
            core::option::expect_failed::h9e03a1f6ff88dbcf("Value is required by clap: read …");
            /* no return */
        }
        
        void* var_4b0 = rax_2;
        char rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd39b3327ae2a3504(*(rax_2 + 8), *(rax_2 + 0x10), "-cannot access a Thread Local St…", 1);
        int32_t var_4fc;
        int64_t* result_1;
        void* const rcx_2;
        void** rdx_2;
        
        if (!rax_3)
        {
            void* rax_6 = var_4b0;
            char* r14_1 = *(rax_6 + 8);
            
            if (!std::path::Path::is_dir::h9ac0db933706da51(r14_1, *(rax_6 + 0x10)))
            {
                std::fs::File::open::hb4ea70bf20a6c4bc(&var_338, r14_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haddad720e02ad751(&result_1, &var_338);
                result = result_1;
                
                if (!result)
                {
                    void** var_4f0;
                    var_4fc = var_4f0;
                    int64_t r12_8;
                    r12_8 = 1;
                    rcx_2 = &data_51e840;
                    rdx_2 = &var_4fc;
                    goto label_4673f1;
                }
                
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0a4c6af42426ce0a(&var_3b8);
            }
            else
            {
                result_1 = &var_4b0;
                int64_t (* var_4f0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h93a685a2101b800f;
                var_338 = &data_51e788;
                int64_t var_330_1 = 2;
                int64_t var_318_1 = 0;
                int64_t** var_328_1 = &result_1;
                int64_t var_320_1 = 1;
                int128_t var_380;
                core::option::Option$LT$T$GT$::map_or_else::h61e9aa31ff763042(&var_380, &var_338);
                var_320_1 = 1;
                var_338 = var_380;
                int64_t var_370;
                int64_t var_328_2 = var_370;
                result = alloc::boxed::Box$LT$T$GT$::new::h0a6e41ca1ff4979a(&var_338);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0a4c6af42426ce0a(&var_3b8);
            }
        }
        else
        {
            std::io::stdio::stdin::h7215cc131abb55d8();
            void* var_428 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
            rcx_2 = &data_51e940;
            rdx_2 = &var_428;
            label_4673f1:
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hda7e672eb5fcc9f0(
                &var_460, 0x2000, rdx_2, rcx_2);
            int64_t var_478 = 0;
            int64_t var_470_1 = 1;
            int64_t var_468_1 = 0;
            
            if (!_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::h6b6a1c6d1bfd242d(&var_460, &var_478))
            {
                std::thread::local::LocalKey$LT$T$GT$::try_with::hce9af829f85cbcd2(&var_338);
                int64_t rax_10;
                int64_t rdx_5;
                rax_10 = core::result::Result$LT$T$C$E$GT$::expect::hcf1ae938213ad007(&var_338);
                int128_t var_3e8 = *data_51e9b0;
                int128_t var_3d8_1 = data_51e9c0;
                int64_t var_3c8_1 = rax_10;
                int64_t var_3c0_1 = rdx_5;
                _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&result_1, var_470_1, var_468_1);
                int128_t var_4d8;
                int128_t var_308_1 = var_4d8;
                int128_t var_4e8;
                int64_t var_318;
                var_318 = var_4e8;
                int64_t var_328;
                var_328 = result_1;
                var_338 = nullptr;
                int64_t var_330_2 = var_468_1;
                int16_t var_2f8_1 = 0;
                int64_t* rdi_15 = &var_338;
                label_467639:
                int64_t rax_11;
                int64_t rdx_7;
                rax_11 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h62b04e9d485bb710(
                    rdi_15);
                
                if (!rax_11)
                    goto label_467871;
                
                void var_2f0;
                int64_t rax_12;
                int64_t rdx_8;
                rax_12 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::hff25601417aa14a1(&var_2f0, rax_11, rdx_7);
                
                if (!rax_12)
                    goto label_467871;
                
                void var_60;
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h86df839be1b2713b(&var_60, rax_12, rdx_8);
                int64_t var_70 = 0;
                int64_t var_68_1 = rdx_8;
                int16_t var_38_1 = 1;
                int64_t** var_4c8;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3d3838e8c745c526(&var_4c8, &var_70);
                char const (** var_4c0)[0x52];
                int64_t var_4b8;
                int128_t var_4a8;
                int64_t** var_488;
                int64_t* var_408;
                int64_t var_3f0;
                
                if (var_4b8)
                {
                    var_4a8 = var_4c0;
                    *var_4a8[8] = var_4b8;
                    int64_t var_498_1 = 2;
                    
                    while (true)
                    {
                        int64_t* rax_14;
                        int64_t rdx_9;
                        rax_14 = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89c26ee6dbdc37df(&var_4a8);
                        
                        if (!rax_14)
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&var_4c8);
                            rdi_15 = &var_338;
                            goto label_467639;
                        }
                        
                        if (rdx_9 != 2)
                        {
                            int128_t zmm0_4 = *(var_4b0 + 8);
                            var_408 = nullptr;
                            int128_t var_400_1 = zmm0_4;
                            var_3f0 = 0;
                            var_488 = &var_408;
                            int64_t (* var_480_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            result_1 = &data_51e7a8;
                            int64_t var_4f0_2 = 2;
                            var_4d8 = 0;
                            var_4e8 = &var_488;
                            *var_4e8[8] = 1;
                            int128_t var_368;
                            core::option::Option$LT$T$GT$::map_or_else::h61e9aa31ff763042(&var_368, 
                                &result_1);
                            *var_4e8[8] = 1;
                            result_1 = var_368;
                            int64_t var_358;
                            var_4e8 = var_358;
                            result = alloc::boxed::Box$LT$T$GT$::new::h0a6e41ca1ff4979a(&result_1);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&var_4c8);
                            core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::hfb1817077245a538(
                                &var_3e8);
                            break;
                        }
                        
                        uu_tsort::Graph::add_edge::h8f24cab5b427ccb3(&var_3e8, *rax_14, rax_14[1], 
                            rax_14[2], rax_14[3]);
                    }
                    
                    goto label_4677eb;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(
                    &var_4c8);
                label_467871:
                uu_tsort::Graph::run_tsort::h2621dd5cdb4faf5a(&var_408, &var_3e8);
                int128_t var_400;
                
                if (!var_408)
                {
                    int64_t var_498_3 = var_3f0;
                    var_4a8 = var_400;
                    alloc::str::join_generic_copy::h06f086fa24266c97(&var_338, *var_4a8[8], 
                        var_3f0, "\nTry ' --help' for more informa…", 1);
                    var_4e8 = var_328;
                    result_1 = var_338;
                    var_4c8 = &result_1;
                    int64_t (* var_4c0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_338 = &data_51e730;
                    int64_t var_330_7 = 2;
                    int64_t var_318_6 = 0;
                    int64_t*** var_328_8 = &var_4c8;
                    int64_t var_320_6 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&var_338);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(
                        &result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&var_4a8);
                    result = nullptr;
                }
                else
                {
                    var_4c8 = var_400;
                    int64_t rax_20;
                    int64_t rdx_12;
                    rax_20 = uucore::util_name::h60d842bf27b05e82();
                    var_4a8 = rax_20;
                    *var_4a8[8] = rdx_12;
                    result_1 = &var_4a8;
                    int64_t (* var_4f0_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3b4f0bde3248f91;
                    var_4e8 = &var_4b0;
                    *var_4e8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h93a685a2101b800f;
                    var_338 = &data_51e7c8;
                    int64_t var_330_3 = 3;
                    int64_t var_318_2 = 0;
                    int64_t** var_328_3 = &result_1;
                    int64_t var_320_2 = 2;
                    int128_t var_350;
                    core::option::Option$LT$T$GT$::map_or_else::h61e9aa31ff763042(&var_350, 
                        &var_338);
                    var_4a8 = var_350;
                    int64_t var_340;
                    int64_t var_498_2 = var_340;
                    char const (** var_420)[0x52] = var_4c0;
                    void* var_418_1 = &var_4c0[var_3f0 * 2];
                    
                    for (int64_t i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e4486873f05d014(&var_420); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e4486873f05d014(&var_420))
                    {
                        int64_t i_1 = i;
                        int64_t** rax_23;
                        int64_t rdx_13;
                        rax_23 = uucore::util_name::h60d842bf27b05e82();
                        var_488 = rax_23;
                        int64_t var_480_2 = rdx_13;
                        result_1 = &var_488;
                        int64_t (* var_4f0_4)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3b4f0bde3248f91;
                        var_4e8 = &i_1;
                        *var_4e8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdeab228c8bd01923;
                        var_338 = &data_51e7f8;
                        int64_t var_330_4 = 3;
                        int64_t var_318_3 = 0;
                        int64_t** var_328_4 = &result_1;
                        int64_t var_320_3 = 2;
                        core::result::Result$LT$T$C$E$GT$::unwrap::h81a18be82a0e08f6(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hb0059971e59db927(&var_4a8, 
                            &var_338));
                    }
                    
                    result_1 = &var_4a8;
                    int64_t (* var_4f0_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_338 = &data_414af0;
                    int64_t var_330_5 = 1;
                    int64_t var_318_4 = 0;
                    int64_t** var_328_5 = &result_1;
                    int64_t var_320_4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_338);
                    alloc::str::join_generic_copy::h06f086fa24266c97(&var_338, var_4c0, var_3f0, 
                        "\nTry ' --help' for more informa…", 1);
                    var_4e8 = var_328_5;
                    result_1 = var_338;
                    var_488 = &result_1;
                    int64_t (* var_480_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_338 = &data_51e730;
                    int64_t var_330_6 = 2;
                    int64_t var_318_5 = 0;
                    int64_t*** var_328_6 = &var_488;
                    int64_t var_320_5 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&var_338);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(
                        &result_1);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hfc4b2f6c5cbecadb(
                        &result_1);
                    int64_t var_328_7 = var_4e8;
                    var_338 = result_1;
                    var_320_5 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h0a6e41ca1ff4979a(&var_338);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(
                        &var_4a8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&var_4c8);
                }
                core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::hfb1817077245a538(&var_3e8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(&var_478);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h6cf9e678dd9a4b95(var_460, var_458);
                
                if (!rax_3)
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hf29264b319478393(&var_4fc);
                
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0a4c6af42426ce0a(&var_3b8);
            }
            else
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                label_4677eb:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(&var_478);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h6cf9e678dd9a4b95(var_460, var_458);
                
                if (!rax_3)
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hf29264b319478393(&var_4fc);
                
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0a4c6af42426ce0a(&var_3b8);
            }
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_458);
    return result;
}
