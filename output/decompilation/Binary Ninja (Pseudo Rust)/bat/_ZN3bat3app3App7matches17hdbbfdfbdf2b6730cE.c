
  fn bat::app::App::matches::hdbbfdfbdf2b6730c(arg1: *mut i8, arg2: i32) -> i64

{
    let mut var_2f8: i64;
    wild::args_os::h91687d91224c0c4b(&var_2f8);
    let mut var_368: i64;
    
    if _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::ha42ee29f2c654f8d(&var_2f8) == 0
    {
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e2168353368336d(&var_368, &var_2f8);
    }
    else
    {
        var_368 = -0x8000000000000000;
    }
    
    let mut var_338: i64;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_338, "cachesrc/bin/bat/app.rsCould not…", 5);
    let rdi_4: i64 = var_338;
    let r14: i64 = var_368;
    let mut var_318: i128;
    let var_360: i64;
    let var_330: i64;
    let mut r12_1: i64;
    
    if r14 != -0x8000000000000000
    {
        let var_328: i64;
        
        if rdi_4 != -0x8000000000000000
        {
            r12_1 = var_360;
            let var_358: u64;
            
            if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h3157ab32a91dd951(r12_1, var_358, var_330, var_328) == 0
            {
                goto 'label_7a6094;
            }
            
            goto 'label_7a6057;
        }
        
        'label_7a6094:
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(rdi_4, var_330);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(r14, var_360);
        core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(&var_2f8);
        wild::args_os::h91687d91224c0c4b(&var_2f8);
        let rax_3: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h6ab9270b351d8cab(_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hc05e6ee77d3e443c(&var_2f8));
        core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(&var_2f8);
        let rdi_16: *mut i64 = &var_338;
        let mut var_350: i64;
        let mut var_348: i128;
        let mut var_2e8: i64;
        
        if rax_3 == 0
        {
            wild::args_os::h91687d91224c0c4b(rdi_16);
            bat::config::get_args_from_env_opts_var::h92b97541d17b6770(&var_2f8);
            let mut rax_5: i64;
            
            if var_2f8 != -0x7fffffffffffffff
            {
                let var_358_2: i64 = var_2e8;
                var_368 = var_2f8;
                rax_5 = var_368;
                
                if rax_5 == -0x8000000000000000
                {
                    'label_7a61a6:
                    _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_2f8, "Could not parse configuration fi…", 0x22);
                    let var_2b8: i128;
                    *arg1.byte_offset(0x40) = var_2b8;
                    let zmm0_5: i128 = var_2f8;
                    let var_2c8: i128;
                    *arg1.byte_offset(0x30) = var_2c8;
                    let var_2d8: i128;
                    *arg1.byte_offset(0x20) = var_2d8;
                    *arg1.byte_offset(0x10) = var_2e8;
                    *arg1 = zmm0_5;
                    return core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(
                        &var_338);
                }
            }
            else
            {
                bat::config::get_args_from_config_file::ha270dcc92bd168cc(&var_368);
                rax_5 = var_368;
                
                if rax_5 == -0x8000000000000000
                {
                    goto 'label_7a61a6;
                }
            }
            
            var_350 = rax_5;
            var_348 = var_360;
            bat::config::get_args_from_env_vars::he80b41528665be0b(&var_368);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h773bba194ed5337e(&var_2f8, &var_368);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hdc7fb04415129507(&var_350, &var_2f8);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e2168353368336d(&var_2f8, &var_338);
            
            if var_2f8 == -0x8000000000000000
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let var_358_3: i64 = var_2e8;
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
            
            if var_2f8 == -0x8000000000000000
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let var_358_1: i64 = var_2e8;
            var_368 = var_2f8;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::hc907e9f21102985c(&var_350, &var_368);
            var_2e8 = var_328;
            var_2f8 = var_338;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h937e1e1c5c562a1d(&var_2f8, &var_350);
        }
        var_318 = var_350;
        let var_308_1: i64 = *var_348[8];
    }
    else
    {
        if rdi_4 != -0x8000000000000000
        {
            goto 'label_7a6094;
        }
        
        r12_1 = var_360;
        'label_7a6057:
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(rdi_4, var_330);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h198ca8bda8255d94(r14, r12_1);
        core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::hfaba7b8d7b37da12(&var_2f8);
        wild::args_os::h91687d91224c0c4b(&var_2f8);
        core::iter::traits::iterator::Iterator::collect::h94291d65795d783f(&var_318, &var_2f8);
    }
    bat::clap_app::build_app::h78d569fc3d0211eb(&var_2f8, arg2);
    let result: i64 = clap_builder::builder::command::Command::get_matches_from::h2a1f167aaeaaa5cb(
        &arg1[8], &var_2f8, &var_318);
    *arg1 = 0xd;
    result
}
