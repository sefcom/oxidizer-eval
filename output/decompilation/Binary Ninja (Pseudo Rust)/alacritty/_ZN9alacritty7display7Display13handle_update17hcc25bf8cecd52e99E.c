
  fn alacritty::display::Display::handle_update::hcc25bf8cecd52e99(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut i64, arg4: *mut i64, arg5: *mut c_void, arg6: *mut c_void) -> i64

{
    let mut var_110: i64;
    memcpy(&var_110, arg1.byte_offset(0x480), 0xe0);
    *arg1.byte_offset(0x480) = -0x8000000000000000;
    *arg1.byte_offset(0x550) = 0;
    *arg1.byte_offset(0x55c) = 0;
    let mut zmm1: f32 = *arg1.byte_offset(0x7b4);
    let mut var_1d8: f32 = (*arg1.byte_offset(0x7b0));
    let mut var_1d4: f32 = zmm1;
    let mut var_1cc: i32;
    let mut zmm0: u128;
    let var_40: i8;
    
    if !(0 + -(var_110))
    {
        core::option::Option$LT$T$GT$::get_or_insert_with::hfb46f52e27157af0(arg1.
            byte_offset(0x834));
        *arg1.byte_offset(0x835) = 1;
        zmm0 = alacritty::display::Display::update_font_size::h86a7d3c64310d9e8(
            arg1.byte_offset(0x5f8), *arg6.byte_offset(0x12c), *arg6.byte_offset(0x12d), &var_110);
        var_1d8 = zmm0;
        var_1d4 = zmm1;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
        {
            let mut var_188: *mut f32 = &var_1d8;
            let var_180_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            let var_178_1: *mut f32 = &var_1d4;
            let var_170_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            let mut var_140: *mut *mut c_void = &data_c82408;
            let var_138_1: i64 = 2;
            let var_120_1: i64 = 0;
            let var_130_1: *mut *mut f32 = &var_188;
            let var_128_1: i64 = 2;
            let rax_4: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82620);
            let mut var_168: *const i8 = "alacritty::displayfailed to swap…";
            let var_160_1: i64 = 0x12;
            let var_158_1: *const i8 = "alacritty::displayfailed to swap…";
            let var_150_1: i64 = 0x12;
            let var_148_1: i64 = rax_4;
            log::__private_api::log::h0b6680b994d742b1(&var_140, 3, &var_168);
        }
        
        *arg1.byte_offset(0x48) = 1;
        
        if (var_40 & 1) != 0
        {
            'label_84cb76:
            let var_3c: i32;
            zmm0 = var_3c;
            var_1cc = zmm0;
            let var_38: i32;
            zmm0 = var_38;
        }
        else
        {
            var_1cc = (*arg1.byte_offset(0x7a8));
            zmm0 = *arg1.byte_offset(0x7ac);
        }
    }
    else
    {
        let var_33: i8;
        
        if var_33 == 1
        {
            core::option::Option$LT$T$GT$::get_or_insert_with::hfb46f52e27157af0(arg1.
                byte_offset(0x834));
            *arg1.byte_offset(0x835) = 1;
        }
        
        if (var_40 & 1) != 0
        {
            goto 'label_84cb76;
        }
        
        var_1cc = (*arg1.byte_offset(0x7a8));
        zmm0 = *arg1.byte_offset(0x7ac);
    }
    let var_1d0: i32 = zmm0;
    zmm1 = *arg1.byte_offset(0x338);
    zmm0 = *arg6.byte_offset(0x1a8);
    zmm0 = zmm0 * zmm1;
    let var_1c4: i32 = floorf(zmm0);
    let mut zmm0_1: u128;
    zmm0_1 = *arg6.byte_offset(0x1aa);
    zmm0_1 = zmm0_1 * zmm1;
    let zmm5: u128 = floorf(zmm0_1);
    let mut var_1c0: i64;
    alacritty::display::SizeInfo::new::hc493ea048056a091(&var_1c0, *arg6.byte_offset(0x1ac), 
        var_1cc, var_1d0, var_1d8, var_1d4, var_1c4, zmm5);
    let rax_9: i64 = core::option::Option$LT$T$GT$::map_or::h79f8debf1d8849b2(
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h75792986f4a34d45(arg4), 
        &var_1c0) + *arg5.byte_offset(0x1100);
    let rcx_1: i64 = var_1c0;
    let mut rdi_8: i64 = 0;
    
    if rcx_1 >= rax_9
    {
        rdi_8 = rcx_1 - rax_9;
    }
    
    let rax_10: i64 = core::cmp::Ord::max::h20b6d33cbe488162(rdi_8, 1);
    var_1c0 = rax_10;
    
    if *arg6.byte_offset(0x1af) != 0
    {
        alacritty::display::window::Window::set_resize_increments::hf3788ac180acdeb0(
            *arg1.byte_offset(0x340), *arg1.byte_offset(0x348));
    }
    
    let var_1b8: i64;
    let mut r15: i64;
    
    if *arg1.byte_offset(0x798) != rax_10
    {
        r15 = var_1b8;
        'label_84cdfc:
        let var_1a8: i32;
        _mm_min_ss(0x477fff00, __maxss_xmmss_memss({0}, var_1a8));
        let var_1a4: i32;
        _mm_min_ss(0x477fff00, __maxss_xmmss_memss({0}, var_1a4));
        _$LT$alacritty_terminal..event_loop..Notifier$u20$as$u20$alacritty_terminal..event..OnResize$GT$::on_resize::hff461c3ae1dcea52(arg3);
        alacritty_terminal::term::Term$LT$T$GT$::resize::h536793f9ff690001(arg2, rax_10, r15);
        alacritty::display::damage::DamageTracker::resize::h3618c97bcb1847cf(arg1, rax_10, r15);
    }
    else
    {
        r15 = var_1b8;
        
        if *arg1.byte_offset(0x7a0) != r15
        {
            goto 'label_84cdfc;
        }
    }
    
    if _$LT$alacritty..display..SizeInfo$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hc9e676d2b49b5c78(&var_1c0, arg1.byte_offset(0x798)) == 0
    {
        core::option::Option$LT$T$GT$::get_or_insert_with::hfb46f52e27157af0(arg1.
            byte_offset(0x834));
        *arg1.byte_offset(0x834) = 1;
        *arg5.byte_offset(0x1160) = 2;
    }
    
    let var_1a0: i64;
    *arg1.byte_offset(0x7b8) = var_1a0;
    let zmm0_4: i128 = var_1c0;
    let var_1b0: i128;
    *arg1.byte_offset(0x7a8) = var_1b0;
    *arg1.byte_offset(0x798) = zmm0_4;
    core::ptr::drop_in_place$LT$alacritty..display..DisplayUpdate$GT$::h6af71f2fb5d8a7e2(&var_110)
}
