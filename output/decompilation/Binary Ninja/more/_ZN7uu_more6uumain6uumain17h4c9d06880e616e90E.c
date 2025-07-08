
  int64_t* uu_more::uumain::uumain::h4c9d06880e616e90(int64_t arg1)

{
    void** const r12;
    void** const var_28 = r12;
    std::panicking::set_hook::h088dd0fc26a2f66c(
        alloc::boxed::Box$LT$T$GT$::new::hbe5cdb06c2dfc463(), &data_55f3e8);
    void* const var_2f8;
    uu_more::uu_app::h63e8d97b108584c5(&var_2f8);
    int64_t var_450;
    clap_builder::builder::command::Command::try_get_matches_from::h4336a96216fc8b75(&var_450, 
        &var_2f8, arg1);
    int64_t* result;
    char* var_448;
    
    if (var_450 != -0x8000000000000000)
    {
        int64_t var_420;
        int64_t var_3b8_1 = var_420;
        int128_t var_430;
        int128_t var_3c8_1 = var_430;
        int128_t var_440;
        int128_t var_3d8_1 = var_440;
        int128_t var_3e8 = var_450;
        void var_3a8;
        uu_more::Options::from::hc98fb754786f3522(&var_3a8, &var_3e8);
        int64_t var_480 = 0;
        void** var_478_1 = 1;
        int64_t var_470_1 = 0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha584c1f8ab2c43ae(
            &var_2f8, &var_3e8, "filescannot open : No such file …", 5);
        int64_t var_338;
        clap_builder::parser::error::MatchesError::unwrap::hc4c5d21c114f8312(&var_338, 
            "filescannot open : No such file …", 5, &var_2f8);
        
        if (var_338)
        {
            uu_more::setup_term::hbb8a9341123ad1e0();
            int64_t* var_468 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            int64_t var_300;
            int64_t rax_3 =
                core::iter::traits::exact_size::ExactSizeIterator::len::h3b01bf493a451249(var_300);
            int64_t var_308;
            int64_t var_408_1 = var_308;
            int128_t var_318;
            int128_t var_418_1 = var_318;
            int128_t var_328;
            var_430 = var_328;
            var_440 = var_338;
            int64_t var_400_1 = var_300;
            int64_t rax_5 = 0;
            
            while (true)
            {
                char* rbx_2 = var_448;
                uint64_t r13_1 = var_440;
                var_450 = 0;
                
                if (!rax_5)
                {
                    void* rax_7 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbb3d00fd695aef87(&*var_440[8]);
                    
                    if (!rax_7)
                        rbx_2 = nullptr;
                    else
                    {
                        *(rax_7 + 0x10);
                        char* rax_8;
                        uint64_t rdx_1;
                        rax_8 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h77a234cc4792ba23(*(rax_7 + 8));
                        rbx_2 = rax_8;
                        r13_1 = rdx_1;
                    }
                }
                
                void** rax_9 = core::option::Option$LT$T$GT$::get_or_insert_with::hd5406e92df845752(
                    &var_450, &*var_440[8]);
                
                if (!rbx_2)
                {
                    uu_more::reset_term::h414dda587ba155f3(&var_468);
                    goto label_484d12;
                }
                
                void* r14_1 = *rax_9;
                uint64_t var_4d0;
                int64_t** var_4c0;
                int64_t (* var_4b8)(int64_t* arg1, int64_t arg2);
                uint64_t* var_4b0;
                int64_t* var_4a0;
                int32_t var_2e0;
                
                if (!std::path::Path::is_dir::h9ac0db933706da51(rbx_2, r13_1))
                {
                    std::fs::metadata::hfcb81de4f67bf64a(&var_2f8, rbx_2);
                    
                    if (var_2f8 != 2)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h0dc49061fa491f70(&var_2f8);
                        int32_t var_3f8;
                        std::fs::File::open::h323ef9f190b156bf(&var_3f8, rbx_2);
                        
                        if (!var_3f8)
                        {
                            int32_t var_3f4;
                            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5dc0c383d62754c2(&var_2f8, 0x2000, var_3f4);
                            int64_t rax_28;
                            int64_t rdx_8;
                            rax_28 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::ha689075af2c7df98(&var_2f8, &var_480);
                            core::result::Result$LT$T$C$E$GT$::unwrap::h09e424b011fd4dc7(rax_28, 
                                rdx_8);
                            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_4c0, rbx_2, r13_1);
                            int64_t (* r8_1)(int64_t* arg1, int64_t arg2);
                            
                            if (var_4c0)
                            {
                                r8_1 = nullptr;
                                
                                if (r14_1)
                                    r14_1 = *rax_9;
                            }
                            else
                            {
                                r8_1 = var_4b8;
                                
                                if (r14_1)
                                    r14_1 = *rax_9;
                            }
                            
                            int128_t* result_1;
                            void** rdx_13;
                            result_1 = uu_more::more::h8763b7f12892fd6b(var_478_1, var_470_1, 
                                &var_468, rax_3 >= 2, r8_1, var_4b0, r14_1, rax_9[1], &var_3a8);
                            result = result_1;
                            
                            if (result_1)
                            {
                                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hd977552b0a65e162(&var_2f8);
                                break;
                            }
                            
                            var_470_1 = 0;
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hd977552b0a65e162(&var_2f8);
                        }
                        else
                        {
                            int64_t var_3f0;
                            int64_t var_460 = var_3f0;
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(
                                crossterm::terminal::disable_raw_mode::h305d553e1a48c02a());
                            var_4c0 = 1;
                            char* var_4b8_3 = rbx_2;
                            uint64_t var_4b0_3 = r13_1;
                            char var_4a8_3 = 1;
                            var_4d0 = std::io::error::Error::kind::hb2ff5fa058639b3d(var_3f0);
                            var_4a0 = &var_4c0;
                            int64_t (* var_498_5)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            uint64_t* var_490_1 = &var_4d0;
                            int64_t (* var_488_1)(char* arg1, void* arg2) = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Display$GT$::fmt::ha1aa9f6bc9a7f1d5;
                            var_2f8 = &data_55f3c8;
                            int64_t var_2f0_5 = 2;
                            int64_t var_2d8_5 = 0;
                            int64_t** var_2e8_7 = &var_4a0;
                            var_2e0 = 2;
                            int128_t var_350;
                            core::option::Option$LT$T$GT$::map_or_else::h80f1e74e99a52e3c(&var_350, 
                                &var_2f8);
                            var_2e0 = 0;
                            var_2f8 = var_350;
                            int64_t var_340;
                            int64_t var_2e8_8 = var_340;
                            uint64_t rax_24 =
                                alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&var_2f8);
                            var_4d0 = rax_24;
                            int64_t* var_4c8_3 = &data_55f468;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(rax_24));
                            int64_t* rax_26;
                            int64_t rdx_6;
                            rax_26 = uucore::util_name::h60d842bf27b05e82();
                            var_4a0 = rax_26;
                            int64_t var_498_6 = rdx_6;
                            var_4c0 = &var_4a0;
                            var_4b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5f786156cb2ce45;
                            var_4b0 = &var_4d0;
                            var_4a8_3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he53398c8fff906b9;
                            var_2f8 = &data_55f378;
                            int64_t var_2f0_6 = 3;
                            int64_t var_2d8_6 = 0;
                            int64_t*** var_2e8_9 = &var_4c0;
                            var_2e0 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h3fe0217d98661d13(var_4d0, var_4c8_3);
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(
                                crossterm::terminal::enable_raw_mode::h2b8809045542de71());
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h46901b14184092d9(&var_460);
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h0dc49061fa491f70(&var_2f8);
                        core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(
                            crossterm::terminal::disable_raw_mode::h305d553e1a48c02a());
                        var_4c0 = 1;
                        char* var_4b8_2 = rbx_2;
                        uint64_t var_4b0_2 = r13_1;
                        char var_4a8_2 = 1;
                        var_4a0 = &var_4c0;
                        int64_t (* var_498_3)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2f8 = &data_55f3a8;
                        int64_t var_2f0_3 = 2;
                        int64_t var_2d8_3 = 0;
                        int64_t** var_2e8_4 = &var_4a0;
                        var_2e0 = 1;
                        int128_t var_368;
                        core::option::Option$LT$T$GT$::map_or_else::h80f1e74e99a52e3c(&var_368, 
                            &var_2f8);
                        var_2e0 = 0;
                        var_2f8 = var_368;
                        int64_t var_358;
                        int64_t var_2e8_5 = var_358;
                        uint64_t rax_18 =
                            alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&var_2f8);
                        var_4d0 = rax_18;
                        void** const var_4c8_2 = &data_55f468;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(rax_18));
                        int64_t* rax_20;
                        int64_t rdx_4;
                        rax_20 = uucore::util_name::h60d842bf27b05e82();
                        var_4a0 = rax_20;
                        int64_t var_498_4 = rdx_4;
                        var_4c0 = &var_4a0;
                        var_4b8 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5f786156cb2ce45;
                        var_4b0 = &var_4d0;
                        var_4a8_2 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he53398c8fff906b9;
                        var_2f8 = &data_55f378;
                        int64_t var_2f0_4 = 3;
                        int64_t var_2d8_4 = 0;
                        int64_t*** var_2e8_6 = &var_4c0;
                        var_2e0 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h3fe0217d98661d13(var_4d0, var_4c8_2);
                        core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(
                            crossterm::terminal::enable_raw_mode::h2b8809045542de71());
                    }
                }
                else
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(
                        crossterm::terminal::disable_raw_mode::h305d553e1a48c02a());
                    var_4c0 = 1;
                    char* var_4b8_1 = rbx_2;
                    uint64_t var_4b0_1 = r13_1;
                    char var_4a8_1 = 1;
                    var_4a0 = &var_4c0;
                    int64_t (* var_498_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_2f8 = &data_55f358;
                    int64_t var_2f0_1 = 2;
                    int64_t var_2d8_1 = 0;
                    int64_t** var_2e8_1 = &var_4a0;
                    var_2e0 = 1;
                    int128_t var_380;
                    core::option::Option$LT$T$GT$::map_or_else::h80f1e74e99a52e3c(&var_380, 
                        &var_2f8);
                    var_2e0 = 0;
                    var_2f8 = var_380;
                    int64_t var_370;
                    int64_t var_2e8_2 = var_370;
                    uint64_t rax_13 = alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&var_2f8);
                    var_4d0 = rax_13;
                    void** const var_4c8_1 = &data_55f570;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(rax_13));
                    int64_t* rax_15;
                    int64_t rdx_2;
                    rax_15 = uucore::util_name::h60d842bf27b05e82();
                    var_4a0 = rax_15;
                    int64_t var_498_2 = rdx_2;
                    var_4c0 = &var_4a0;
                    var_4b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5f786156cb2ce45;
                    var_4b0 = &var_4d0;
                    var_4a8_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he53398c8fff906b9;
                    var_2f8 = &data_55f378;
                    int64_t var_2f0_2 = 3;
                    int64_t var_2d8_2 = 0;
                    int64_t*** var_2e8_3 = &var_4c0;
                    var_2e0 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h3fe0217d98661d13(var_4d0, var_4c8_1);
                    core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(
                        crossterm::terminal::enable_raw_mode::h2b8809045542de71());
                }
                rax_5 = var_450;
            }
            
            goto label_484e3c;
        }
        
        std::io::stdio::stdin::h7215cc131abb55d8();
        var_2f8 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
        int64_t rax_30;
        int64_t rdx_14;
        rax_30 = _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_string::h09ca7fad329b13bb(&var_2f8, &var_480);
        core::result::Result$LT$T$C$E$GT$::unwrap::h09e424b011fd4dc7(rax_30, rdx_14);
        
        if (var_470_1)
        {
            int64_t r9_2 = uu_more::setup_term::hbb8a9341123ad1e0();
            var_2f8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            int64_t var_4e0;
            int128_t* result_2;
            void** rdx_16;
            result_2 = uu_more::more::h8763b7f12892fd6b(var_478_1, var_470_1, &var_2f8, 0, 0, r9_2, 
                0, var_4e0, &var_3a8);
            result = result_2;
            
            if (result_2)
                goto label_484e3c;
            
            uu_more::reset_term::h414dda587ba155f3(&var_2f8);
            label_484d12:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he781af9e0f3172db(&var_480);
            core::ptr::drop_in_place$LT$uu_more..Options$GT$::hfbeede890f8e1fbd(&var_3a8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd23c2e9f40f94766(&var_3e8);
            return nullptr;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h961c84a8721cb85e(&var_450);
        int64_t var_2e8_10 = var_440;
        var_2f8 = var_450;
        int32_t var_2e0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&var_2f8);
        label_484e3c:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he781af9e0f3172db(&var_480);
        core::ptr::drop_in_place$LT$uu_more..Options$GT$::hfbeede890f8e1fbd(&var_3a8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd23c2e9f40f94766(&var_3e8);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_448);
    return result;
}
