
  fn uu_df::get_named_filesystems::h04ac4719102a6bd6(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut c_void) -> *mut c_void

{
    let mut r12: *mut i64 = arg2;
    let mut result_2: *mut c_void;
    uucore::features::fsext::read_fs_list::h6f122f433e9b10c6(&result_2);
    let result: *mut c_void = result_2;
    let var_310: i64;
    let var_308: i64;
    
    if -(result) == -0x8000000000000000
    {
        arg1[1] = var_310;
        arg1[2] = var_308;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut result_1: *mut c_void = result;
    let var_328_1: i64 = var_310;
    let var_320_1: i64 = var_308;
    let mut var_358: i64 = 0;
    let var_350_1: i64 = 8;
    let var_348_1: i64 = 0;
    let mut var_378: *mut i128;
    let mut var_230: i128;
    let mut var_220: *mut u64;
    let mut var_118: i64;
    
    if arg3 != 0
    {
        let mut i_1: i64 = arg3 << 3;
        let mut i: i64;
        
        do
        {
            uu_df::filesystem::Filesystem::from_path::h8c044b7be3620a3c(&var_118, var_310, var_308, 
                r12);
            
            if var_118 != -0x8000000000000000
            {
                memcpy(&var_230, &var_118, 0xe8);
                
                if uu_df::is_included::h2cb576fb785b9846(&var_230, arg4) == 0
                {
                    core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem$GT$::h796a453b85755ea4(&var_230);
                }
                else
                {
                    memcpy(&result_2, &var_230, 0xe8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5c5f06b26c9d90a4(&var_358, &result_2);
                }
            }
            else
            {
                let var_110: i8;
                let rax: u32 = var_110;
                let mut var_368: u64;
                let mut var_300: i32;
                let mut var_218: fn(arg1: *mut i64) -> i64;
                
                if rax == 0
                {
                    let mut rax_7: i64;
                    let mut rdx_3: i64;
                    rax_7 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::he61e357f22fb6931(*r12);
                    var_230 = 1;
                    *var_230[8] = rax_7;
                    let var_220_1: i64 = rdx_3;
                    var_218 = 1;
                    var_378 = &var_230;
                    let var_370_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_2 = &data_502038;
                    let var_310_3: i64 = 2;
                    let var_2f8_3: i64 = 0;
                    let var_308_4: *mut *mut i128 = &var_378;
                    var_300 = 1;
                    let mut var_130: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hd603ea6dce20e29a(&var_130, 
                        &result_2);
                    var_300 = 1;
                    result_2 = var_130;
                    let var_120: i64;
                    let var_308_5: i64 = var_120;
                    let rax_9: u64 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
                    var_368 = rax_9;
                    let var_360_2: *mut i64 = &data_502078;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_9));
                    let mut rax_11: *mut i128;
                    let mut rdx_4: i64;
                    rax_11 = uucore::util_name::h074417a1e6395129();
                    var_378 = rax_11;
                    let var_370_4: i64 = rdx_4;
                    var_230 = &var_378;
                    *var_230[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
                    var_220 = &var_368;
                    var_218 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
                    result_2 = &data_502008;
                    let var_310_4: i64 = 3;
                    let var_2f8_4: i64 = 0;
                    let var_308_6: *mut i128 = &var_230;
                    var_300 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_368, var_360_2);
                }
                else if rax != 1
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5e212f3fc67d7e91(&var_230, "no file systems processed: No su…", 0x19);
                    let var_308_7: *mut u64 = var_220;
                    result_2 = var_230;
                    var_300 = 1;
                    let rax_13: u64 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
                    var_368 = rax_13;
                    let var_360_3: *mut i64 = &data_502078;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_13));
                    let mut rax_15: *mut i128;
                    let mut rdx_5: i64;
                    rax_15 = uucore::util_name::h074417a1e6395129();
                    var_378 = rax_15;
                    let var_370_5: i64 = rdx_5;
                    var_230 = &var_378;
                    *var_230[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
                    var_220 = &var_368;
                    var_218 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
                    result_2 = &data_502008;
                    let var_310_5: i64 = 3;
                    let var_2f8_5: i64 = 0;
                    let var_308_8: *mut i128 = &var_230;
                    var_300 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_368, var_360_3);
                }
                else
                {
                    let mut rax_1: i64;
                    let mut rdx_1: i64;
                    rax_1 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::he61e357f22fb6931(*r12);
                    var_230 = rax_1;
                    *var_230[8] = rdx_1;
                    var_378 = &var_230;
                    let var_370_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    result_2 = &data_501fe8;
                    let var_310_1: i64 = 2;
                    let var_2f8_1: i64 = 0;
                    let var_308_1: *mut *mut i128 = &var_378;
                    var_300 = 1;
                    let mut var_148: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hd603ea6dce20e29a(&var_148, 
                        &result_2);
                    var_300 = 1;
                    result_2 = var_148;
                    let var_138: i64;
                    let var_308_2: i64 = var_138;
                    let rax_3: u64 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
                    var_368 = rax_3;
                    let var_360_1: *mut *mut c_void = &data_502078;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_3));
                    let mut rax_5: *mut i128;
                    let mut rdx_2: i64;
                    rax_5 = uucore::util_name::h074417a1e6395129();
                    var_378 = rax_5;
                    let var_370_2: i64 = rdx_2;
                    var_230 = &var_378;
                    *var_230[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
                    var_220 = &var_368;
                    var_218 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
                    result_2 = &data_502008;
                    let var_310_2: i64 = 3;
                    let var_2f8_2: i64 = 0;
                    let var_308_3: *mut i128 = &var_230;
                    var_300 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_368, var_360_1);
                }
            }
            
            r12 = &r12[1];
            i = i_1;
            i_1 -= 8;
        } while i != 8;
    }
    
    if uucore::mods::error::get_exit_code::h4ce6cf124c2ef658() == 0 && var_348_1 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5e212f3fc67d7e91(&var_230, "no file systems processed: No su…", 0x19);
        let var_308_9: *mut u64 = var_220;
        result_2 = var_230;
        let mut var_300_1: i32 = 1;
        let rax_18: u64 = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&result_2);
        var_378 = rax_18;
        let var_370_6: *mut *mut c_void = &data_502078;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_18));
        let mut rax_20: i64;
        let mut rdx_6: i64;
        rax_20 = uucore::util_name::h074417a1e6395129();
        var_118 = rax_20;
        let var_110_1: i64 = rdx_6;
        var_230 = &var_118;
        *var_230[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c47c1ce865d8231;
        let var_220_2: *mut *mut i128 = &var_378;
        let var_218_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d2dcefa87161161;
        result_2 = &data_502008;
        let var_310_6: i64 = 3;
        let var_2f8_6: i64 = 0;
        let var_308_10: *mut i128 = &var_230;
        var_300_1 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&result_2);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfabf09c63ef1010c(var_378, var_370_6);
    }
    
    arg1[2] = var_348_1;
    *arg1 = var_358;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::h2b7ba84ce5c92a56(&result_1)
}
