
  void* const uu_df::get_named_filesystems::h04ac4719102a6bd6(int64_t* arg1, int64_t* arg2, int64_t arg3, void* arg4)

{
    int64_t* r12 = arg2;
    void* const result_2;
    uucore::features::fsext::read_fs_list::h6f122f433e9b10c6(&result_2);
    void* const result = result_2;
    int64_t var_310;
    int64_t var_308;
    
    if (-(result) == -0x8000000000000000)
    {
        arg1[1] = var_310;
        arg1[2] = var_308;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    void* const result_1 = result;
    int64_t var_328_1 = var_310;
    int64_t var_320_1 = var_308;
    int64_t var_358 = 0;
    int64_t var_350_1 = 8;
    int64_t var_348_1 = 0;
    int128_t* var_378;
    int128_t var_230;
    uint64_t* var_220;
    int64_t var_118;
    
    if (arg3)
    {
        int64_t i_1 = arg3 << 3;
        int64_t i;
        
        do
        {
            uu_df::filesystem::Filesystem::from_path::h8c044b7be3620a3c(&var_118, var_310, var_308, 
                r12);
            
            if (var_118 != -0x8000000000000000)
            {
                memcpy(&var_230, &var_118, 0xe8);
                
                if (!uu_df::is_included::h2cb576fb785b9846(&var_230, arg4))
                    core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem$GT$::h796a453b85755ea4(&var_230);
                else
                {
                    memcpy(&result_2, &var_230, 0xe8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5c5f06b26c9d90a4(&var_358, &result_2);
                }
            }
            else
            {
                char var_110;
                uint32_t rax = var_110;
                uint64_t var_368;
                int32_t var_300;
                int64_t (* var_218)(int64_t* arg1);
                
                if (!rax)
                {
                    int64_t rax_7;
                    int64_t rdx_3;
                    rax_7 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::he61e357f22fb6931(*r12);
                    var_230 = 1;
                    *var_230[8] = rax_7;
                    int64_t var_220_1 = rdx_3;
                    var_218 = 1;
                    var_378 = &var_230;
                    int64_t (* var_370_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_2 = &data_502038;
                    int64_t var_310_3 = 2;
                    int64_t var_2f8_3 = 0;
                    int128_t** var_308_4 = &var_378;
                    var_300 = 1;
                    int128_t var_130;
                    core::option::Option$LT$T$GT$::map_or_else::hd603ea6dce20e29a(&var_130, 
                        &result_2);
                    var_300 = 1;
                    result_2 = var_130;
                    int64_t var_120;
                    int64_t var_308_5 = var_120;
                    uint64_t rax_9 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
                    var_368 = rax_9;
                    int64_t* var_360_2 = &data_502078;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_9));
                    int128_t* rax_11;
                    int64_t rdx_4;
                    rax_11 = uucore::util_name::h074417a1e6395129();
                    var_378 = rax_11;
                    int64_t var_370_4 = rdx_4;
                    var_230 = &var_378;
                    *var_230[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
                    var_220 = &var_368;
                    var_218 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
                    result_2 = &data_502008;
                    int64_t var_310_4 = 3;
                    int64_t var_2f8_4 = 0;
                    int128_t* var_308_6 = &var_230;
                    var_300 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_368, var_360_2);
                }
                else if (rax != 1)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5e212f3fc67d7e91(&var_230, "no file systems processed: No su…", 0x19);
                    uint64_t* var_308_7 = var_220;
                    result_2 = var_230;
                    var_300 = 1;
                    uint64_t rax_13 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
                    var_368 = rax_13;
                    int64_t* var_360_3 = &data_502078;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_13));
                    int128_t* rax_15;
                    int64_t rdx_5;
                    rax_15 = uucore::util_name::h074417a1e6395129();
                    var_378 = rax_15;
                    int64_t var_370_5 = rdx_5;
                    var_230 = &var_378;
                    *var_230[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
                    var_220 = &var_368;
                    var_218 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
                    result_2 = &data_502008;
                    int64_t var_310_5 = 3;
                    int64_t var_2f8_5 = 0;
                    int128_t* var_308_8 = &var_230;
                    var_300 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_368, var_360_3);
                }
                else
                {
                    int64_t rax_1;
                    int64_t rdx_1;
                    rax_1 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::he61e357f22fb6931(*r12);
                    var_230 = rax_1;
                    *var_230[8] = rdx_1;
                    var_378 = &var_230;
                    uint64_t (* var_370_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    result_2 = &data_501fe8;
                    int64_t var_310_1 = 2;
                    int64_t var_2f8_1 = 0;
                    int128_t** var_308_1 = &var_378;
                    var_300 = 1;
                    int128_t var_148;
                    core::option::Option$LT$T$GT$::map_or_else::hd603ea6dce20e29a(&var_148, 
                        &result_2);
                    var_300 = 1;
                    result_2 = var_148;
                    int64_t var_138;
                    int64_t var_308_2 = var_138;
                    uint64_t rax_3 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
                    var_368 = rax_3;
                    void** const var_360_1 = &data_502078;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_3));
                    int128_t* rax_5;
                    int64_t rdx_2;
                    rax_5 = uucore::util_name::h074417a1e6395129();
                    var_378 = rax_5;
                    int64_t var_370_2 = rdx_2;
                    var_230 = &var_378;
                    *var_230[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
                    var_220 = &var_368;
                    var_218 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
                    result_2 = &data_502008;
                    int64_t var_310_2 = 3;
                    int64_t var_2f8_2 = 0;
                    int128_t* var_308_3 = &var_230;
                    var_300 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_368, var_360_1);
                }
            }
            
            r12 = &r12[1];
            i = i_1;
            i_1 -= 8;
        } while (i != 8);
    }
    
    if (!uucore::mods::error::get_exit_code::h4ce6cf124c2ef658() && !var_348_1)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5e212f3fc67d7e91(&var_230, "no file systems processed: No su…", 0x19);
        uint64_t* var_308_9 = var_220;
        result_2 = var_230;
        int32_t var_300_1 = 1;
        uint64_t rax_18 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
        var_378 = rax_18;
        void** const var_370_6 = &data_502078;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_18));
        int64_t rax_20;
        int64_t rdx_6;
        rax_20 = uucore::util_name::h074417a1e6395129();
        var_118 = rax_20;
        int64_t var_110_1 = rdx_6;
        var_230 = &var_118;
        *var_230[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
        int128_t** var_220_2 = &var_378;
        int64_t (* var_218_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
        result_2 = &data_502008;
        int64_t var_310_6 = 3;
        int64_t var_2f8_6 = 0;
        int128_t* var_308_10 = &var_230;
        var_300_1 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_378, var_370_6);
    }
    
    arg1[2] = var_348_1;
    *arg1 = var_358;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::h2b7ba84ce5c92a56(&result_1);
}
