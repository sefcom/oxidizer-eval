
  fn uu_ls::display_items::h730c32362a116b61(arg1: *mut c_void, arg2: i64, arg3: u64, arg4: *mut c_void, arg5: *mut i64, arg6: i64 @ rbp) -> u64

{
    let var_8: i64 = arg6;
    let mut rbx: *mut c_void = arg1;
    let r15: i64 = arg2 * 0x130;
    let rax: *mut c_void = arg1.byte_offset(r15);
    let mut var_90: *mut c_void = arg1;
    let var_88: *mut c_void = rax;
    let rax_1: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::ha80bfd4d0e548398(&var_90, arg3);
    let rcx: u32 = *(arg3 + 0x100);
    let mut var_168: *mut c_void;
    let mut var_160: u64;
    let mut var_158: *mut *mut i64;
    let mut var_138: *mut c_void;
    let mut var_108: *mut i64;
    let var_50: i64;
    let mut rax_4: u64;
    let mut rax_6: u64;
    
    if rcx == 1
    {
        uu_ls::calculate_padding_collection::h3b8c962303b7ca71(&var_90, rbx, arg2, arg3, arg4);
        let mut var_e8: i32;
        var_e8 = var_90;
        let r14_1: i8 = *(arg3 + 0xf2) | *(arg3 + 0xf1);
        let mut r13_1: u64 = arg3;
        
        loop
        {
            let mut r12_1: *mut c_void = rbx.byte_offset(0x130);
            
            if rbx == rax
            {
                r12_1 = rbx;
            }
            
            if rbx == rax
            {
                return 0;
            }
            
            if (r14_1 & 1) != 0
            {
                uu_ls::display_additional_leading_info::h6c0a89969d523ee6(&var_168, rbx, var_e8, 
                    var_50, r13_1, arg4);
                let rcx_4: *mut c_void = var_168;
                
                if rcx_4 == -0x8000000000000000
                {
                    return var_160;
                }
                
                var_138 = rcx_4;
                let var_130_1: u64 = var_160;
                let var_128_1: *mut *mut i64 = var_158;
                var_108 = &var_138;
                let var_100_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_168 = &data_4cf290;
                var_160 = 1;
                let var_148_1: i64 = 0;
                var_158 = &var_108;
                let var_150_1: i64 = 1;
                r13_1 = arg3;
                
                if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_168) != 0
                {
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_138);
            }
            
            rax_4 =
                uu_ls::display_item_long::hcd44f8af7a6e6b10(rbx, &var_90, r13_1, arg4, arg5, rax_1);
            rbx = r12_1;
            
            if rax_4 != 0
            {
                return rax_4;
            }
        }
        
        rax_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        goto 'label_59c768;
    }
    
    let mut var_110_1: i8;
    
    if *(arg3 + 0xf3) != 1
    {
        var_110_1 = 0;
    }
    else if arg2 == 0
    {
        arg6 = 1;
        var_110_1 = 1;
    }
    else
    {
        var_110_1 = 1;
        let mut r12_2: i64 = 0;
        arg6 = 1;
        
        do
        {
            arg6 = core::cmp::Ord::max::h3082798d7e57ba36(
                *rbx.byte_offset(r12_2).byte_offset(0x40), arg6);
            r12_2 += 0x130;
        } while r15 != r12_2;
    }
    
    uu_ls::calculate_padding_collection::h3b8c962303b7ca71(&var_90, rbx, arg2, arg3, arg4);
    let mut var_150: i64;
    
    if *arg4.byte_offset(0x85) != 2
    {
        uu_ls::colors::StyleManager::apply_normal::h69c01341e2d260d1(&var_138, 
            arg4.byte_offset(0x68));
        var_108 = &var_138;
        let var_100_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_168 = &data_4cf290;
        var_160 = 1;
        let var_148_2: i64 = 0;
        var_158 = &var_108;
        var_150 = 1;
        
        if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_168) != 0
        {
            rax_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            'label_59c768:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_138);
            return rax_6;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_138);
    }
    
    let mut var_c0: i64 = 0;
    let var_b8_1: i64 = 8;
    let var_b0_1: i64 = 0;
    let r12_3: *mut c_void = var_90;
    let mut var_130: u64;
    let mut var_128: u64;
    
    loop
    {
        let mut r15_3: *mut c_void = rbx.byte_offset(0x130);
        
        if rbx == rax
        {
            r15_3 = rbx;
        }
        
        if rbx == rax
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc04104682af7dc00(&var_108, &var_c0);
            break;
        }
        
        uu_ls::display_additional_leading_info::h6c0a89969d523ee6(&var_168, rbx, r12_3, var_50, 
            arg3, arg4);
        let rdx_7: *mut c_void = var_168;
        
        if rdx_7 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h865e83a487f9068c(&var_c0);
            return var_160;
        }
        
        var_138 = rdx_7;
        var_130 = var_160;
        var_128 = var_158;
        let rax_10: u64 = alloc::boxed::Box$LT$T$GT$::new::h527f0ebd9ed9715c();
        var_168 = nullptr;
        var_160 = rax_10;
        var_158 = &data_686c80;
        let mut var_48: ();
        uu_ls::display_item_name::h23801d128c21da3c(&var_48, rbx, arg3, var_110_1, arg6, &var_138, 
            arg4, &var_168);
        alloc::vec::Vec$LT$T$C$A$GT$::push::he82c9f4c27ec82ac(&var_c0, &var_48);
        rbx = r15_3;
    }
    
    let var_f8: i128;
    
    if rcx == 0
    {
        var_158 = var_f8;
        var_168 = var_108;
        rax_4 = uu_ls::display_grid::h7f8f7fd1cab815f6(&var_168, *(arg3 + 0xec), 1, arg4, rax_1, 
            *(arg3 + 0xe0));
        
        if rax_4 != 0
        {
            return rax_4;
        }
        
        return 0;
    }
    
    if rcx == 3
    {
        var_158 = var_f8;
        var_168 = var_108;
        rax_4 = uu_ls::display_grid::h7f8f7fd1cab815f6(&var_168, *(arg3 + 0xec), 0, arg4, rax_1, 
            *(arg3 + 0xe0));
        
        if rax_4 != 0
        {
            return rax_4;
        }
        
        return 0;
    }
    
    let mut var_e0: i64;
    let var_d8: i64;
    let var_d0: u64;
    
    if rcx != 4
    {
        var_128 = var_f8;
        var_138 = var_108;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&var_e0, &var_138);
        let mut r12_5: i64 = var_e0;
        
        if r12_5 == -0x8000000000000000
        {
            'label_59cafa:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_138);
            return 0;
        }
        
        let mut rax_29: u64;
        
        loop
        {
            if uu_ls::write_os_str::hde566466aa27da95(arg4, var_d8, var_d0) != 0
            {
                rax_29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
            else
            {
                let mut var_a0: i64 = arg3 + 0x102;
                let var_98_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
                var_168 = &data_4cf290;
                let var_160_1: i64 = 1;
                let var_148_3: i64 = 0;
                let var_158_1: *mut i64 = &var_a0;
                let var_150_2: i64 = 1;
                
                if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_168) != 0
                {
                    rax_29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                else
                {
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(
                        r12_5, var_d8);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&var_e0, &var_138);
                    r12_5 = var_e0;
                    
                    if r12_5 == -0x8000000000000000
                    {
                        goto 'label_59cafa;
                    }
                    
                    continue;
                }
            }
            
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(r12_5, 
                var_d8);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_138);
            break;
        }
        
        return rax_29;
    }
    
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&var_138, &var_108);
    let r13_4: *mut c_void = var_138;
    let mut rbx_1: u64;
    let mut r15_4: i32;
    
    if r13_4 != -0x8000000000000000
    {
        if uu_ls::write_os_str::hde566466aa27da95(arg4, var_130, var_128) != 0
        {
            rbx_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(r13_4, 
                var_130);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_108);
            return rbx_1;
        }
        
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_168, var_130, var_128);
        r15_4 = ansi_width::ansi_width::hdfda461fc20bbf8f(var_160, var_158) + 2;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_168);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(r13_4, 
            var_130);
    }
    else
    {
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::hac62f4fc27395a09(-0x8000000000000000, 
            var_130);
        r15_4 = 0;
    }
    
    var_128 = var_f8;
    var_138 = var_108;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&var_e0, &var_138);
    let mut r12_6: i64 = var_e0;
    
    if r12_6 == -0x8000000000000000
    {
        'label_59cd0e:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_138);
        
        if r15_4 != 0
        {
            var_138 = arg3 + 0x102;
            let var_130_2: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
            var_168 = &data_4cf290;
            let var_160_2: i64 = 1;
            let var_148_4: i64 = 0;
            let var_158_2: *const *mut c_void = &var_138;
            let var_150_3: i64 = 1;
            
            if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_168) != 0
            {
                return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
        }
        
        return 0;
    }
    
    let r14_3: i16 = *(arg3 + 0xec);
    
    loop
    {
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_168, var_d8, var_d0);
        let rax_21: i32 = ansi_width::ansi_width::hdfda461fc20bbf8f(var_160, var_158);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_168);
        
        if r14_3 == 0 || r15_4 + rax_21 + 1 <= r14_3
        {
            var_168 = &data_686c70;
            var_160 = 1;
            var_158 = 8;
            var_150 = {0};
            
            if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_168) == 0
            {
                r15_4 = r15_4 + rax_21 + 2;
                'label_59ccc0:
                
                if uu_ls::write_os_str::hde566466aa27da95(arg4, var_d8, var_d0) == 0
                {
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(
                        r12_6, var_d8);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&var_e0, &var_138);
                    r12_6 = var_e0;
                    
                    if r12_6 == -0x8000000000000000
                    {
                        goto 'label_59cd0e;
                    }
                    
                    continue;
                }
            }
        }
        else
        {
            var_168 = &data_686c60;
            var_160 = 1;
            var_158 = 8;
            var_150 = {0};
            
            if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_168) == 0
            {
                r15_4 = rax_21 + 2;
                goto 'label_59ccc0;
            }
        }
        
        rbx_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(r12_6, 
            var_d8);
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_138);
        break;
    }
    
    rbx_1
}
