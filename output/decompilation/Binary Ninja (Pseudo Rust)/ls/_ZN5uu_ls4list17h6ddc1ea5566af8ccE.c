
  fn uu_ls::list::h6ddc1ea5566af8cc(arg1: *mut i64, arg2: *mut c_void) -> *mut i128

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut r12: *mut i128;
    let var_28: *mut i128 = r12;
    let mut var_458: i64 = 0;
    let var_450: *mut *mut i64 = 8;
    let var_448: *mut *mut *mut c_void = nullptr;
    let mut var_440: i64 = 0;
    let var_438: *mut c_void = 8;
    let var_430: i64 = 0;
    let mut r14: i64;
    r14 = 1;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_428: ();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h869ec275f269e8ba(&var_428, 
        0x2000, &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
    let mut var_390: i64 = 0;
    let var_388: i64 = 8;
    let var_380: i128 = {0};
    let var_370: i64 = 8;
    let mut var_368: i128 = {0};
    let mut var_348: ();
    let mut var_32b: i8;
    
    if *arg2.byte_offset(0x18) != -0x8000000000000000
    {
        core::ops::function::FnOnce::call_once::hb012765dfd0482a2(&var_348, arg2.byte_offset(0x18));
    }
    else
    {
        var_32b = 2;
    }
    
    let rax: i64 = arg1[2];
    let mut var_400: *mut i128;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h58ac219310b2eb09(&var_400, arg1);
    let mut i: i64;
    let mut rdx: size_t;
    i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&var_400);
    let mut var_3c0: *mut c_void;
    let mut var_3a8: i128;
    let mut var_328: i128;
    let mut var_318: *mut *mut i128;
    let mut var_1f8: i128;
    
    if i != 0
    {
        let rsi_2: i8 = *arg2.byte_offset(0xe8);
        let mut rbx_1: *mut i128 = &var_328;
        rbp = *arg2.byte_offset(0xeb);
        let mut r15_1: u32 = *arg2.byte_offset(0xf2);
        r12 = &var_1f8;
        
        do
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(rbx_1, i, rdx);
            let var_398_1: *mut *mut i128 = var_318;
            var_3a8 = var_328;
            var_328 = 0;
            var_3c0 = -0x8000000000000000;
            rbx_1 = uu_ls::PathData::new::ha3e1f49dfc1f89b1(r12, &var_3a8, rbx_1, &var_3c0, rbp, 
                r15_1, 1);
            
            if uu_ls::PathData::get_metadata::hc7a96a0547653f90(r12) == 0
            {
                core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(r12);
            }
            else
            {
                let rax_3: *mut c_void = uu_ls::PathData::file_type::h128ed7d98b354477(r12);
                
                if rax_3 == 0
                {
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    memcpy(rbx_1, r12, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&var_458, rbx_1);
                }
                else if rsi_2 != 0 || (*rax_3 & 0xf000) != 0x4000
                {
                    memcpy(rbx_1, r12, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&var_458, rbx_1);
                }
                else
                {
                    memcpy(rbx_1, r12, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&var_440, rbx_1);
                }
            }
            
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&var_400);
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..path..Path$GT$$GT$::hcfe75888939086e5(&var_400);
    let mut r14_1: *mut c_void = arg2;
    uu_ls::sort_entries::h9b56d1e19b40eaef(var_450, var_448, r14_1);
    uu_ls::sort_entries::h9b56d1e19b40eaef(var_438, var_430, r14_1);
    
    if var_32b == 2
    {
        goto 'label_5274b1;
    }
    
    if uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(&var_348) == 0
    {
        goto 'label_5274b1;
    }
    
    uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&var_1f8, &var_348, 1);
    var_400 = &var_1f8;
    let var_3f8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_328 = &data_423c10;
    *var_328[8] = 1;
    let mut var_308: *mut *mut i128 = nullptr;
    var_318 = &var_400;
    let mut var_310: i64 = 1;
    let mut result: *mut i128;
    
    if std::io::Write::write_fmt::h51abc44b465d2e67(&var_428, &var_328) == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_1f8);
        'label_5274b1:
        let mut result_1: *mut i128;
        let mut rdx_5: *mut i128;
        result_1 = uu_ls::display_items::hbe9721d3f3017f49(var_450, var_448, r14_1, &var_428, 
            &var_390, &var_348, rbp);
        result = result_1;
        
        if result_1 == 0
        {
            var_3c0 = var_438;
            let var_3b8_1: *mut c_void = (var_430 * 0x130).byte_offset(var_438);
            let var_3b0_1: i64 = 0;
            let mut rax_11: i64;
            let mut rdx_7: *mut i128;
            rax_11 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(&var_3c0);
            
            if rdx_7 != 0
            {
                let mut rbx_2: i64 = rax_11;
                r12 = rdx_7;
                rax_11 = rax < 2;
                let rcx_6: bool = *r14_1.byte_offset(0xe6) == 0 & rax_11;
                let mut var_460: i64;
                var_460 = *r14_1.byte_offset(0xee);
                
                loop
                {
                    let mut var_358: *mut i128;
                    std::fs::read_dir::h9d938750fa0d5aed(&var_358, r12.byte_offset(0x18));
                    let var_350: i8;
                    let mut var_1e8: *mut *mut i128;
                    let mut var_1d8: i128;
                    
                    if var_350 != 2
                    {
                        let mut var_3d8: *mut i128 = var_358;
                        
                        if rcx_6 == 0
                        {
                            let mut result_6: *mut i128;
                            let mut rdx_11: *mut i128;
                            
                            if (rbx_2 | var_448) != 0
                            {
                                var_328 = &data_6125b8;
                                *var_328[8] = 1;
                                var_318 = 8;
                                var_310 = {0};
                                
                                if std::io::Write::write_fmt::h51abc44b465d2e67(&var_428, &var_328)
                                    != 0
                                {
                                    result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    'label_527a79:
                                    result = result_6;
                                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&var_3d8);
                                    goto 'label_5274c9;
                                }
                                
                                uu_ls::show_dir_name::h15f4c75d324b24c3(r12, &var_428, arg2);
                                var_328 = &data_6125b8;
                                *var_328[8] = 1;
                                var_318 = 8;
                                var_310 = {0};
                                
                                if std::io::Write::write_fmt::h51abc44b465d2e67(&var_428, &var_328)
                                    != 0
                                {
                                    result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    goto 'label_527a79;
                                }
                            }
                            else
                            {
                                if var_460 != 0
                                {
                                    let mut result_2: *mut i128;
                                    result_2 = uu_ls::dired::indent::h541a64321517b8c5(&var_428);
                                    result = result_2;
                                    
                                    if result_2 != 0
                                    {
                                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&var_3d8);
                                        goto 'label_5274c9;
                                    }
                                }
                                
                                uu_ls::show_dir_name::h15f4c75d324b24c3(r12, &var_428, arg2);
                                var_328 = &data_6125b8;
                                *var_328[8] = 1;
                                var_318 = 8;
                                var_310 = {0};
                                
                                if std::io::Write::write_fmt::h51abc44b465d2e67(&var_428, &var_328)
                                    != 0
                                {
                                    result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    goto 'label_527a79;
                                }
                                
                                if var_460 != 0
                                {
                                    let rbx_5: i64 = r12[1];
                                    uu_ls::dired::calculate_subdired::h85725549554709aa(&var_390, 
                                        rbx_5);
                                    *var_368[8] = *var_368[8] + rbx_5 + 3;
                                }
                            }
                        }
                        
                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h627ba5d5895a5d3c(&var_328);
                        var_1d8 = var_308;
                        var_1e8 = var_318;
                        var_1f8 = var_328;
                        let mut r14_3: *mut *mut i128;
                        r14_3 = 1;
                        uucore::features::fs::FileInformation::from_path::h569773e274f836e3(
                            &var_328, r12.byte_offset(0x18), *r12.byte_offset(0x128));
                        let r15_3: i64 = var_328;
                        let rbx_6: i64 = *var_328[8];
                        let mut rdx_16: *mut i128;
                        
                        if r15_3 != 0
                        {
                            let mut result_5: *mut i128;
                            result_5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            result = result_5;
                            'label_527a4b:
                            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d(&var_1f8);
                            
                            if r15_3 == 0
                            {
                                goto 'label_5274c9;
                            }
                            
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(
                                &var_3d8);
                            goto 'label_5274c9;
                        }
                        
                        let mut var_b8: ();
                        memcpy(&var_b8, &var_318, 0x88);
                        let mut var_c0: i64 = rbx_6;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(
                            &var_1f8, &var_c0);
                        let mut result_3: *mut i128;
                        result_3 = uu_ls::enter_directory::h306ec720e186c34e(r12, var_3d8, var_350, 
                            arg2, &var_428, &var_1f8, &var_390, &var_348);
                        result = result_3;
                        
                        if result_3 != 0
                        {
                            goto 'label_527a4b;
                        }
                        
                        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d(&var_1f8);
                    }
                    else
                    {
                        let rbx_3: *mut i128 = var_358;
                        let mut var_3c8: *mut i128 = rbx_3;
                        
                        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(&var_428) != 0
                        {
                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&var_3c8);
                            goto 'label_5274c9;
                        }
                        
                        var_400 = rbx_3;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_1f8, r12.byte_offset(0x18));
                        var_308 = var_1e8;
                        var_318 = var_1f8;
                        let rax_17: i8 = *r12.byte_offset(0x129);
                        *var_328[8] = rbx_3;
                        *var_328[1] = rax_17;
                        var_328 = 2;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2 - 0);
                        let mut rax_18: i64;
                        let mut rdx_9: i64;
                        rax_18 = uucore::util_name::h60d842bf27b05e82();
                        var_3a8 = rax_18;
                        *var_3a8[8] = rdx_9;
                        var_400 = &var_3a8;
                        let var_3f8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                        let var_3f0_1: *mut i128 = &var_328;
                        let var_3e8_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                        var_1f8 = &data_612588;
                        *var_1f8[8] = 3;
                        var_1d8 = 0;
                        var_1e8 = &var_400;
                        var_1e8 = 2;
                        let mut rdx_10: i64;
                        let mut rsi_16: i64;
                        rdx_10 = std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1f8);
                        core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&var_328, 
                            rsi_16, rdx_10);
                    }
                    let mut rax_13: i64;
                    let mut rdx_8: *mut i128;
                    rax_13 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(&var_3c0);
                    rbx_2 = rax_13;
                    r12 = rdx_8;
                    
                    if rdx_8 == 0
                    {
                        r14_1 = arg2;
                        
                        if var_460 == 0
                        {
                            goto 'label_5279e6;
                        }
                        
                        break;
                    }
                }
                
                if *r14_1.byte_offset(0xef) != 0
                {
                    goto 'label_5279e6;
                }
            }
            else if *r14_1.byte_offset(0xee) == 0 || *r14_1.byte_offset(0xef) != 0
            {
                'label_5279e6:
                core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h57b2c8ef12c6840d(
                    &var_390);
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h15dbe50861716c12(&var_428);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&var_440);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&var_458);
                return nullptr;
            }
            
            let mut result_4: *mut i128;
            result_4 =
                uu_ls::dired::print_dired_output::h12a985547a0b3a50(r14_1, &var_390, &var_428);
            result = result_4;
            
            if result_4 == 0
            {
                goto 'label_5279e6;
            }
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_1f8);
    }
    
    'label_5274c9:
    core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h57b2c8ef12c6840d(&var_390);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h15dbe50861716c12(&var_428);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(
        &var_440);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(
        &var_458);
    result
}
