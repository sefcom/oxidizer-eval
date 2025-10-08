
  fn uu_ls::display_grid::h7f8f7fd1cab815f6(arg1: *mut i128, arg2: i16, arg3: i8, arg4: *mut c_void, arg5: i8, arg6: i64) -> u64

{
    let mut i_1: *mut i64;
    let mut var_118: i128;
    let mut var_c8: *mut *mut c_void;
    
    if arg2 == 0
    {
        let var_108_1: i128 = arg1[1];
        var_118 = *arg1;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&i_1, &var_118);
        let mut i: *mut i64 = i_1;
        
        if i != -0x8000000000000000
        {
            let var_128: i64;
            let mut r15_1: i64 = var_128;
            let var_120: u64;
            let mut rax_6: u64;
            
            if uu_ls::write_os_str::hde566466aa27da95(arg4, r15_1, var_120) != 0
            {
                'label_59d12c:
                rax_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                'label_59d13e:
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(i, 
                    r15_1);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_118);
                return rax_6;
            }
            
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(i, r15_1);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&i_1, &var_118);
            
            for i = i_1; i != -0x8000000000000000; i = i_1
            {
                r15_1 = var_128;
                var_c8 = &data_686698;
                let var_c0_1: i64 = 1;
                let var_b8_1: i64 = 8;
                let var_b0_1: i128 = {0};
                
                if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_c8) != 0
                {
                    rax_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    goto 'label_59d13e;
                }
                
                if uu_ls::write_os_str::hde566466aa27da95(arg4, r15_1, var_120) != 0
                {
                    goto 'label_59d12c;
                }
                
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(i, 
                    r15_1);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6af91d0ef576531d(&i_1, &var_118);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_118);
            var_c8 = &data_6866e0;
            let var_c0_2: i64 = 1;
            let var_b8_2: i64 = 8;
            let var_b0_2: i128 = {0};
            
            if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_c8) != 0
            {
                return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h90736cdc3f1660b8(&var_118);
        }
    }
    else
    {
        let mut var_e0: ();
        
        if arg5 == 0
        {
            core::iter::traits::iterator::Iterator::collect::h25bf8c2b361b0ae3(&var_e0, arg1);
        }
        else
        {
            core::iter::traits::iterator::Iterator::map::h06c8f62d7e05632e(&var_c8, arg1);
            core::iter::traits::iterator::Iterator::collect::h26fa17b7cc3c2454(&var_e0, &var_c8);
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc04104682af7dc00(&var_c8, &var_e0);
        let mut var_48: ();
        core::iter::traits::iterator::Iterator::collect::h0e094a3d1b0e3da7(&var_48, &var_c8);
        let mut rax_1: i64 = -0x7ffffffffffffffe;
        
        if arg6 == 0
        {
            rax_1 = -0x8000000000000000;
        }
        
        let mut var_f8_1: i8 = arg3;
        var_118 = rax_1;
        *var_118[8] = 2;
        let mut var_108: i128;
        var_108 = arg6;
        *var_108[8] = arg2;
        term_grid::Grid$LT$T$GT$::new::h96a222bf8d776eaa(&var_c8, &var_48, &var_118);
        i_1 = &var_c8;
        let var_128_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 =
            _$LT$term_grid..Grid$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h69999ff4efcaea26;
        var_118 = &data_4cf290;
        *var_118[8] = 1;
        var_f8_1 = 0;
        var_108 = &i_1;
        *var_108[8] = 1;
        
        if std::io::Write::write_fmt::h700c3576e0a1d616(arg4, &var_118) != 0
        {
            let rax_3: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::h2db0fbf46949346d(&var_c8);
            return rax_3;
        }
        
        core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::h2db0fbf46949346d(&var_c8);
    }
    0
}
