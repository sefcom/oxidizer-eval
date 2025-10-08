
  int64_t bat::app::App::matches::hdbbfdfbdf2b6730c(char* arg1, int32_t arg2)

{
    int64_t var_2f8;
    wild::args_os::h91687d91224c0c4b(&var_2f8);
    int64_t var_368;
    
    if (!_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::ha42ee29f2c654f8d(&var_2f8))
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e2168353368336d(&var_368, &var_2f8);
    else
        var_368 = -0x8000000000000000;
    
    int64_t var_338;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_338, "cachesrc/bin/bat/app.rsCould not…", 5);
    int64_t rdi_4 = var_338;
    int64_t r14 = var_368;
    int128_t var_318;
    int64_t var_360;
    int64_t var_330;
    int64_t r12_1;
    
    if (r14 != -0x8000000000000000)
    {
        int64_t var_328;
        
        if (rdi_4 != -0x8000000000000000)
        {
            r12_1 = var_360;
            uint64_t var_358;
            
            if (!alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h3157ab32a91dd951(r12_1, var_358, var_330, var_328))
                goto label_7a6094;
            
            goto label_7a6057;
        }
        
        label_7a6094:
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(rdi_4, var_330);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(r14, var_360);
        core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(&var_2f8);
        wild::args_os::h91687d91224c0c4b(&var_2f8);
        char rax_3 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h6ab9270b351d8cab(_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hc05e6ee77d3e443c(&var_2f8));
        core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(&var_2f8);
        int64_t* rdi_16 = &var_338;
        int64_t var_350;
        int128_t var_348;
        int64_t var_2e8;
        
        if (!rax_3)
        {
            wild::args_os::h91687d91224c0c4b(rdi_16);
            bat::config::get_args_from_env_opts_var::h92b97541d17b6770(&var_2f8);
            int64_t rax_5;
            
            if (var_2f8 != -0x7fffffffffffffff)
            {
                int64_t var_358_2 = var_2e8;
                var_368 = var_2f8;
                rax_5 = var_368;
                
                if (rax_5 == -0x8000000000000000)
                {
                    label_7a61a6:
                    _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_2f8, "Could not parse configuration fi…", 0x22);
                    int128_t var_2b8;
                    *(arg1 + 0x40) = var_2b8;
                    int128_t zmm0_5 = var_2f8;
                    int128_t var_2c8;
                    *(arg1 + 0x30) = var_2c8;
                    int128_t var_2d8;
                    *(arg1 + 0x20) = var_2d8;
                    *(arg1 + 0x10) = var_2e8;
                    *arg1 = zmm0_5;
                    return core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(
                        &var_338);
                }
            }
            else
            {
                bat::config::get_args_from_config_file::ha270dcc92bd168cc(&var_368);
                rax_5 = var_368;
                
                if (rax_5 == -0x8000000000000000)
                    goto label_7a61a6;
            }
            
            var_350 = rax_5;
            var_348 = var_360;
            bat::config::get_args_from_env_vars::he80b41528665be0b(&var_368);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h773bba194ed5337e(&var_2f8, &var_368);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hdc7fb04415129507(&var_350, &var_2f8);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e2168353368336d(&var_2f8, &var_338);
            
            if (var_2f8 == -0x8000000000000000)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            int64_t var_358_3 = var_2e8;
            var_368 = var_2f8;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::hc907e9f21102985c(&var_350, &var_368);
            var_2e8 = var_328;
            var_2f8 = var_338;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3e7c4c4d66788513(&var_2f8, &var_350);
        }
        else
        {
            wild::args_os::h91687d91224c0c4b(rdi_16);
            bat::config::get_args_from_env_vars::he80b41528665be0b(&var_350);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e2168353368336d(&var_2f8, &var_338);
            
            if (var_2f8 == -0x8000000000000000)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            int64_t var_358_1 = var_2e8;
            var_368 = var_2f8;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::hc907e9f21102985c(&var_350, &var_368);
            var_2e8 = var_328;
            var_2f8 = var_338;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h937e1e1c5c562a1d(&var_2f8, &var_350);
        }
        var_318 = var_350;
        int64_t var_308_1 = *var_348[8];
    }
    else
    {
        if (rdi_4 != -0x8000000000000000)
            goto label_7a6094;
        
        r12_1 = var_360;
        label_7a6057:
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(rdi_4, var_330);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(r14, r12_1);
        core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(&var_2f8);
        wild::args_os::h91687d91224c0c4b(&var_2f8);
        core::iter::traits::iterator::Iterator::collect::h94291d65795d783f(&var_318, &var_2f8);
    }
    bat::clap_app::build_app::h78d569fc3d0211eb(&var_2f8, arg2);
    int64_t result = clap_builder::builder::command::Command::get_matches_from::h2a1f167aaeaaa5cb(
        &arg1[8], &var_2f8, &var_318);
    *arg1 = 0xd;
    return result;
}
