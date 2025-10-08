
  fn uu_ls::enter_directory::h92fbfb4f588426e1(arg1: *mut c_void, arg2: i64, arg3: i32, arg4: u64, arg5: *mut i64, arg6: *mut *mut i8, arg7: *mut i64) -> u64

{
    let var_330: i64 = arg2;
    let var_328: i8 = arg3;
    let rbp: i8 = *(arg4 + 0xf8);
    let mut var_568: i32;
    let mut var_518: i128;
    let mut var_508: *mut *mut i64;
    let mut var_4e8: i128;
    let mut var_4d8: i64;
    let mut var_4b0: *mut i64;
    let mut var_488: i64;
    let mut var_480: *mut c_void;
    let mut var_478: i64;
    let mut var_460: i128;
    let mut var_450: *mut *mut i64;
    let mut var_320: i128;
    let mut r13: i8;
    let mut r14: u64;
    
    if rbp == 0
    {
        let rax_1: *mut c_void = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x260, 0);
        
        if rax_1 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_460, *arg1.byte_offset(0x20), *arg1.byte_offset(0x28));
        let var_508_1: *mut *mut i64 = var_450;
        var_518 = var_460;
        var_460 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_320, ".//home/34r7hm4n/.rustup/toolcha…", 1);
        let var_310: i64;
        var_4d8 = var_310;
        var_4e8 = var_320;
        let rax_4: i8 = *(arg4 + 0xf3);
        r14 = *(arg4 + 0xfa);
        r13 = rax_4;
        let r15_1: i8 = r14;
        uu_ls::PathData::new::h2697718e531487bc(&var_320, &var_518, &var_460, &var_4e8, rax_4, 
            r15_1, r14, 0);
        std::path::Path::join::hd69bb46a75189c9a(&var_4b0, *arg1.byte_offset(0x20), 
            *arg1.byte_offset(0x28));
        var_4e8 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_460, "...//home/34r7hm4n/.rustup/toolc…", 2);
        var_508 = var_450;
        var_518 = var_460;
        var_568 = 0;
        uu_ls::PathData::new::h2697718e531487bc(&var_460, &var_4b0, &var_4e8, &var_518, rax_4, 
            r15_1, r14, 0);
        memcpy(rax_1, &var_320, 0x130);
        memcpy(rax_1.byte_offset(0x130), &var_460, 0x130);
        var_488 = 2;
        var_480 = rax_1;
        var_478 = 2;
    }
    else
    {
        var_488 = 0;
        var_480 = 8;
        var_478 = 0;
        r13 = *(arg4 + 0xf3);
        r14 = *(arg4 + 0xfa);
    }
    
    let mut var_528: i64 = arg2;
    let var_520: i8 = arg3;
    let mut var_530_2: i64 = -0x7fffffffffffffff;
    let mut result: u64;
    
    loop
    {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_4e8, &var_528);
        let mut var_540: i64;
        let mut var_4d0: i128;
        let mut var_448: i64;
        
        if var_4e8 != 1
        {
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(&var_528);
            uu_ls::sort_entries::hf04183368c5c3444(var_480, var_478, arg4, arg5);
            let mut rdx_9: *mut *mut i64;
            
            if *(arg4 + 0x100) == 1 || *(arg4 + 0xf2) == 1
            {
                uu_ls::return_total::hb9fec58e6a76a8a4(&var_460, var_480, var_478, arg4, arg5);
                let rax_14: i64 = var_460;
                result = *var_460[8];
                rdx_9 = var_450;
                
                if rax_14 != -0x8000000000000000
                {
                    var_320 = rax_14;
                    *var_320[8] = result;
                    let var_310_1: *mut *mut i64 = rdx_9;
                    var_4e8 = result;
                    *var_4e8[8] = rdx_9;
                    var_518 = &var_4e8;
                    *var_518[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                    var_460 = &data_4cf290;
                    *var_460[8] = 1;
                    let var_440_2: i64 = 0;
                    var_450 = &var_518;
                    var_448 = 1;
                    
                    if std::io::Write::write_fmt::h700c3576e0a1d616(arg5, &var_460) == 0
                    {
                        if *(arg4 + 0xf6) != 0
                        {
                            let mut rax_18: *mut c_void = arg7[6];
                            
                            if rax_18 == 0
                            {
                                let rax_19: i64 = arg7[2];
                                
                                if rax_19 == 0
                                {
                                    rax_18 = nullptr;
                                }
                                else
                                {
                                    rax_18 = (*(arg7[1] + (rax_19 << 4) - 8)).byte_offset(1);
                                }
                            }
                            
                            arg7[6] = rax_18.byte_offset(rdx_9).byte_offset(2);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(
                            &var_320);
                        goto 'label_59b52c;
                    }
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(
                        &var_320);
                }
            }
            else
            {
                'label_59b52c:
                let mut result_1: u64;
                result_1 = uu_ls::display_items::h730c32362a116b61(var_480, var_478, arg4, arg5, 
                    arg7, arg7);
                result = result_1;
                
                if result_1 == 0
                {
                    if *(arg4 + 0xee) == 1
                    {
                        let mut rax_25: i32;
                        rax_25 = rbp == 0;
                        var_518 = var_480;
                        *var_518[8] = (var_478 * 0x130).byte_offset(var_480);
                        let var_508_2: u64 = rax_25 * 2;
                        let i_2: *mut c_void = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h04cfa97d78282e6c(&var_518);
                        
                        if i_2 != 0
                        {
                            let mut i_1: *mut c_void = i_2;
                            var_530_2 = *(arg4 + 0xf6);
                            let mut i: *mut c_void;
                            
                            do
                            {
                                std::fs::read_dir::h9952d4fb94ce2eb2(&var_528, 
                                    i_1.byte_offset(0x18));
                                
                                if var_520 != 2
                                {
                                    var_540 = var_528;
                                    uucore::features::fs::FileInformation::from_path::he047f87eaabe1edc(&var_460, i_1.byte_offset(0x18), *i_1.byte_offset(0x128));
                                    let rbx_4: i64 = *var_460[8];
                                    let mut result_4: u64;
                                    let mut rdx_17: *mut i128;
                                    
                                    if var_460 == 1
                                    {
                                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        'label_59bb01:
                                        result = result_4;
                                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(&var_540);
                                        goto 'label_59b544;
                                    }
                                    
                                    let mut var_1e8: ();
                                    memcpy(&var_1e8, &var_450, 0x88);
                                    let mut var_1f0: i64 = rbx_4;
                                    
                                    if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h8f2f6429b9115ef1(arg6, &var_1f0) == 0
                                    {
                                        var_460 = &data_6866e0;
                                        *var_460[8] = 1;
                                        var_450 = 8;
                                        var_448 = {0};
                                        
                                        if std::io::Write::write_fmt::h700c3576e0a1d616(arg5, 
                                            &var_460) != 0
                                        {
                                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            goto 'label_59bb01;
                                        }
                                        
                                        if (var_530_2 & 1) != 0
                                        {
                                            arg7[6] = 2;
                                            let mut result_2: u64;
                                            result_2 =
                                                uu_ls::dired::indent::h7abdb3264981e476(arg5);
                                            result = result_2;
                                            
                                            if result_2 != 0
                                            {
                                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(&var_540);
                                                goto 'label_59b544;
                                            }
                                            
                                            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_460, *i_1.byte_offset(0x20), 
                                                *i_1.byte_offset(0x28));
                                            let rbx_5: *mut *mut i64 = var_450;
                                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_460);
                                            uu_ls::dired::calculate_subdired::h7fcfc93e038bf6d6(
                                                arg7, rbx_5);
                                            arg7[6] = (arg7[6] + rbx_5).byte_offset(3);
                                        }
                                        
                                        if uu_ls::show_dir_name::hae576568cd75c94b(i_1, arg5, arg4)
                                            != 0
                                        {
                                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            goto 'label_59bb01;
                                        }
                                        
                                        var_460 = &data_6866e0;
                                        *var_460[8] = 1;
                                        var_450 = 8;
                                        var_448 = {0};
                                        
                                        if std::io::Write::write_fmt::h700c3576e0a1d616(arg5, 
                                            &var_460) != 0
                                        {
                                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            goto 'label_59bb01;
                                        }
                                        
                                        var_568 = arg7;
                                        let mut result_3: u64;
                                        result_3 = uu_ls::enter_directory::h92fbfb4f588426e1(i_1, 
                                            var_540, var_520, arg4, arg5, arg6, var_568);
                                        result = result_3;
                                        
                                        if result_3 != 0
                                        {
                                            goto 'label_59b544;
                                        }
                                        
                                        uucore::features::fs::FileInformation::from_path::he047f87eaabe1edc(&var_460, i_1.byte_offset(0x18), *i_1.byte_offset(0x128));
                                        let rbx_6: i64 = *var_460[8];
                                        
                                        if var_460 == 1
                                        {
                                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            goto 'label_59b544;
                                        }
                                        
                                        memcpy(&*var_320[8], &var_450, 0x88);
                                        var_320 = rbx_6;
                                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::hdeeaa4790b49ecbe(arg6, &var_320);
                                    }
                                    else
                                    {
                                        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h6ed1f3d156b2ad73(arg5) != 0
                                        {
                                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            goto 'label_59bb01;
                                        }
                                        
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_460, *i_1.byte_offset(0x20), *i_1.byte_offset(0x28));
                                        let var_308_2: *mut *mut i64 = var_450;
                                        var_320 = var_460;
                                        var_320 = -0x7ffffffffffffffb;
                                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(2);
                                        let mut rax_35: *mut i64;
                                        let mut rdx_16: i64;
                                        rax_35 = uucore::util_name::h074417a1e6395129();
                                        var_4b0 = rax_35;
                                        let var_4a8_3: i64 = rdx_16;
                                        var_4e8 = &var_4b0;
                                        *var_4e8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                                        let var_4d8_2: *mut i128 = &var_320;
                                        var_4d0 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
                                        var_460 = &data_686b10;
                                        *var_460[8] = 3;
                                        let var_440_4: i64 = 0;
                                        var_450 = &var_4e8;
                                        var_448 = 2;
                                        std::io::stdio::_eprint::h57899770eacec2ad(&var_460);
                                        core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_320);
                                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(&var_540);
                                    }
                                }
                                else
                                {
                                    let rbx_3: i64 = var_528;
                                    var_540 = rbx_3;
                                    
                                    if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h6ed1f3d156b2ad73(arg5) != 0
                                    {
                                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6fdf0f570893b293(&var_540);
                                        goto 'label_59b544;
                                    }
                                    
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_460, *i_1.byte_offset(0x20), *i_1.byte_offset(0x28));
                                    let var_308_1: *mut *mut i64 = var_450;
                                    var_320 = var_460;
                                    let rdi_33: u32 = *i_1.byte_offset(0x129);
                                    let var_300_1: i64 = rbx_3;
                                    let var_2f8_1: i8 = rdi_33;
                                    var_320 = -0x7ffffffffffffffe;
                                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdi_33
                                        + 1);
                                    let mut rax_31: *mut i64;
                                    let mut rdx_13: i64;
                                    rax_31 = uucore::util_name::h074417a1e6395129();
                                    var_4b0 = rax_31;
                                    let var_4a8_2: i64 = rdx_13;
                                    var_4e8 = &var_4b0;
                                    *var_4e8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                                    let var_4d8_1: *mut i128 = &var_320;
                                    var_4d0 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
                                    var_460 = &data_686b10;
                                    *var_460[8] = 3;
                                    let var_440_3: i64 = 0;
                                    var_450 = &var_4e8;
                                    var_448 = 2;
                                    std::io::stdio::_eprint::h57899770eacec2ad(&var_460);
                                    core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_320);
                                }
                                
                                i = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h04cfa97d78282e6c(&var_518);
                                i_1 = i;
                            } while i != 0;
                        }
                    }
                    
                    result = 0;
                }
            }
            break;
        }
        
        let rax_8: i64 = *var_4e8[8];
        
        if rax_8 == 0
        {
            let mut var_468: i64 = var_4d8;
            
            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h6ed1f3d156b2ad73(arg5) != 0
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6fdf0f570893b293(&var_468);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(&var_528);
                break;
            }
            
            *var_320[8] = var_4d8;
            var_320 = var_530_2;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            let mut rax_13: i64;
            let mut rdx_6: i8;
            rax_13 = uucore::util_name::h074417a1e6395129();
            var_540 = rax_13;
            let var_538: i8 = rdx_6;
            var_4b0 = &var_540;
            let var_4a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
            let var_4a0_1: *mut i128 = &var_320;
            let var_498_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 =
                _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
            var_460 = &data_686b10;
            *var_460[8] = 3;
            let var_440_1: i64 = 0;
            var_450 = &var_4b0;
            var_448 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_460);
            core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_320);
        }
        else
        {
            var_508 = var_4d0;
            var_518 = rax_8;
            *var_518[8] = var_4d8;
            
            if uu_ls::should_display::h53cf61567fcfaec5(&var_518, arg4) == 0
            {
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h09b446a57ee83981(&var_518);
            }
            else
            {
                std::fs::DirEntry::path::hc95af67dccb42f03(&var_4b0, &var_518);
                let var_4c0: i64;
                let var_438_1: i64 = var_4c0;
                var_448 = var_508;
                var_460 = var_518;
                var_460 = 1;
                var_320 = -0x8000000000000000;
                var_568 = 0;
                let mut var_160: ();
                uu_ls::PathData::new::h2697718e531487bc(&var_160, &var_4b0, &var_460, &var_320, 
                    r13, r14, &var_518, 0);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h65f370254cdcedb4(&var_488, &var_160);
            }
        }
    }
    
    'label_59b544:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::hb7b3de00095adc1c(
        &var_488);
    result
}
