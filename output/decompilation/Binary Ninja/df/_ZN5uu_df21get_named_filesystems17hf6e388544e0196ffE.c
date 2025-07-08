
  int64_t uu_df::get_named_filesystems::hf6e388544e0196ff(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    void* const var_228;
    uucore::features::fsext::read_fs_list::h424e364609cbd5d3(&var_228);
    void* const rdx = var_228;
    int64_t result;
    int64_t var_218;
    
    if (rdx == -0x8000000000000000)
    {
        arg1[1] = result;
        arg1[2] = var_218;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    void* const var_258 = rdx;
    int64_t result_1 = result;
    int64_t var_248_1 = var_218;
    int128_t var_308;
    uu_df::filter_mount_list::h552d57bf732d9983(&var_308, &var_258, arg4);
    void var_138;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hde82d0e33efa5e10(&var_138, &var_308);
    void var_338;
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::hfc330947ec3cd1ff(&var_338, &var_138);
    int64_t var_350 = 0;
    int64_t var_348_1 = 8;
    int64_t var_340_1 = 0;
    int64_t var_328;
    int64_t* var_390;
    int64_t** var_370;
    
    if (!var_328)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&var_308);
        int64_t var_2f8;
        int64_t var_218_1 = var_2f8;
        var_228 = var_308;
        int32_t var_210_1 = 1;
        int64_t* rax_14 = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&var_228);
        var_390 = rax_14;
        int64_t* var_388_4 = &data_53ea20;
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_14));
        int64_t** rax_16;
        int64_t rdx_6;
        rax_16 = uucore::util_name::h60d842bf27b05e82();
        var_370 = rax_16;
        int64_t var_368_4 = rdx_6;
        var_308 = &var_370;
        *var_308[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
        int64_t** var_2f8_6 = &var_390;
        int64_t (* var_2f0_2)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
        var_228 = &data_53e998;
        int64_t var_220 = 3;
        int64_t var_208_1 = 0;
        int128_t* var_218_2 = &var_308;
        var_210_1 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(var_390, var_388_4);
        arg1[2] = var_340_1;
        *arg1 = var_350;
    }
    else
    {
        int64_t var_318 = arg2;
        int64_t var_310_1 = arg2 + (arg3 << 3);
        int64_t* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&var_318);
        
        if (i_2)
        {
            int64_t* i_1 = i_2;
            int64_t* i;
            
            do
            {
                int64_t* var_330;
                uu_df::filesystem::Filesystem::from_path::h5b49a475fd8fdd25(&var_228, var_330, 
                    var_328, i_1);
                
                if (var_228 != -0x8000000000000000)
                {
                    void var_118;
                    memcpy(&var_118, &var_228, 0xe8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::ha04b626b2435bc8e(&var_350, &var_118);
                }
                else
                {
                    std::fs::metadata::h2a3b352190f658b7(&var_308, 
                        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*i_1));
                    int64_t rdi_11 = var_308;
                    int64_t rsi_7 = *var_308[8];
                    int128_t* var_380;
                    int128_t** var_360;
                    int64_t var_2f0;
                    
                    if (rdi_11 != 2)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(rdi_11, rsi_7);
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&var_370);
                        int128_t** var_2f8_4 = var_360;
                        var_308 = var_370;
                        var_2f0 = 1;
                        int128_t* rax_9 =
                            alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&var_308);
                        var_380 = rax_9;
                        int64_t* var_378_2 = &data_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_9));
                        int64_t* rax_11;
                        int64_t rdx_5;
                        rax_11 = uucore::util_name::h60d842bf27b05e82();
                        var_390 = rax_11;
                        int64_t var_388_3 = rdx_5;
                        var_370 = &var_390;
                        int64_t (* var_368_3)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        var_360 = &var_380;
                        int64_t (* var_358_2)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        var_308 = &data_53e998;
                        *var_308[8] = 3;
                        int64_t var_2e8_3 = 0;
                        int64_t*** var_2f8_5 = &var_370;
                        var_2f0 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_308);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(var_380, var_378_2);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(2, rsi_7);
                        int64_t** rax_3;
                        int64_t rdx_3;
                        rax_3 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*i_1);
                        var_370 = rax_3;
                        int64_t var_368_1 = rdx_3;
                        var_390 = &var_370;
                        int64_t (* var_388_1)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_308 = &data_53e9c8;
                        *var_308[8] = 2;
                        int64_t var_2e8_1 = 0;
                        int64_t** var_2f8_1 = &var_390;
                        int64_t var_2f0_1 = 1;
                        int128_t var_240;
                        core::option::Option$LT$T$GT$::map_or_else::h4b6e538973bc8efd(&var_240, 
                            &var_308);
                        var_2f0_1 = 1;
                        var_308 = var_240;
                        int64_t var_230;
                        int64_t var_2f8_2 = var_230;
                        int128_t* rax_5 =
                            alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&var_308);
                        var_380 = rax_5;
                        void** const var_378_1 = &data_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_5));
                        int64_t* rax_7;
                        int64_t rdx_4;
                        rax_7 = uucore::util_name::h60d842bf27b05e82();
                        var_390 = rax_7;
                        int64_t var_388_2 = rdx_4;
                        var_370 = &var_390;
                        int64_t (* var_368_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        var_360 = &var_380;
                        int64_t (* var_358_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        var_308 = &data_53e998;
                        *var_308[8] = 3;
                        int64_t var_2e8_2 = 0;
                        int64_t*** var_2f8_3 = &var_370;
                        var_2f0 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_308);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(var_380, var_378_1);
                    }
                }
                
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&var_318);
                i_1 = i;
            } while (i);
        }
        
        arg1[2] = var_340_1;
        *arg1 = var_350;
    }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::he92feecb328c252c(&var_338);
}
