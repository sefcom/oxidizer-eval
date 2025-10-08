
  uint16_t alacritty::display::color::List::fill_named::h85bd9755d3a69e33(int16_t* arg1, void* arg2)

{
    arg1[1] = *(arg2 + 0x62);
    *arg1 = *(arg2 + 0x60);
    *(arg1 + 5) = *(arg2 + 0x65);
    *(arg1 + 3) = *(arg2 + 0x63);
    arg1[4] = *(arg2 + 0x68);
    arg1[3] = *(arg2 + 0x66);
    *(arg1 + 0xb) = *(arg2 + 0x6b);
    *(arg1 + 9) = *(arg2 + 0x69);
    arg1[7] = *(arg2 + 0x6e);
    arg1[6] = *(arg2 + 0x6c);
    *(arg1 + 0xf) = *(arg2 + 0x6f);
    *(arg1 + 0x11) = *(arg2 + 0x71);
    arg1[9] = *(arg2 + 0x72);
    arg1[0xa] = *(arg2 + 0x74);
    *(arg1 + 0x17) = *(arg2 + 0x77);
    *(arg1 + 0x15) = *(arg2 + 0x75);
    arg1[0xc] = *(arg2 + 0x78);
    arg1[0xd] = *(arg2 + 0x7a);
    *(arg1 + 0x1b) = *(arg2 + 0x7b);
    *(arg1 + 0x1d) = *(arg2 + 0x7d);
    arg1[0x10] = *(arg2 + 0x80);
    arg1[0xf] = *(arg2 + 0x7e);
    *(arg1 + 0x23) = *(arg2 + 0x83);
    *(arg1 + 0x21) = *(arg2 + 0x81);
    arg1[0x12] = *(arg2 + 0x84);
    arg1[0x13] = *(arg2 + 0x86);
    *(arg1 + 0x27) = *(arg2 + 0x87);
    *(arg1 + 0x29) = *(arg2 + 0x89);
    arg1[0x15] = *(arg2 + 0x8a);
    arg1[0x16] = *(arg2 + 0x8c);
    *(arg1 + 0x2f) = *(arg2 + 0x8f);
    void* rcx = arg2 + 0x98;
    
    if (*(arg2 + 0x90) & 1)
        rcx = arg2 + 0x91;
    
    *(arg1 + 0x2d) = *(arg2 + 0x8d);
    char rax_32 = *(rcx + 2);
    char var_5e = rax_32;
    int16_t rcx_1 = *rcx;
    int16_t var_60 = rcx_1;
    *(arg1 + 0x323) = rax_32;
    *(arg1 + 0x321) = rcx_1;
    arg1[0x181] = *(arg2 + 0x9a);
    arg1[0x180] = *(arg2 + 0x98);
    *(arg1 + 0x303) = *(arg2 + 0x9b);
    *(arg1 + 0x305) = *(arg2 + 0x9d);
    uint32_t rbp_2 = *(arg2 + 0x97) << 0x10 | *(arg2 + 0x95);
    char r15 = *(arg2 + 0x94);
    uint32_t rax_39 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x9a) << 0x10 | *(arg2 + 0x98));
    
    if (r15 & 1)
        rax_39 = rbp_2;
    
    arg1[0x192] = rax_39;
    arg1[0x193] = rax_39 >> 0x10;
    char rbp_3 = *(arg2 + 0x9e);
    int64_t rax_41 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    uint16_t result;
    char const* const var_a0;
    
    if (rbp_3 != 1)
    {
        if (rax_41 >= 5)
        {
            var_60 = &data_c81fd0;
            int64_t var_58_2 = 1;
            int64_t var_50_2 = 8;
            int128_t var_48_2 = {0};
            int64_t rax_58 = log::__private_api::loc::h250021ea1f26630a(&data_c81fe0);
            var_a0 = "alacritty::display::colorhex col…";
            int64_t var_98_2 = 0x19;
            char const* const var_90_2 = "alacritty::display::colorhex col…";
            int64_t var_88_2 = 0x19;
            int64_t var_80_2 = rax_58;
            log::__private_api::log::h0b6680b994d742b1(&var_60, 5, &var_a0);
        }
        
        int32_t rax_60 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x62) << 0x10 | *(arg2 + 0x60));
        *(arg1 + 0x309) = rax_60;
        *(arg1 + 0x30b) = rax_60 >> 0x10;
        int32_t rax_63 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x65) << 0x10 | *(arg2 + 0x63));
        arg1[0x186] = rax_63;
        arg1[0x187] = rax_63 >> 0x10;
        int32_t rax_66 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x68) << 0x10 | *(arg2 + 0x66));
        *(arg1 + 0x30f) = rax_66;
        *(arg1 + 0x311) = rax_66 >> 0x10;
        int32_t rax_69 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x6b) << 0x10 | *(arg2 + 0x69));
        arg1[0x189] = rax_69;
        arg1[0x18a] = rax_69 >> 0x10;
        int32_t rax_72 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x6e) << 0x10 | *(arg2 + 0x6c));
        *(arg1 + 0x315) = rax_72;
        *(arg1 + 0x317) = rax_72 >> 0x10;
        int32_t rax_75 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x71) << 0x10 | *(arg2 + 0x6f));
        arg1[0x18c] = rax_75;
        arg1[0x18d] = rax_75 >> 0x10;
        int32_t rax_78 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x74) << 0x10 | *(arg2 + 0x72));
        *(arg1 + 0x31b) = rax_78;
        *(arg1 + 0x31d) = rax_78 >> 0x10;
        int32_t rax_81 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*(arg2 + 0x77) << 0x10 | *(arg2 + 0x75));
        arg1[0x18f] = rax_81;
        result = rax_81 >> 0x10;
        arg1[0x190] = result;
    }
    else
    {
        if (rax_41 > 4)
        {
            var_60 = &data_c81fc0;
            int64_t var_58_1 = 1;
            int64_t var_50_1 = 8;
            int128_t var_48_1 = {0};
            int64_t rax_42 = log::__private_api::loc::h250021ea1f26630a(&data_c81ff8);
            var_a0 = "alacritty::display::colorhex col…";
            int64_t var_98_1 = 0x19;
            char const* const var_90_1 = "alacritty::display::colorhex col…";
            int64_t var_88_1 = 0x19;
            int64_t var_80_1 = rax_42;
            log::__private_api::log::h0b6680b994d742b1(&var_60, 5, &var_a0);
        }
        
        *(arg1 + 0x30b) = *(arg2 + 0xa1);
        *(arg1 + 0x309) = *(arg2 + 0x9f);
        arg1[0x187] = *(arg2 + 0xa4);
        arg1[0x186] = *(arg2 + 0xa2);
        *(arg1 + 0x311) = *(arg2 + 0xa7);
        *(arg1 + 0x30f) = *(arg2 + 0xa5);
        arg1[0x18a] = *(arg2 + 0xaa);
        arg1[0x189] = *(arg2 + 0xa8);
        *(arg1 + 0x317) = *(arg2 + 0xad);
        *(arg1 + 0x315) = *(arg2 + 0xab);
        arg1[0x18c] = *(arg2 + 0xae);
        arg1[0x18d] = *(arg2 + 0xb0);
        *(arg1 + 0x31b) = *(arg2 + 0xb1);
        *(arg1 + 0x31d) = *(arg2 + 0xb3);
        arg1[0x190] = *(arg2 + 0xb6);
        result = *(arg2 + 0xb4);
        arg1[0x18f] = result;
    }
    return result;
}
