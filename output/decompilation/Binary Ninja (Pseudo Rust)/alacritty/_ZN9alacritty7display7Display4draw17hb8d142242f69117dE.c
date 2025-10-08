
  fn alacritty::display::Display::draw::hb8d142242f69117d(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void, arg4: *mut i64, arg5: *mut c_void, arg6: *mut i128) -> i64

{
    let mut var_268: ();
    alacritty::display::content::RenderableContent::new::hf4e6e038e845e91d(&var_268, arg5, arg1, 
        &arg2[8], arg6);
    let mut var_4f8: i64 = 0;
    let var_4f0: i64 = 8;
    let var_4e8: i64 = 0;
    
    loop
    {
        let mut var_298: ();
        _$LT$alacritty..display..content..RenderableContent$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h272049d726f01fbc(&var_298, &var_268);
        let var_27c: i32;
        
        if var_27c == 0x110000
        {
            break;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7ca7ec9724f8fc37(&var_4f8, &var_298);
    }
    
    let var_1b0: i64;
    let var_318: i64 = var_1b0;
    let var_1c0: i128;
    let var_328: i128 = var_1c0;
    let var_1d0: i128;
    let mut var_338: i128 = var_1d0;
    let mut r12: *mut i64;
    r12 = 1;
    let mut r14: *mut c_void;
    r14 = 1;
    let var_1f0: i64;
    let var_178: *mut c_void;
    let rax_1: u32 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
        var_1f0, var_178, 0x100);
    r14 = 1;
    let mut rbp_1: u32 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
        var_1f0, var_178, 0x101);
    let var_220: i64;
    let mut var_640: i64 = var_220;
    let mut var_2b8: ();
    alacritty::display::content::RenderableContent::cursor::hab97100ef46cc41e(&var_2b8, &var_268);
    let rax_4: i64 = *arg2.byte_offset(0x58);
    let rax_5: i64 = *arg2.byte_offset(0x60);
    let rcx_1: i32 = *arg2.byte_offset(0x68);
    let var_348: i64 = arg1[0xcb];
    let var_358: i128 = *arg1.byte_offset(0x648);
    let mut var_368: i128 = *arg1.byte_offset(0x638);
    let var_5a8: i64 = arg1[0xf7];
    let zmm1: i128 = *arg1.byte_offset(0x7a8);
    let mut var_5c8: i128 = *arg1.byte_offset(0x798);
    let rdx_2: i32 = *arg2.byte_offset(0x6e4);
    let mut var_644: i32;
    let mut var_588: u64;
    
    if (rdx_2 & 0x10000) != 0
    {
        var_588 = *arg2.byte_offset(0x298);
        var_644 = *arg2.byte_offset(0x2a0);
    }
    else
    {
        var_644 = rcx_1;
    }
    
    let mut var_630: *mut i128;
    alacritty_terminal::term::Term$LT$T$GT$::damage::h1bcd4e535a5188a6(&var_630, &arg2[8]);
    let var_60c: u32 = rbp_1;
    let var_620: i64;
    let mut var_4c8: i128;
    let mut var_4b8: i64;
    let mut var_488: i32;
    let mut var_480: u64;
    
    if var_630 == 0
    {
        arg1[9] = 1;
    }
    else
    {
        var_4b8 = var_620;
        var_4c8 = var_630;
        
        loop
        {
            _$LT$alacritty_terminal..term..TermDamageIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6846b46b990216ac(&var_488, &var_4c8);
            
            if var_488 != 1
            {
                break;
            }
            
            alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(arg1[4], 
                arg1[5], &var_480);
        }
        
        rbp_1 = var_60c;
    }
    
    alacritty_terminal::term::TermDamageState::reset::h273368bb6739a3e2(&arg2[0x1f0], 
        *arg2.byte_offset(0xc0));
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(arg2);
    alacritty::display::Display::validate_hint_highlights::hf25de0d633e6798e(arg1, var_640);
    let mut zmm0_2: f64;
    let mut zmm1_1: [u64; 0x2];
    zmm0_2 = alacritty::display::bell::VisualBell::intensity::hdd0da5899e174934(&arg1[0xb4]);
    let temp0: [u64; 0x2] = _mm_xor_pd(zmm1_1, zmm1_1);
    zmm0_2 - temp0[0];
    let mut rax_12: i64;
    
    if !(zmm0_2 != temp0[0]) && !FCMP_UO(zmm0_2, temp0[0]) && arg1[0x8f] == 0
    {
        rax_12 = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6);
    }
    
    if zmm0_2 != temp0[0] || FCMP_UO(zmm0_2, temp0[0]) || arg1[0x8f] != 0 || rax_12 != 0
    {
        arg1[9] = 1;
        arg1[0x10] = 1;
    }
    
    let mut var_568: i64;
    
    if (rdx_2 & 0x10000) != 0
    {
        alacritty::display::Display::draw::_$u7b$$u7b$closure$u7d$$u7d$::ha0cf1e6508f2f460(
            &var_568, var_640, var_588, var_644);
    }
    else
    {
        var_568 = 0;
    }
    
    let var_558: i64;
    let mut var_478: i64 = var_558;
    var_488 = var_568;
    let var_560: u64;
    var_480 = var_560;
    alacritty::display::damage::DamageTracker::damage_vi_cursor::hbd6389ba644f4a2f(arg1, &var_488);
    alacritty::display::damage::DamageTracker::damage_selection::hfcbf35fbfe7a325f(arg1, &var_338, 
        var_640);
    alacritty::display::Display::make_current::h1def9f222502e6f9(arg1);
    let mut zmm0_3: i512;
    zmm0_3 = *arg5.byte_offset(0x1a4);
    alacritty::renderer::Renderer::clear::h28d9311462ed0122(rbp_1, zmm0_3);
    ahash::random_state::RandomState::new::hccae9c0b71bdd92e(&var_488);
    let zmm0_4: i128 = var_488;
    let zmm2: i128 = data_c75368;
    var_4c8 = *data_c75358;
    var_4b8 = zmm2;
    let var_4a8: i128 = zmm0_4;
    let var_498: i128 = var_478;
    let mut var_651: bool = ((arg1[0xf2] ^ 2) | (arg1[0xeb] ^ 2)) != 0;
    alacritty::display::meter::Meter::sampler::hd4064409b7c56fab(&var_488, &arg1[0xfa]);
    let mut var_308: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h617b6b83ebbae00d(&var_308, &var_4f8);
    let var_2e8: *mut bool = &var_651;
    let var_2e0: *mut i64 = &var_640;
    let var_2d8: *mut c_void = &arg1[0xe5];
    let var_2d0: *mut c_void = &arg1[0xec];
    let var_2c8: *mut i64 = arg1;
    let var_2c0: *mut i128 = &var_4c8;
    alacritty::renderer::Renderer::draw_cells::ha80538d22427933c(&arg1[0x1c], &var_5c8, 
        &arg1[0xbf], &var_308);
    core::ptr::drop_in_place$LT$alacritty..display..meter..Sampler$GT$::hd0ceb5f35ded1224(&var_488);
    let mut rbp_3: u32 = rax_1;
    let mut var_5e8: *mut i128 = &var_368;
    var_630 = &var_5c8;
    let mut var_3a8: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h1d1465bab419c173(&var_3a8, &var_4c8);
    var_488 = 0;
    let var_418: i64 = 0;
    let var_380: *mut *mut i128 = &var_5e8;
    let var_378: *mut *mut i128 = &var_630;
    let mut var_5a0: ();
    let r8_1: i64 =
        core::iter::traits::iterator::Iterator::collect::h50b6e4b5219aeb10(&var_5a0, &var_488);
    let mut r13_2: *mut c_void = arg5;
    let var_628: i64;
    
    if (rdx_2 & 0x10000) != 0
    {
        let r15_1: i64 = !var_644 + var_5c8;
        var_480 = var_588;
        var_478 = var_644;
        var_488 = 1;
        core::option::Option$LT$T$GT$::filter::h36c7180d33592252(&var_630, &var_488, var_640);
        alacritty::display::Display::draw_line_indicator::h462b756ef8d8474d(arg1, r13_2, rax_4, 
            var_630, var_628, r15_1);
    }
    else if alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6) != 0
    {
        alacritty::display::Display::draw_line_indicator::h462b756ef8d8474d(arg1, r13_2, rax_4, 0, 
            r8_1, var_640);
    }
    
    let zmm0_5: [u32; 0x4] = *r13_2.byte_offset(0x3d0);
    let mut var_608: i64;
    var_608 = zmm0_5[0];
    let mut var_148: ();
    _$LT$alacritty..display..content..RenderableCursor$u20$as$u20$alacritty..display..cursor..IntoRects$GT$::rects::h24fb12653be3a4e9(&var_148, &var_2b8, &var_5c8, zmm0_5);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::heb81fe2e84edcb75(&var_5a0, &var_148);
    let mut zmm0_6: i128;
    let mut zmm1_3: [u64; 0x2];
    zmm0_6 = alacritty::display::bell::VisualBell::intensity::hdd0da5899e174934(&arg1[0xb4]);
    let temp0_1: [u64; 0x2] = _mm_xor_pd(zmm1_3, zmm1_3);
    zmm0_6 - temp0_1[0];
    
    if zmm0_6 != temp0_1[0] || !FCMP_O(zmm0_6, temp0_1[0])
    {
        let var_4ca_1: i8 = *r13_2.byte_offset(0x35d);
        zmm0_6 = zmm0_6;
        let var_4cc_1: i16 = *r13_2.byte_offset(0x35b);
        let mut var_4e0: [u64; 0x2] = _mm_xor_pd(temp0_1, temp0_1)[0] | zmm1 << 0x40;
        let var_4d0_1: i32 = zmm0_6;
        let var_4c9_1: i8 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(&var_5a0, &var_4e0);
    }
    
    let mut var_618: i32;
    var_618 = &arg1[0xf3];
    let rax_27: *mut c_void = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6);
    let mut var_5e0: i64;
    let mut var_5d8: i64;
    
    if rax_27 != 0
    {
        let rdx_11: u64 = *arg6.byte_offset(0x116c);
        let mut rcx_8: *mut i8 = "Backward Search: ";
        
        if rdx_11 != 0
        {
            rcx_8 = "Search: end-hal";
        }
        
        alacritty::display::Display::format_search::hb94809e56cc52697(&var_488, 
            *rax_27.byte_offset(8), *rax_27.byte_offset(0x10), rcx_8, (rdx_11 ^ 1) * 9 + 8, 
            *var_5c8[8]);
        let r14_13: u64 = var_480;
        let zmm0_7: [i32; 0x4] =
            alacritty::display::Display::draw_search::h54da426c82502e2d(arg1, r13_2, r14_13);
        let r12_9: i64 = var_5c8;
        let r14_15: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(r14_13, var_478 + r14_13, zmm0_7) - 1;
        
        if arg1[0x5a] == 2
        {
            let mut rax_29: *mut c_void = r13_2.byte_offset(0x273);
            
            if (*r13_2.byte_offset(0x1f8) & 1) != 0
            {
                rax_29 = r13_2.byte_offset(0x1f9);
            }
            
            let rcx_11: i8 = *rax_29.byte_offset(2);
            *var_630[2] = rcx_11;
            let rax_30: i16 = *rax_29;
            var_630 = rax_30;
            let var_521_1: i16 = rax_30;
            let var_51f_1: i8 = rcx_11;
            let var_51e_1: i8 = 1;
            let var_524_1: i16 = rax_30;
            let var_522_1: i8 = rcx_11;
            let var_528_1: i32 = 1;
            let mut var_538: i64 = r12_9;
            let var_530_1: i64 = r14_15;
            let mut var_e0: ();
            _$LT$alacritty..display..content..RenderableCursor$u20$as$u20$alacritty..display..cursor..IntoRects$GT$::rects::h24fb12653be3a4e9(&var_e0, &var_538, &var_5c8, var_608);
            alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::heb81fe2e84edcb75(&var_5a0, &var_e0);
        }
        
        var_5e0 = r12_9;
        var_5d8 = r14_15;
        var_5e8 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_488);
        
        if arg1[0x63] != 0
        {
            goto 'label_84da4f;
        }
    }
    else if var_568 != 1
    {
        let rdx_15: i64 = *var_618;
        let mut rax_37: i64;
        
        if rcx_1 + var_640 < 0
        {
            rax_37 = 0;
        }
        else
        {
            var_480 = rcx_1 + var_640;
            var_478 = rax_5;
            rax_37 = 1;
        }
        
        var_488 = rax_37;
        core::option::Option$LT$T$GT$::filter::h004bc68bf47f05d7(&var_5e8, &var_488, rdx_15);
        
        if arg1[0x63] != 0
        {
            goto 'label_84da4f;
        }
    }
    else
    {
        var_5d8 = var_558;
        var_5e8 = var_568;
        
        if arg1[0x63] != 0
        {
            'label_84da4f:
            
            if (var_5e8 & 1) != 0
            {
                let mut r8_6: u32;
                
                if alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6) == 0
                {
                    r8_6 = var_60c;
                }
                else
                {
                    let mut rax_39: *mut c_void = r13_2.byte_offset(0x273);
                    
                    if (*r13_2.byte_offset(0x1f8) & 1) != 0
                    {
                        rax_39 = r13_2.byte_offset(0x1f9);
                    }
                    
                    rbp_3 = *rax_39.byte_offset(2) << 0x10 | *rax_39;
                    let mut rax_40: *mut c_void = r13_2.byte_offset(0x270);
                    
                    if (*r13_2.byte_offset(0x1fc) & 1) != 0
                    {
                        rax_40 = r13_2.byte_offset(0x1fd);
                    }
                    
                    r8_6 = *rax_40.byte_offset(2) << 0x10 | *rax_40;
                }
                
                alacritty::display::Display::draw_ime_preview::h6226f78431452811(arg1, var_5e0, 
                    var_5d8, rbp_3, r8_6, &var_5a0, var_608);
            }
        }
    }
    let rax_41: *mut c_void =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h75792986f4a34d45(arg4);
    
    if rax_41 == 0
    {
        alacritty::renderer::Renderer::draw_rects::h606367b22cf56106(&arg1[0x1c], &var_5c8, 
            &var_368, &var_5a0);
    }
    else
    {
        let rax_42: i64 = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6);
        alacritty::message_bar::Message::text::hdf58328cea9791eb(&var_630, *rax_41.byte_offset(8), 
            *rax_41.byte_offset(0x10), &var_5c8);
        let rbp_7: i64 = var_5c8 + 1;
        let mut zmm0_9: f32 = fmaf();
        let mut rax_43: *mut c_void = r13_2.byte_offset(0x23b);
        
        if *rax_41.byte_offset(0x30) != 0
        {
            rax_43 = r13_2.byte_offset(0x241);
        }
        
        let zmm1_4: f32 = zmm1;
        let mut r12_10: i32 = zmm1_4;
        
        if zmm1_4 > 2.14748352e+09f
        {
            r12_10 = 0x7fffffff;
        }
        
        if FCMP_UO(zmm1_4, zmm1_4)
        {
            r12_10 = 0;
        }
        
        let zmm3_1: f32 = zmm0_9;
        zmm0_9 = *zmm1[4];
        let mut var_638: *mut i128;
        var_638 = zmm0_9;
        zmm0_9 = zmm0_9 - zmm3_1;
        let mut r13_3: i32 = zmm0_9;
        
        if zmm0_9 > 2.14748352e+09f
        {
            r13_3 = 0x7fffffff;
        }
        
        if FCMP_UO(zmm0_9, zmm0_9)
        {
            r13_3 = 0;
        }
        
        let r14_18: u32 = *rax_43;
        let r15_6: u32 = *rax_43.byte_offset(2);
        let mut var_580: i32 = 0;
        let mut var_5f8: *mut i64;
        var_5f8 = zmm3_1;
        let var_57c_1: f32 = zmm3_1;
        let var_578_1: f32 = r12_10;
        let var_574_1: f32 = r13_3;
        let var_56a_1: i8 = r15_6;
        let var_56c_1: i16 = r14_18;
        let var_570_1: i32 = 0x3f800000;
        let var_569_1: i8 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(&var_5a0, &var_580);
        let mut zmm1_5: f32 = var_5f8;
        let mut rax_44: i32 = zmm1_5;
        
        if zmm1_5 > 2.14748352e+09f
        {
            rax_44 = 0x7fffffff;
        }
        
        if FCMP_UO(zmm1_5, zmm1_5)
        {
            rax_44 = 0;
        }
        
        zmm1_5 = var_638;
        let mut rcx_20: i32 = zmm1_5;
        
        if zmm1_5 > 2.14748352e+09f
        {
            rcx_20 = 0x7fffffff;
        }
        
        if FCMP_UO(zmm1_5, zmm1_5)
        {
            rcx_20 = 0;
        }
        
        var_488 = 0;
        let var_484_1: i32 = rcx_20 - (rax_44 + r13_3);
        var_480 = r12_10;
        *var_480[4] = r13_3;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h201c90a0c48ff49e(&arg1[6], &var_488);
        alacritty::renderer::Renderer::draw_rects::h606367b22cf56106(&arg1[0x1c], &var_5c8, 
            &var_368, &var_5a0);
        let r15_10: u32 = *arg5.byte_offset(0x275) << 0x10 | *arg5.byte_offset(0x273);
        var_488 = var_628;
        var_480 = var_628 + var_620 * 0x18;
        var_478 = 0;
        
        loop
        {
            let mut rax_48: i64;
            let mut rdx_21: *mut c_void;
            rax_48 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0877e22635b0eae3(&var_488);
            
            if rdx_21 == 0
            {
                break;
            }
            
            let r9_3: i64 = *rdx_21.byte_offset(8);
            alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(&arg1[0x1c], 
                rax_48 + rbp_7, 0, r15_10, r14_18 | r15_6 << 0x10, r9_3, 
                *rdx_21.byte_offset(0x10) + r9_3, &var_5c8, &arg1[0xbf]);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4b50bc99ac6a782b(&var_630);
        r13_2 = arg5;
    }
    
    alacritty::display::Display::draw_render_timer::h661820346e8e91a1(arg1, r13_2);
    
    if var_651 != 0
    {
        alacritty::display::Display::draw_hyperlink_preview::h06442e3008e163c3(arg1, r13_2, 1, 
            var_644, var_640);
    }
    
    alacritty::display::window::Window::pre_present_notify::h8d5a1a465fc31b57(arg1[0x68], 
        arg1[0x69]);
    
    if arg1[0x18] != 0
    {
        let mut zmm2_1: f32 = arg1[0xf5];
        let mut rax_50: i32 = zmm2_1;
        
        if zmm2_1 < 0f
        {
            rax_50 = 0;
        }
        
        let zmm3_2: f32 = *arg1.byte_offset(0x7ac);
        
        if zmm2_1 > 4.29496704e+09f
        {
            rax_50 = -1;
        }
        
        let mut rsi_42: i32 = zmm3_2;
        
        if zmm3_2 < 0f
        {
            rsi_42 = 0;
        }
        
        zmm2_1 = arg1[0xf6];
        
        if zmm3_2 > 4.29496704e+09f
        {
            rsi_42 = -1;
        }
        
        let mut rdi_56: i32 = zmm2_1;
        
        if zmm2_1 < 0f
        {
            rdi_56 = 0;
        }
        
        let cond:11_1: bool = zmm2_1 > 4.29496704e+09f;
        zmm2_1 = *arg1.byte_offset(0x7b4);
        
        if cond:11_1
        {
            rdi_56 = -1;
        }
        
        let mut r8_9: i32 = zmm2_1;
        
        if zmm2_1 < 0f
        {
            r8_9 = 0;
        }
        
        let cond:12_1: bool = zmm2_1 > 4.29496704e+09f;
        zmm2_1 = arg1[0xf7];
        
        if cond:12_1
        {
            r8_9 = -1;
        }
        
        let mut r9_4: i32 = zmm2_1;
        
        if zmm2_1 < 0f
        {
            r9_4 = 0;
        }
        
        let cond:13_1: bool = zmm2_1 > 4.29496704e+09f;
        zmm2_1 = *arg1.byte_offset(0x7bc);
        
        if cond:13_1
        {
            r9_4 = -1;
        }
        
        let mut r10_3: i32 = zmm2_1;
        
        if zmm2_1 < 0f
        {
            r10_3 = 0;
        }
        
        let rcx_29: u64 = arg1[0xf3];
        
        if zmm2_1 > 4.29496704e+09f
        {
            r10_3 = -1;
        }
        
        var_478 = rax_50;
        *var_478[4] = rsi_42;
        let var_470_1: i32 = rdi_56;
        let var_46c_1: i32 = r8_9;
        let var_468_1: i32 = r9_4;
        let var_464_1: i32 = r10_3;
        var_488 = rcx_29;
        var_480 = rcx_29;
        alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(&var_630, 
            arg1, &var_488);
        let mut rax_51: i64;
        let mut rdx_23: i64;
        rax_51 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(var_620, 
            4, 0x18);
        let mut var_550: i64 = rax_51;
        let var_548_1: i64 = rdx_23;
        let var_540_1: i64 = 0;
        alacritty::display::Display::highlight_damage::h3a1808b0e321020b(arg1, &var_550);
        alacritty::renderer::Renderer::draw_rects::h606367b22cf56106(&arg1[0x1c], var_618, 
            &var_368, &var_550);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glutin..surface..Rect$GT$$GT$::h23eaac4cc5abca69(var_630, var_628);
    }
    
    alacritty::display::Display::swap_buffers::h31ffb86992ba66ce(arg1);
    let mut rax_52: i32 = arg1[0xb1];
    
    if (rax_52 & 0xfffffffe) == 4
    {
        alacritty::renderer::Renderer::finish::h21f8b411e9422e91();
        rax_52 = arg1[0xb1];
    }
    
    if rax_52 != 6
    {
        alacritty::display::Display::request_frame::h50f3eaa34af0ccb9(arg1, arg3);
    }
    
    arg1[0x17];
    alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(&arg1[3], arg1[0x16]);
    core::ptr::swap::hc1a481605191f809(&arg1[3], &arg1[0xa]);
    core::ptr::drop_in_place$LT$alacritty..renderer..rects..RenderLines$GT$::hbdccfea38dca70e6(
        &var_4c8)
}
