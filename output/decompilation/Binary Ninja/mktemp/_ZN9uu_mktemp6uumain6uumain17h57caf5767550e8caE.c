
  uint64_t uu_mktemp::uumain::uumain::h57caf5767550e8ca(int64_t arg1)

{
    void var_3b8;
    core::iter::traits::iterator::Iterator::collect::hd83c665600655c8f(&var_3b8, arg1);
    char var_2f8;
    uu_mktemp::uu_app::hf890987c6ac202a5(&var_2f8);
    int64_t var_428;
    int64_t var_3b0;
    int64_t var_3a8;
    clap_builder::builder::command::Command::try_get_matches_from::hb2bf9d3bff290aa8(&var_428, 
        &var_2f8, var_3b0, var_3a8);
    uint64_t result;
    int32_t* var_420;
    int128_t var_3a0;
    void** var_390;
    
    if (!(0 + -(var_428)))
    {
        int64_t var_3f8;
        int64_t var_308_1 = var_3f8;
        int128_t var_408;
        int128_t var_318_1 = var_408;
        int128_t var_418;
        int128_t var_328_1 = var_418;
        int128_t var_338 = var_428;
        uu_mktemp::Options::from::h9e8f44a051439882(&var_3a0, &var_338);
        std::env::var::hd1d7290f1c0b217f(&var_2f8);
        char rbp_1 = var_2f8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h3eea05ffe5343f6c(&var_2f8);
        
        if (rbp_1 & 1)
        {
            label_45e1c2:
            int128_t var_360;
            int128_t var_2b8_1 = var_360;
            int128_t var_370;
            int128_t var_2c8_1 = var_370;
            int128_t var_380;
            int128_t var_2d8_1 = var_380;
            var_2f8 = var_3a0;
            uu_mktemp::Params::from::h79f2486a494e973a(&var_428, &var_2f8);
            int64_t r14_1 = var_428;
            uint64_t rdx_3 = var_418;
            int128_t var_3d8_1 = var_418;
            int64_t rax_10 = *var_408[8];
            
            if (r14_1 != -0x8000000000000000)
            {
                var_418 = rax_10;
                var_428 = var_3d8_1;
                int64_t var_440 = var_3f8;
                int128_t var_3f0;
                int64_t rax_14 = var_3f0;
                int64_t r10_1 = *var_3f0[8];
                char var_357;
                int64_t var_3e0;
                
                if (!var_357)
                {
                    char var_358;
                    uint64_t var_458_2 = var_358;
                    int64_t var_460_1 = r10_1;
                    int64_t var_468_1 = rax_14;
                    uu_mktemp::exec::heedcd9fa9b859fdd(&var_2f8, var_420, rdx_3, var_420, rax_10, 
                        var_3e0);
                }
                else
                    uu_mktemp::dry_exec::h79e853eb482345ae(&var_2f8, var_420, rdx_3, var_420, 
                        rax_10, var_3e0, rax_14, r10_1);
                int64_t rax_15 = var_2f8;
                uint64_t result_2;
                result = result_2;
                char var_356;
                
                if (!var_356)
                {
                    if (rax_15 == -0x8000000000000000)
                        goto label_45e36c;
                    
                    label_45e395:
                    int64_t var_350 = rax_15;
                    uint64_t result_1 = result;
                    void** const var_340_1 = var_390;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hff3b8e8518f7a10f(uucore::mods::display::println_verbatim::h83517c5b48aaf591(&var_350));
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f07e27e74b22b47(
                        &var_440);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f07e27e74b22b47(
                        &var_428);
                    core::mem::drop::hefa9b82e173370e7(r14_1, var_420);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha3cfcef4e4d23239(&var_338);
                }
                else
                {
                    if (rax_15 != -0x8000000000000000)
                        goto label_45e395;
                    
                    result =
                        uu_mktemp::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hc70eeb2c2d7c4ce4(
                        result, var_390);
                    label_45e36c:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f07e27e74b22b47(
                        &var_440);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f07e27e74b22b47(
                        &var_428);
                    core::mem::drop::hefa9b82e173370e7(r14_1, var_420);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha3cfcef4e4d23239(&var_338);
                }
            }
            else
            {
                var_2d8_1 = rax_10;
                int128_t var_2e8_2 = var_3d8_1;
                var_2f8 = var_420;
                uint64_t var_2f0 = rdx_3;
                *var_2d8_1[8] = var_3f8;
                result = alloc::boxed::Box$LT$T$GT$::new::h926c3f51c79b10e8(&var_2f8);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha3cfcef4e4d23239(&var_338);
            }
        }
        else
        {
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_338, "template", 8))
                goto label_45e1c2;
            
            int64_t rax_7;
            
            if (var_3a8)
                rax_7 = var_3a8 * 3;
            
            if (!var_3a8 || var_3b0 + (rax_7 << 3) == 0x18)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            void* rax_8 = var_3b0 + (rax_7 << 3);
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h81f4ba8d19a066ab(*(rax_8 - 0x10), *(rax_8 - 8), *var_3a0[8], var_390))
                goto label_45e1c2;
            
            var_2f8 = -0x7ffffffffffffffa;
            result = alloc::boxed::Box$LT$T$GT$::new::h926c3f51c79b10e8(&var_2f8);
            core::ptr::drop_in_place$LT$uu_mktemp..Options$GT$::h3eaafb388e86958c(&var_3a0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha3cfcef4e4d23239(&var_338);
        }
    }
    else if (*(var_420 + 0xdd) != 5)
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_420);
    else
    {
        clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::iter::h9e0e6a6233172a48(&var_2f8, 
            &var_420[8]);
        
        if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf5f7d8e88d2469fb(core::iter::traits::iterator::Iterator::try_fold::h1ac0a31b1641a928(&var_2f8)))
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_420);
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h291f4b0fc65cd57e(&var_3a0, "too many templatesPOSIXLY_CORREC…", 0x12);
            int128_t var_2e8;
            var_2e8 = var_390;
            var_2f8 = var_3a0;
            *var_2e8[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h67253815826d8a15(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h67320b3b09ec610f(var_420);
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hc2a7ab734109fc31(&var_3b8);
    return result;
}
