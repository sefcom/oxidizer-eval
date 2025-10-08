
  int64_t alacritty::display::Display::draw::hb8d142242f69117d(int64_t* arg1, char* arg2, void* arg3, int64_t* arg4, void* arg5, int128_t* arg6)

{
    void var_268;
    alacritty::display::content::RenderableContent::new::hf4e6e038e845e91d(&var_268, arg5, arg1, 
        &arg2[8], arg6);
    int64_t var_4f8 = 0;
    int64_t var_4f0 = 8;
    int64_t var_4e8 = 0;
    
    while (true)
    {
        void var_298;
        _$LT$alacritty..display..content..RenderableContent$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h272049d726f01fbc(&var_298, &var_268);
        int32_t var_27c;
        
        if (var_27c == 0x110000)
            break;
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7ca7ec9724f8fc37(&var_4f8, &var_298);
    }
    
    int64_t var_1b0;
    int64_t var_318 = var_1b0;
    int128_t var_1c0;
    int128_t var_328 = var_1c0;
    int128_t var_1d0;
    int128_t var_338 = var_1d0;
    int64_t* r12;
    r12 = 1;
    void* r14;
    r14 = 1;
    int64_t var_1f0;
    void* var_178;
    uint32_t rax_1 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
        var_1f0, var_178, 0x100);
    r14 = 1;
    uint32_t rbp_1 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
        var_1f0, var_178, 0x101);
    int64_t var_220;
    int64_t var_640 = var_220;
    void var_2b8;
    alacritty::display::content::RenderableContent::cursor::hab97100ef46cc41e(&var_2b8, &var_268);
    int64_t rax_4 = *(arg2 + 0x58);
    int64_t rax_5 = *(arg2 + 0x60);
    int32_t rcx_1 = *(arg2 + 0x68);
    int64_t var_348 = arg1[0xcb];
    int128_t var_358 = *(arg1 + 0x648);
    int128_t var_368 = *(arg1 + 0x638);
    int64_t var_5a8 = arg1[0xf7];
    int128_t zmm1 = *(arg1 + 0x7a8);
    int128_t var_5c8 = *(arg1 + 0x798);
    int32_t rdx_2 = *(arg2 + 0x6e4);
    int32_t var_644;
    uint64_t var_588;
    
    if (rdx_2 & 0x10000)
    {
        var_588 = *(arg2 + 0x298);
        var_644 = *(arg2 + 0x2a0);
    }
    else
        var_644 = rcx_1;
    
    int128_t* var_630;
    alacritty_terminal::term::Term$LT$T$GT$::damage::h1bcd4e535a5188a6(&var_630, &arg2[8]);
    uint32_t var_60c = rbp_1;
    int64_t var_620;
    int128_t var_4c8;
    int64_t var_4b8;
    int32_t var_488;
    uint64_t var_480;
    
    if (!var_630)
        arg1[9] = 1;
    else
    {
        var_4b8 = var_620;
        var_4c8 = var_630;
        
        while (true)
        {
            _$LT$alacritty_terminal..term..TermDamageIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6846b46b990216ac(&var_488, &var_4c8);
            
            if (var_488 != 1)
                break;
            
            alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(arg1[4], 
                arg1[5], &var_480);
        }
        
        rbp_1 = var_60c;
    }
    
    alacritty_terminal::term::TermDamageState::reset::h273368bb6739a3e2(&arg2[0x1f0], 
        *(arg2 + 0xc0));
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(arg2);
    alacritty::display::Display::validate_hint_highlights::hf25de0d633e6798e(arg1, var_640);
    double zmm0_2;
    uint64_t zmm1_1[0x2];
    zmm0_2 = alacritty::display::bell::VisualBell::intensity::hdd0da5899e174934(&arg1[0xb4]);
    uint64_t temp0[0x2] = _mm_xor_pd(zmm1_1, zmm1_1);
    zmm0_2 - temp0[0];
    int64_t rax_12;
    
    if (!(zmm0_2 != temp0[0]) && !FCMP_UO(zmm0_2, temp0[0]) && !arg1[0x8f])
        rax_12 = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6);
    
    if (zmm0_2 != temp0[0] || FCMP_UO(zmm0_2, temp0[0]) || arg1[0x8f] || rax_12)
    {
        arg1[9] = 1;
        arg1[0x10] = 1;
    }
    
    int64_t var_568;
    
    if (rdx_2 & 0x10000)
        alacritty::display::Display::draw::_$u7b$$u7b$closure$u7d$$u7d$::ha0cf1e6508f2f460(
            &var_568, var_640, var_588, var_644);
    else
        var_568 = 0;
    
    int64_t var_558;
    int64_t var_478 = var_558;
    var_488 = var_568;
    uint64_t var_560;
    var_480 = var_560;
    alacritty::display::damage::DamageTracker::damage_vi_cursor::hbd6389ba644f4a2f(arg1, &var_488);
    alacritty::display::damage::DamageTracker::damage_selection::hfcbf35fbfe7a325f(arg1, &var_338, 
        var_640);
    alacritty::display::Display::make_current::h1def9f222502e6f9(arg1);
    int512_t zmm0_3;
    zmm0_3 = *(arg5 + 0x1a4);
    alacritty::renderer::Renderer::clear::h28d9311462ed0122(rbp_1, zmm0_3);
    ahash::random_state::RandomState::new::hccae9c0b71bdd92e(&var_488);
    int128_t zmm0_4 = var_488;
    int128_t zmm2 = data_c75368;
    var_4c8 = *data_c75358;
    var_4b8 = zmm2;
    int128_t var_4a8 = zmm0_4;
    int128_t var_498 = var_478;
    bool var_651 = (arg1[0xf2] ^ 2) | (arg1[0xeb] ^ 2);
    alacritty::display::meter::Meter::sampler::hd4064409b7c56fab(&var_488, &arg1[0xfa]);
    void var_308;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h617b6b83ebbae00d(&var_308, &var_4f8);
    bool* var_2e8 = &var_651;
    int64_t* var_2e0 = &var_640;
    void* var_2d8 = &arg1[0xe5];
    void* var_2d0 = &arg1[0xec];
    int64_t* var_2c8 = arg1;
    int128_t* var_2c0 = &var_4c8;
    alacritty::renderer::Renderer::draw_cells::ha80538d22427933c(&arg1[0x1c], &var_5c8, 
        &arg1[0xbf], &var_308);
    core::ptr::drop_in_place$LT$alacritty..display..meter..Sampler$GT$::hd0ceb5f35ded1224(&var_488);
    uint32_t rbp_3 = rax_1;
    int128_t* var_5e8 = &var_368;
    var_630 = &var_5c8;
    void var_3a8;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h1d1465bab419c173(&var_3a8, &var_4c8);
    var_488 = 0;
    int64_t var_418 = 0;
    int128_t** var_380 = &var_5e8;
    int128_t** var_378 = &var_630;
    void var_5a0;
    int64_t r8_1 =
        core::iter::traits::iterator::Iterator::collect::h50b6e4b5219aeb10(&var_5a0, &var_488);
    void* r13_2 = arg5;
    int64_t var_628;
    
    if (rdx_2 & 0x10000)
    {
        int64_t r15_1 = ~var_644 + var_5c8;
        var_480 = var_588;
        var_478 = var_644;
        var_488 = 1;
        core::option::Option$LT$T$GT$::filter::h36c7180d33592252(&var_630, &var_488, var_640);
        alacritty::display::Display::draw_line_indicator::h462b756ef8d8474d(arg1, r13_2, rax_4, 
            var_630, var_628, r15_1);
    }
    else if (alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6))
        alacritty::display::Display::draw_line_indicator::h462b756ef8d8474d(arg1, r13_2, rax_4, 0, 
            r8_1, var_640);
    
    uint32_t zmm0_5[0x4] = *(r13_2 + 0x3d0);
    int64_t var_608;
    var_608 = zmm0_5[0];
    void var_148;
    _$LT$alacritty..display..content..RenderableCursor$u20$as$u20$alacritty..display..cursor..IntoRects$GT$::rects::h24fb12653be3a4e9(&var_148, &var_2b8, &var_5c8, zmm0_5);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::heb81fe2e84edcb75(&var_5a0, &var_148);
    int128_t zmm0_6;
    uint64_t zmm1_3[0x2];
    zmm0_6 = alacritty::display::bell::VisualBell::intensity::hdd0da5899e174934(&arg1[0xb4]);
    uint64_t temp0_1[0x2] = _mm_xor_pd(zmm1_3, zmm1_3);
    zmm0_6 - temp0_1[0];
    
    if (zmm0_6 != temp0_1[0] || !FCMP_O(zmm0_6, temp0_1[0]))
    {
        char var_4ca_1 = *(r13_2 + 0x35d);
        zmm0_6 = zmm0_6;
        int16_t var_4cc_1 = *(r13_2 + 0x35b);
        uint64_t var_4e0[0x2] = _mm_xor_pd(temp0_1, temp0_1)[0] | zmm1 << 0x40;
        int32_t var_4d0_1 = zmm0_6;
        char var_4c9_1 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(&var_5a0, &var_4e0);
    }
    
    int32_t var_618;
    var_618 = &arg1[0xf3];
    void* rax_27 = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6);
    int64_t var_5e0;
    int64_t var_5d8;
    
    if (rax_27)
    {
        uint64_t rdx_11 = *(arg6 + 0x116c);
        char* rcx_8 = "Backward Search: ";
        
        if (rdx_11)
            rcx_8 = "Search: end-hal";
        
        alacritty::display::Display::format_search::hb94809e56cc52697(&var_488, *(rax_27 + 8), 
            *(rax_27 + 0x10), rcx_8, (rdx_11 ^ 1) * 9 + 8, *var_5c8[8]);
        uint64_t r14_13 = var_480;
        int32_t zmm0_7[0x4] =
            alacritty::display::Display::draw_search::h54da426c82502e2d(arg1, r13_2, r14_13);
        int64_t r12_9 = var_5c8;
        int64_t r14_15 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(r14_13, var_478 + r14_13, zmm0_7) - 1;
        
        if (arg1[0x5a] == 2)
        {
            void* rax_29 = r13_2 + 0x273;
            
            if (*(r13_2 + 0x1f8) & 1)
                rax_29 = r13_2 + 0x1f9;
            
            char rcx_11 = *(rax_29 + 2);
            *var_630[2] = rcx_11;
            int16_t rax_30 = *rax_29;
            var_630 = rax_30;
            int16_t var_521_1 = rax_30;
            char var_51f_1 = rcx_11;
            char var_51e_1 = 1;
            int16_t var_524_1 = rax_30;
            char var_522_1 = rcx_11;
            int32_t var_528_1 = 1;
            int64_t var_538 = r12_9;
            int64_t var_530_1 = r14_15;
            void var_e0;
            _$LT$alacritty..display..content..RenderableCursor$u20$as$u20$alacritty..display..cursor..IntoRects$GT$::rects::h24fb12653be3a4e9(&var_e0, &var_538, &var_5c8, var_608);
            alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::heb81fe2e84edcb75(&var_5a0, &var_e0);
        }
        
        var_5e0 = r12_9;
        var_5d8 = r14_15;
        var_5e8 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_488);
        
        if (arg1[0x63])
            goto label_84da4f;
    }
    else if (var_568 != 1)
    {
        int64_t rdx_15 = *var_618;
        int64_t rax_37;
        
        if (rcx_1 + var_640 < 0)
            rax_37 = 0;
        else
        {
            var_480 = rcx_1 + var_640;
            var_478 = rax_5;
            rax_37 = 1;
        }
        
        var_488 = rax_37;
        core::option::Option$LT$T$GT$::filter::h004bc68bf47f05d7(&var_5e8, &var_488, rdx_15);
        
        if (arg1[0x63])
            goto label_84da4f;
    }
    else
    {
        var_5d8 = var_558;
        var_5e8 = var_568;
        
        if (arg1[0x63])
        {
            label_84da4f:
            
            if (var_5e8 & 1)
            {
                uint32_t r8_6;
                
                if (!alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6))
                    r8_6 = var_60c;
                else
                {
                    void* rax_39 = r13_2 + 0x273;
                    
                    if (*(r13_2 + 0x1f8) & 1)
                        rax_39 = r13_2 + 0x1f9;
                    
                    rbp_3 = *(rax_39 + 2) << 0x10 | *rax_39;
                    void* rax_40 = r13_2 + 0x270;
                    
                    if (*(r13_2 + 0x1fc) & 1)
                        rax_40 = r13_2 + 0x1fd;
                    
                    r8_6 = *(rax_40 + 2) << 0x10 | *rax_40;
                }
                
                alacritty::display::Display::draw_ime_preview::h6226f78431452811(arg1, var_5e0, 
                    var_5d8, rbp_3, r8_6, &var_5a0, var_608);
            }
        }
    }
    void* rax_41 =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h75792986f4a34d45(arg4);
    
    if (!rax_41)
        alacritty::renderer::Renderer::draw_rects::h606367b22cf56106(&arg1[0x1c], &var_5c8, 
            &var_368, &var_5a0);
    else
    {
        int64_t rax_42 = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg6);
        alacritty::message_bar::Message::text::hdf58328cea9791eb(&var_630, *(rax_41 + 8), 
            *(rax_41 + 0x10), &var_5c8);
        int64_t rbp_7 = var_5c8 + 1;
        float zmm0_9 = fmaf();
        void* rax_43 = r13_2 + 0x23b;
        
        if (*(rax_41 + 0x30))
            rax_43 = r13_2 + 0x241;
        
        float zmm1_4 = zmm1;
        int32_t r12_10 = zmm1_4;
        
        if (zmm1_4 > 2.14748352e+09f)
            r12_10 = 0x7fffffff;
        
        if (FCMP_UO(zmm1_4, zmm1_4))
            r12_10 = 0;
        
        float zmm3_1 = zmm0_9;
        zmm0_9 = *zmm1[4];
        int128_t* var_638;
        var_638 = zmm0_9;
        zmm0_9 = zmm0_9 - zmm3_1;
        int32_t r13_3 = zmm0_9;
        
        if (zmm0_9 > 2.14748352e+09f)
            r13_3 = 0x7fffffff;
        
        if (FCMP_UO(zmm0_9, zmm0_9))
            r13_3 = 0;
        
        uint32_t r14_18 = *rax_43;
        uint32_t r15_6 = *(rax_43 + 2);
        int32_t var_580 = 0;
        int64_t* var_5f8;
        var_5f8 = zmm3_1;
        float var_57c_1 = zmm3_1;
        float var_578_1 = r12_10;
        float var_574_1 = r13_3;
        char var_56a_1 = r15_6;
        int16_t var_56c_1 = r14_18;
        int32_t var_570_1 = 0x3f800000;
        char var_569_1 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(&var_5a0, &var_580);
        float zmm1_5 = var_5f8;
        int32_t rax_44 = zmm1_5;
        
        if (zmm1_5 > 2.14748352e+09f)
            rax_44 = 0x7fffffff;
        
        if (FCMP_UO(zmm1_5, zmm1_5))
            rax_44 = 0;
        
        zmm1_5 = var_638;
        int32_t rcx_20 = zmm1_5;
        
        if (zmm1_5 > 2.14748352e+09f)
            rcx_20 = 0x7fffffff;
        
        if (FCMP_UO(zmm1_5, zmm1_5))
            rcx_20 = 0;
        
        var_488 = 0;
        int32_t var_484_1 = rcx_20 - (rax_44 + r13_3);
        var_480 = r12_10;
        *var_480[4] = r13_3;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h201c90a0c48ff49e(&arg1[6], &var_488);
        alacritty::renderer::Renderer::draw_rects::h606367b22cf56106(&arg1[0x1c], &var_5c8, 
            &var_368, &var_5a0);
        uint32_t r15_10 = *(arg5 + 0x275) << 0x10 | *(arg5 + 0x273);
        var_488 = var_628;
        var_480 = var_628 + var_620 * 0x18;
        var_478 = 0;
        
        while (true)
        {
            int64_t rax_48;
            void* rdx_21;
            rax_48 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0877e22635b0eae3(&var_488);
            
            if (!rdx_21)
                break;
            
            int64_t r9_3 = *(rdx_21 + 8);
            alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(&arg1[0x1c], 
                rax_48 + rbp_7, 0, r15_10, r14_18 | r15_6 << 0x10, r9_3, *(rdx_21 + 0x10) + r9_3, 
                &var_5c8, &arg1[0xbf]);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4b50bc99ac6a782b(&var_630);
        r13_2 = arg5;
    }
    
    alacritty::display::Display::draw_render_timer::h661820346e8e91a1(arg1, r13_2);
    
    if (var_651)
        alacritty::display::Display::draw_hyperlink_preview::h06442e3008e163c3(arg1, r13_2, 1, 
            var_644, var_640);
    
    alacritty::display::window::Window::pre_present_notify::h8d5a1a465fc31b57(arg1[0x68], 
        arg1[0x69]);
    
    if (arg1[0x18])
    {
        float zmm2_1 = arg1[0xf5];
        int32_t rax_50 = zmm2_1;
        
        if (zmm2_1 < 0f)
            rax_50 = 0;
        
        float zmm3_2 = *(arg1 + 0x7ac);
        
        if (zmm2_1 > 4.29496704e+09f)
            rax_50 = -1;
        
        int32_t rsi_42 = zmm3_2;
        
        if (zmm3_2 < 0f)
            rsi_42 = 0;
        
        zmm2_1 = arg1[0xf6];
        
        if (zmm3_2 > 4.29496704e+09f)
            rsi_42 = -1;
        
        int32_t rdi_56 = zmm2_1;
        
        if (zmm2_1 < 0f)
            rdi_56 = 0;
        
        bool cond:11_1 = zmm2_1 > 4.29496704e+09f;
        zmm2_1 = *(arg1 + 0x7b4);
        
        if (cond:11_1)
            rdi_56 = -1;
        
        int32_t r8_9 = zmm2_1;
        
        if (zmm2_1 < 0f)
            r8_9 = 0;
        
        bool cond:12_1 = zmm2_1 > 4.29496704e+09f;
        zmm2_1 = arg1[0xf7];
        
        if (cond:12_1)
            r8_9 = -1;
        
        int32_t r9_4 = zmm2_1;
        
        if (zmm2_1 < 0f)
            r9_4 = 0;
        
        bool cond:13_1 = zmm2_1 > 4.29496704e+09f;
        zmm2_1 = *(arg1 + 0x7bc);
        
        if (cond:13_1)
            r9_4 = -1;
        
        int32_t r10_3 = zmm2_1;
        
        if (zmm2_1 < 0f)
            r10_3 = 0;
        
        uint64_t rcx_29 = arg1[0xf3];
        
        if (zmm2_1 > 4.29496704e+09f)
            r10_3 = -1;
        
        var_478 = rax_50;
        *var_478[4] = rsi_42;
        int32_t var_470_1 = rdi_56;
        int32_t var_46c_1 = r8_9;
        int32_t var_468_1 = r9_4;
        int32_t var_464_1 = r10_3;
        var_488 = rcx_29;
        var_480 = rcx_29;
        alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(&var_630, 
            arg1, &var_488);
        int64_t rax_51;
        int64_t rdx_23;
        rax_51 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(var_620, 
            4, 0x18);
        int64_t var_550 = rax_51;
        int64_t var_548_1 = rdx_23;
        int64_t var_540_1 = 0;
        alacritty::display::Display::highlight_damage::h3a1808b0e321020b(arg1, &var_550);
        alacritty::renderer::Renderer::draw_rects::h606367b22cf56106(&arg1[0x1c], var_618, 
            &var_368, &var_550);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glutin..surface..Rect$GT$$GT$::h23eaac4cc5abca69(var_630, var_628);
    }
    
    alacritty::display::Display::swap_buffers::h31ffb86992ba66ce(arg1);
    int32_t rax_52 = arg1[0xb1];
    
    if ((rax_52 & 0xfffffffe) == 4)
    {
        alacritty::renderer::Renderer::finish::h21f8b411e9422e91();
        rax_52 = arg1[0xb1];
    }
    
    if (rax_52 != 6)
        alacritty::display::Display::request_frame::h50f3eaa34af0ccb9(arg1, arg3);
    
    arg1[0x17];
    alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(&arg1[3], arg1[0x16]);
    core::ptr::swap::hc1a481605191f809(&arg1[3], &arg1[0xa]);
    return 
        core::ptr::drop_in_place$LT$alacritty..renderer..rects..RenderLines$GT$::hbdccfea38dca70e6(
        &var_4c8);
}
