
  fn uu_ls::list::hbc04f019ee17b84a(arg1: *mut i64, arg2: u64) -> u64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut var_4e8: i64 = 0;
    let var_4e0: *mut c_void = 8;
    let var_4d8: i64 = 0;
    let mut var_4d0: i64 = 0;
    let var_4c8: *mut c_void = 8;
    let var_4c0: i64 = 0;
    let mut var_460: i64 = 0;
    let var_458: i64 = 8;
    let var_450: i128 = {0};
    let var_440: i64 = 8;
    let mut var_438: i128 = {0};
    let rax: i64 = arg1[2];
    let mut r14: i64;
    r14 = 1;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_4a0: i128;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1c03d5309ed5e6af(&var_4a0, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    let o: bool = 0 + -(*(arg2 + 0x18));
    let mut r14_1: *mut c_void = arg2 + 0x18;
    let mut rbx: i64;
    rbx = o;
    
    if o
    {
        r14_1 = nullptr;
    }
    
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::hed3386b680b0f1b4();
    let mut var_518: i128 = data_6865a8;
    let mut var_528: i128 = *data_686598;
    let var_500: i64 = rdx;
    let mut rax_2: *mut c_void;
    let mut rdx_1: i64;
    rax_2 = std::thread::local::LocalKey$LT$T$GT$::with::hed3386b680b0f1b4();
    let mut var_1e8: i128 = data_6865a8;
    let mut var_1f8: i128 = *data_686598;
    let mut var_1d0: i64 = rdx_1;
    let mut var_328: i128;
    uu_ls::TimeStyler::new::hf5080b982bd19d16(&var_328, arg2 + 0xb8);
    let var_4f0: i64 = -0x8000000000000000;
    rbx *= 2;
    let var_480: i64;
    let var_3f8: i64 = var_480;
    let mut var_490: i128;
    let var_408: i128 = var_490;
    let mut var_418: i128 = var_4a0;
    let var_3a8: i8 = 2;
    let var_393: i8 = rbx;
    let var_390: i128 = var_528;
    let var_380: i128 = var_518;
    let var_370: i128 = rax_1;
    let var_360: i128 = var_1f8;
    let var_350: i128 = var_1e8;
    let var_340: i128 = rax_2;
    let var_2f8: i128;
    let var_3c0: i128 = var_2f8;
    let mut var_308: i128;
    let var_3d0: i128 = var_308;
    let mut var_318: i128;
    let var_3e0: i128 = var_318;
    let var_3f0: i128 = var_328;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4f21cc0b69ec76ae(&var_528, arg1);
    let mut i: i64;
    let mut rdx_2: u64;
    i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e0eab2428047e55(&var_528);
    let mut var_548: i32;
    let mut var_478: i128;
    
    if i != 0
    {
        let rsi_2: i8 = *(arg2 + 0xf0);
        rbp = *(arg2 + 0xf3);
        let r15_1: i8 = *(arg2 + 0xfa);
        
        do
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_328, i, rdx_2);
            let var_468_1: i64 = var_318;
            var_478 = var_328;
            var_328 = 0;
            var_4a0 = -0x8000000000000000;
            var_548 = 1;
            uu_ls::PathData::new::h2697718e531487bc(&var_1f8, &var_478, &var_328, &var_4a0, rbp, 
                r15_1, &var_528, 1);
            
            if uu_ls::PathData::get_metadata::h14c40f15e3077b4f(&var_1f8, &var_418) == 0
            {
                core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h76a87c73f87c0bb8(&var_1f8);
            }
            else
            {
                let rax_6: *mut c_void =
                    uu_ls::PathData::file_type::h413d2014e9fb015b(&var_1f8, &var_418);
                
                if rax_6 == 0
                {
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    memcpy(&var_328, &var_1f8, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h65f370254cdcedb4(&var_4e8, &var_328);
                }
                else if (rsi_2 & 1) != 0 || (*rax_6 & 0xf000) != 0x4000
                {
                    memcpy(&var_328, &var_1f8, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h65f370254cdcedb4(&var_4e8, &var_328);
                }
                else
                {
                    memcpy(&var_328, &var_1f8, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h65f370254cdcedb4(&var_4d0, &var_328);
                }
            }
            
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e0eab2428047e55(&var_528);
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..path..Path$GT$$GT$::h1c09c1bb6c47083d(&var_528);
    let mut r13: u64 = arg2;
    uu_ls::sort_entries::hf04183368c5c3444(var_4e0, var_4d8, r13, &var_418);
    uu_ls::sort_entries::hf04183368c5c3444(var_4c8, var_4c0, r13, &var_418);
    let mut result: u64;
    let mut rdx_8: u64;
    
    if var_393 == 2
    {
        'label_59a0d3:
        let mut result_2: u64;
        result_2 =
            uu_ls::display_items::h730c32362a116b61(var_4e0, var_4d8, r13, &var_418, &var_460, rbp);
        result = result_2;
        
        if result_2 != 0
        {
            goto 'label_59a0ee;
        }
        
        var_4a0 = var_4c8;
        *var_4a0[8] = (var_4c0 * 0x130).byte_offset(var_4c8);
        var_490 = 0;
        let mut rax_14: i64;
        let mut rdx_11: *mut c_void;
        rax_14 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h888a3c3afef5132e(&var_4a0);
        
        if rdx_11 != 0
        {
            let mut r14_5: i64 = rax_14;
            let mut r12_1: *mut c_void = rdx_11;
            let mut var_530: i64;
            var_530 = *(r13 + 0xf6);
            let rcx_6: bool = rax >= 2 | *(r13 + 0xee);
            let var_4f0_1: i64 = var_4f0 + 2;
            
            loop
            {
                let mut var_428: *mut c_void;
                std::fs::read_dir::h9952d4fb94ce2eb2(&var_428, r12_1.byte_offset(0x18));
                let var_420: i8;
                let mut var_1d8: *mut c_void;
                let mut rbx_1: *mut c_void;
                
                if var_420 != 2
                {
                    let mut var_4b8: *mut c_void = var_428;
                    
                    if (rcx_6 & 1) != 0
                    {
                        let mut result_6: u64;
                        let mut rdx_19: u64;
                        
                        if r14_5 != 0 || var_4d8 != 0
                        {
                            var_328 = &data_6866e0;
                            *var_328[8] = 1;
                            var_318 = 8;
                            var_318 = {0};
                            
                            if std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328) != 0
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                'label_59a6c2:
                                result = result_6;
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(
                                    &var_4b8);
                                goto 'label_59a0ee;
                            }
                            
                            if uu_ls::show_dir_name::hae576568cd75c94b(r12_1, &var_418, arg2) != 0
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto 'label_59a6c2;
                            }
                            
                            var_328 = &data_6866e0;
                            *var_328[8] = 1;
                            var_318 = 8;
                            var_318 = {0};
                            
                            if std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328) != 0
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto 'label_59a6c2;
                            }
                        }
                        else
                        {
                            if (var_530 & 1) != 0
                            {
                                let mut result_4: u64;
                                result_4 = uu_ls::dired::indent::h7abdb3264981e476(&var_418);
                                result = result_4;
                                
                                if result_4 != 0
                                {
                                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(&var_4b8);
                                    goto 'label_59a0ee;
                                }
                            }
                            
                            if uu_ls::show_dir_name::hae576568cd75c94b(r12_1, &var_418, arg2) != 0
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto 'label_59a6c2;
                            }
                            
                            var_328 = &data_6866e0;
                            *var_328[8] = 1;
                            var_318 = 8;
                            var_318 = {0};
                            
                            if std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328) != 0
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto 'label_59a6c2;
                            }
                            
                            if (var_530 & 1) != 0
                            {
                                let r14_7: i64 = *r12_1.byte_offset(0x10);
                                uu_ls::dired::calculate_subdired::h7fcfc93e038bf6d6(&var_460, 
                                    r14_7);
                                *var_438[8] = *var_438[8] + r14_7 + 3;
                            }
                        }
                    }
                    
                    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h231d77f27934f929(&var_328);
                    var_1d8 = var_308;
                    var_1e8 = var_318;
                    var_1f8 = var_328;
                    rbx_1 = 1;
                    uucore::features::fs::FileInformation::from_path::he047f87eaabe1edc(&var_328, 
                        r12_1.byte_offset(0x18), *r12_1.byte_offset(0x128));
                    r13 = arg2;
                    let r14_6: i64 = *var_328[8];
                    
                    if var_328 == 1
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h0387ae345f59a30b(var_1f8, *var_1f8[8]);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(
                            &var_4b8);
                        goto 'label_59a0ee;
                    }
                    
                    let mut var_b8: ();
                    memcpy(&var_b8, &var_318, 0x88);
                    let mut var_c0: i64 = r14_6;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h8f2f6429b9115ef1(
                        &var_1f8, &var_c0);
                    var_548 = &var_460;
                    let mut result_3: u64;
                    let mut rdx_18: u64;
                    result_3 = uu_ls::enter_directory::h92fbfb4f588426e1(r12_1, var_4b8, var_420, 
                        r13, &var_418, &var_1f8, var_548);
                    result = result_3;
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h0387ae345f59a30b(var_1f8, *var_1f8[8]);
                    
                    if result != 0
                    {
                        goto 'label_59a0ee;
                    }
                }
                else
                {
                    rbx_1 = var_428;
                    let mut var_4a8: *mut c_void = rbx_1;
                    r13 = arg2;
                    
                    if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h6ed1f3d156b2ad73(&var_418) != 0
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6fdf0f570893b293(
                            &var_4a8);
                        goto 'label_59a0ee;
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_328, *r12_1.byte_offset(0x20), *r12_1.byte_offset(0x28));
                    *var_1e8[8] = var_318;
                    var_1f8 = var_328;
                    let rdi_29: u32 = *r12_1.byte_offset(0x129);
                    var_1d8 = rbx_1;
                    var_1d0 = rdi_29;
                    var_1f8 = var_4f0_1;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdi_29 + 1);
                    let mut rax_21: i64;
                    let mut rdx_14: i64;
                    rax_21 = uucore::util_name::h074417a1e6395129();
                    var_478 = rax_21;
                    *var_478[8] = rdx_14;
                    var_528 = &var_478;
                    *var_528[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                    var_518 = &var_1f8;
                    *var_518[8] = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
                    var_328 = &data_686b10;
                    *var_328[8] = 3;
                    var_308 = 0;
                    var_318 = &var_528;
                    *var_318[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_328);
                    core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_1f8);
                }
                let mut rax_16: i64;
                let mut rdx_12: *mut c_void;
                rax_16 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h888a3c3afef5132e(&var_4a0);
                r14_5 = rax_16;
                r12_1 = rdx_12;
                
                if rdx_12 == 0
                {
                    if (var_530 & 1) == 0
                    {
                        goto 'label_59a638;
                    }
                    
                    break;
                }
            }
            
            if *(r13 + 0xf7) == 0
            {
                goto 'label_59a61c;
            }
        }
        else if (*(r13 + 0xf6) & 1) != 0 && *(r13 + 0xf7) == 0
        {
            'label_59a61c:
            let mut result_5: u64;
            result_5 = uu_ls::dired::print_dired_output::h024401ebfd75ea3a(r13, &var_460, &var_418);
            result = result_5;
            
            if result_5 != 0
            {
                goto 'label_59a0ee;
            }
        }
        
        'label_59a638:
        core::ptr::drop_in_place$LT$uu_ls..ListState$GT$::h4c2330fa816309ec(&var_418);
        core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h9ff404cb160e50f2(&var_460);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::hb7b3de00095adc1c(
            &var_4d0);
        result = 0;
    }
    else
    {
        if uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(r14_1) == 0
        {
            goto 'label_59a0d3;
        }
        
        let var_393_1: i8 = 1;
        let var_3a8_1: i8 = 2;
        var_528 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
        *var_528[8] = 4;
        var_1f8 = &var_528;
        *var_1f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
        var_328 = &data_4cf290;
        *var_328[8] = 1;
        var_308 = 0;
        var_318 = &var_1f8;
        *var_318[8] = 1;
        
        if std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328) == 0
        {
            goto 'label_59a0d3;
        }
        
        let mut result_1: u64;
        result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        result = result_1;
        'label_59a0ee:
        core::ptr::drop_in_place$LT$uu_ls..ListState$GT$::h4c2330fa816309ec(&var_418);
        core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h9ff404cb160e50f2(&var_460);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::hb7b3de00095adc1c(
            &var_4d0);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::hb7b3de00095adc1c(
        &var_4e8);
    result
}
