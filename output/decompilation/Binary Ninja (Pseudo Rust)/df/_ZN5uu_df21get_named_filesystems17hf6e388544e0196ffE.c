
  fn uu_df::get_named_filesystems::hf6e388544e0196ff(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut var_228: *mut c_void;
    uucore::features::fsext::read_fs_list::h424e364609cbd5d3(&var_228);
    let rdx: *mut c_void = var_228;
    let result: i64;
    let var_218: i64;
    
    if rdx == -0x8000000000000000
    {
        arg1[1] = result;
        arg1[2] = var_218;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_258: *mut c_void = rdx;
    let result_1: i64 = result;
    let var_248_1: i64 = var_218;
    let mut var_308: i128;
    uu_df::filter_mount_list::h552d57bf732d9983(&var_308, &var_258, arg4);
    let mut var_138: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hde82d0e33efa5e10(&var_138, &var_308);
    let mut var_338: ();
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::hfc330947ec3cd1ff(&var_338, &var_138);
    let mut var_350: i64 = 0;
    let var_348_1: i64 = 8;
    let var_340_1: i64 = 0;
    let var_328: i64;
    let mut var_390: *mut i64;
    let mut var_370: *mut *mut i64;
    
    if var_328 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&var_308);
        let var_2f8: i64;
        let var_218_1: i64 = var_2f8;
        var_228 = var_308;
        let mut var_210_1: i32 = 1;
        let rax_14: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&var_228);
        var_390 = rax_14;
        let var_388_4: *mut i64 = &data_53ea20;
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_14));
        let mut rax_16: *mut *mut i64;
        let mut rdx_6: i64;
        rax_16 = uucore::util_name::h60d842bf27b05e82();
        var_370 = rax_16;
        let var_368_4: i64 = rdx_6;
        var_308 = &var_370;
        *var_308[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
        let var_2f8_6: *mut *mut i64 = &var_390;
        let var_2f0_2: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
        var_228 = &data_53e998;
        let var_220: i64 = 3;
        let var_208_1: i64 = 0;
        let var_218_2: *mut i128 = &var_308;
        var_210_1 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(var_390, var_388_4);
        arg1[2] = var_340_1;
        *arg1 = var_350;
    }
    else
    {
        let mut var_318: i64 = arg2;
        let var_310_1: i64 = arg2 + (arg3 << 3);
        let i_2: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&var_318);
        
        if i_2 != 0
        {
            let mut i_1: *mut i64 = i_2;
            let mut i: *mut i64;
            
            do
            {
                let var_330: *mut i64;
                uu_df::filesystem::Filesystem::from_path::h5b49a475fd8fdd25(&var_228, var_330, 
                    var_328, i_1);
                
                if var_228 != -0x8000000000000000
                {
                    let mut var_118: ();
                    memcpy(&var_118, &var_228, 0xe8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::ha04b626b2435bc8e(&var_350, &var_118);
                }
                else
                {
                    std::fs::metadata::h2a3b352190f658b7(&var_308, 
                        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*i_1));
                    let rdi_11: i64 = var_308;
                    let rsi_7: i64 = *var_308[8];
                    let mut var_380: *mut i128;
                    let mut var_360: *mut *mut i128;
                    let mut var_2f0: i64;
                    
                    if rdi_11 != 2
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(rdi_11, rsi_7);
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&var_370);
                        let var_2f8_4: *mut *mut i128 = var_360;
                        var_308 = var_370;
                        var_2f0 = 1;
                        let rax_9: *mut i128 =
                            alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&var_308);
                        var_380 = rax_9;
                        let var_378_2: *mut i64 = &data_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_9));
                        let mut rax_11: *mut i64;
                        let mut rdx_5: i64;
                        rax_11 = uucore::util_name::h60d842bf27b05e82();
                        var_390 = rax_11;
                        let var_388_3: i64 = rdx_5;
                        var_370 = &var_390;
                        let var_368_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        var_360 = &var_380;
                        let var_358_2: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        var_308 = &data_53e998;
                        *var_308[8] = 3;
                        let var_2e8_3: i64 = 0;
                        let var_2f8_5: *mut *mut *mut i64 = &var_370;
                        var_2f0 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_308);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(var_380, var_378_2);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(2, rsi_7);
                        let mut rax_3: *mut *mut i64;
                        let mut rdx_3: i64;
                        rax_3 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*i_1);
                        var_370 = rax_3;
                        let var_368_1: i64 = rdx_3;
                        var_390 = &var_370;
                        let var_388_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_308 = &data_53e9c8;
                        *var_308[8] = 2;
                        let var_2e8_1: i64 = 0;
                        let var_2f8_1: *mut *mut i64 = &var_390;
                        let mut var_2f0_1: i64 = 1;
                        let mut var_240: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h4b6e538973bc8efd(&var_240, 
                            &var_308);
                        var_2f0_1 = 1;
                        var_308 = var_240;
                        let var_230: i64;
                        let var_2f8_2: i64 = var_230;
                        let rax_5: *mut i128 =
                            alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&var_308);
                        var_380 = rax_5;
                        let var_378_1: *mut *mut c_void = &data_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_5));
                        let mut rax_7: *mut i64;
                        let mut rdx_4: i64;
                        rax_7 = uucore::util_name::h60d842bf27b05e82();
                        var_390 = rax_7;
                        let var_388_2: i64 = rdx_4;
                        var_370 = &var_390;
                        let var_368_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        var_360 = &var_380;
                        let var_358_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        var_308 = &data_53e998;
                        *var_308[8] = 3;
                        let var_2e8_2: i64 = 0;
                        let var_2f8_3: *mut *mut *mut i64 = &var_370;
                        var_2f0 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_308);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(var_380, var_378_1);
                    }
                }
                
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&var_318);
                i_1 = i;
            } while i != 0;
        }
        
        arg1[2] = var_340_1;
        *arg1 = var_350;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::he92feecb328c252c(&var_338)
}
