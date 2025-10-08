
  int64_t* alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_internal::h6112248bcc16e983(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4, int64_t arg5, int32_t arg6, void* arg7)

{
    int64_t r13 = *(arg2 + 0xc0);
    int64_t rax = *(arg2 + 0x50);
    int32_t rax_1 = rax - r13;
    int32_t var_130 = 0;
    
    if (rax < r13)
        rax_1 = 0;
    
    int64_t rbp_1 = *(arg2 + 0xb8) - 1;
    int64_t* (* rcx)(int64_t* arg1, int64_t* arg2) = _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73;
    
    if (*(arg7 + 0x430))
        rcx = _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458;
    
    uint32_t var_60 = *(arg7 + 0x431);
    int64_t var_58 = 1;
    int128_t s;
    __builtin_memset(&s, 0, 0x19);
    void* var_c8;
    regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_c8, arg7, 
        arg7 + 0x2d0, &var_60);
    int32_t rbx = core::result::Result$LT$T$C$E$GT$::unwrap::h0c28f10e710e8b0c(&var_c8);
    int32_t var_78 = r13;
    int32_t rax_4 = r13 - 1;
    var_c8 = arg2 + 0x28;
    int64_t var_c0 = arg3;
    int32_t var_b8 = arg4;
    int64_t var_b0 = rbp_1;
    int32_t var_a8 = rax_4;
    void* var_98 =
        alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8);
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::skip_fullwidth::h604d4a2591bbfa58(arg2, &var_c8, &var_98, *(arg7 + 0x430));
    int32_t rbp_2 = *(var_98 + 0x10);
    uint8_t var_e8 =
        *(alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8) + 0x14)
        >> 4;
    int64_t r14_1 = var_c0;
    int32_t rcx_5 = var_b8;
    int32_t var_f8 = rcx_5;
    int32_t var_118;
    var_118 = r14_1;
    char var_f0_1 = 0;
    int64_t var_138 = 0;
    int64_t* result;
    
    while (true)
    {
        uint64_t r15_1 = var_118;
        uint64_t r13_1 = var_f8;
        var_f8 = rcx_5;
        var_118 = r14_1;
        int32_t var_13c = 0;
        int64_t rdx_3 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rbp_2, &var_13c);
        int32_t var_140;
        uint64_t var_128;
        void* var_110;
        int32_t rax_16;
        void* r14_2;
        
        if (rdx_3)
        {
            int64_t r12_2 = rdx_3;
            r14_2 = arg7;
            int64_t rdi_7;
            
            if (!*(r14_2 + 0x430))
            {
                rdi_7 = r12_2 - 1;
                
                if (r12_2 <= 4)
                    goto label_7727ce;
                
                label_772f10:
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_7, 4);
                /* no return */
            }
            
            rdi_7 = 0;
            label_7727ce:
            char rax_17;
            int32_t rdx_5;
            rax_17 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                arg7 + 0x2d0, rbx, *(&var_13c + rdi_7));
            void** const rbx_2;
            
            if (rax_17 & 1)
            {
                label_772dd8:
                rbx_2 = &data_c77b88;
                result = alloc::boxed::Box$LT$T$GT$::new::h314575a5fb231377();
            }
            else
            {
                rbx = rdx_5;
                
                if (rdx_5 & 0x8000000)
                {
                    var_130 += 1;
                    label_77281a:
                    var_138 = 1;
                    label_772824:
                    
                    if (r12_2 == 1)
                    {
                        rax_16 = r13_1;
                        r13_1 = r15_1;
                        goto label_772ae4;
                    }
                    
                    rdi_7 = 1;
                    
                    if (!*(r14_2 + 0x430))
                        rdi_7 = r12_2 - 2;
                    
                    if (!*(r14_2 + 0x430) && rdi_7 > 3)
                        goto label_772f10;
                    
                    char rax_20;
                    int32_t rdx_7;
                    rax_20 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7 + 0x2d0, rbx, *(&var_13c + rdi_7));
                    
                    if (rax_20 & 1)
                        goto label_772dd8;
                    
                    rbx = rdx_7;
                    
                    if (rdx_7 & 0x40000000)
                    {
                        var_140 = r13_1;
                        var_128 = r15_1;
                        
                        if (var_130 != 1)
                            goto label_772eb1;
                        
                        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(
                            &var_110, r14_2, arg7 + 0x2d0, &var_60);
                        
                        if (var_110 & 1)
                            goto label_772deb;
                        
                        rbx = *var_110[4];
                        var_138 = 0;
                        var_130 = 0;
                        
                        if (r12_2 == 2)
                        {
                            rax_16 = var_140;
                            goto label_772ae4;
                        }
                    }
                    else
                    {
                        var_140 = r13_1;
                        r13_1 = r15_1;
                        var_130 += 1;
                        
                        if (r12_2 == 2)
                        {
                            rax_16 = var_140;
                            goto label_772ae4;
                        }
                    }
                    
                    var_128 = r13_1;
                    rdi_7 = 2;
                    
                    if (!*(r14_2 + 0x430))
                        rdi_7 = r12_2 - 3;
                    
                    if (!*(r14_2 + 0x430) && rdi_7 > 3)
                        goto label_772f10;
                    
                    char rax_25;
                    int32_t rdx_14;
                    rax_25 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7 + 0x2d0, rbx, *(&var_13c + rdi_7));
                    
                    if (rax_25 & 1)
                        goto label_772dd8;
                    
                    rbx = rdx_14;
                    
                    if (rdx_14 & 0x40000000)
                    {
                        if (var_130 != 1)
                            goto label_772eb1;
                        
                        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(
                            &var_110, r14_2, arg7 + 0x2d0, &var_60);
                        
                        if (var_110 & 1)
                            goto label_772deb;
                        
                        rbx = *var_110[4];
                        var_138 = 0;
                        var_130 = 0;
                        
                        if (r12_2 == 3)
                        {
                            rax_16 = var_140;
                            goto label_772ae4;
                        }
                    }
                    else
                    {
                        r13_1 = var_128;
                        var_130 += 1;
                        
                        if (r12_2 == 3)
                        {
                            rax_16 = var_140;
                            goto label_772ae4;
                        }
                    }
                    
                    var_128 = r13_1;
                    rdi_7 = 3;
                    
                    if (!*(r14_2 + 0x430))
                        rdi_7 = r12_2 - 4;
                    
                    if (!*(r14_2 + 0x430) && rdi_7 > 3)
                        goto label_772f10;
                    
                    char rax_28;
                    int32_t rdx_17;
                    rax_28 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7 + 0x2d0, rbx, *(&var_13c + rdi_7));
                    
                    if (rax_28 & 1)
                        goto label_772dd8;
                    
                    rbx = rdx_17;
                    
                    if (rdx_17 & 0x40000000)
                    {
                        if (var_130 != 1)
                            goto label_772eb1;
                        
                        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(
                            &var_110, r14_2, arg7 + 0x2d0, &var_60);
                        
                        if (var_110 & 1)
                            goto label_772deb;
                        
                        rbx = *var_110[4];
                        var_138 = 0;
                        var_130 = 0;
                        
                        if (r12_2 == 4)
                        {
                            rax_16 = var_140;
                            goto label_772ae4;
                        }
                    }
                    else
                    {
                        r13_1 = var_128;
                        var_130 += 1;
                        
                        if (r12_2 == 4)
                        {
                            rax_16 = var_140;
                            goto label_772ae4;
                        }
                    }
                    
                    int64_t r12_3 = r12_2 - 5;
                    int64_t rbp_6 = 4;
                    rax_16 = var_140;
                    
                    while (true)
                    {
                        if (*(r14_2 + 0x430))
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_6, 4);
                            /* no return */
                        }
                        
                        var_128 = r13_1;
                        var_140 = rax_16;
                        
                        if (r12_3 >= 4)
                        {
                            rdi_7 = r12_3;
                            goto label_772f10;
                        }
                        
                        char rax_48;
                        int32_t rdx_24;
                        rax_48 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(
                            r14_2, arg7 + 0x2d0, rbx, *(&var_13c + r12_3));
                        
                        if (rax_48 & 1)
                            goto label_772dd8;
                        
                        rbx = rdx_24;
                        
                        if (!(rdx_24 & 0x40000000))
                        {
                            var_130 += 1;
                            rax_16 = var_140;
                            r13_1 = var_128;
                            rbp_6 += 1;
                            int64_t temp3_1 = r12_3;
                            r12_3 -= 1;
                            
                            if (temp3_1 < 1)
                                goto label_772ae4;
                        }
                        else
                        {
                            if (var_130 != 1)
                                goto label_772eb1;
                            
                            rax_16 = regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_110, r14_2, arg7 + 0x2d0, &var_60);
                            
                            if (var_110 == 1)
                                break;
                            
                            rbx = *var_110[4];
                            var_130 = 0;
                            var_138 = 0;
                            rbp_6 += 1;
                            int64_t temp4_1 = r12_3;
                            r12_3 -= 1;
                            
                            if (temp4_1 < 1)
                                goto label_772ae4;
                        }
                    }
                    
                    goto label_772deb;
                }
                
                if (!(rbx & 0x40000000))
                {
                    var_130 += 1;
                    r13_1 = var_140;
                    r15_1 = var_128;
                    goto label_772824;
                }
                
                if (var_130 != 1)
                    goto label_772eb1;
                
                regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_110, 
                    r14_2, arg7 + 0x2d0, &var_60);
                
                if (!(var_110 & 1))
                {
                    rbx = *var_110[4];
                    var_13c = 0;
                    int64_t rdx_9;
                    rax_16 =
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rbp_2, &var_13c);
                    
                    if (!rdx_9)
                    {
                        var_130 = 0;
                        var_138 = 0;
                        goto label_772ae4;
                    }
                    
                    r12_2 = rdx_9;
                    char temp1_1 = *(r14_2 + 0x430);
                    rdi_7 = rdx_9 - 1;
                    int64_t rax_23 = 0;
                    
                    if (!temp1_1)
                        rax_23 = rdi_7;
                    
                    if (!temp1_1 && r12_2 > 4)
                        goto label_772f10;
                    
                    char rax_24;
                    int32_t rdx_11;
                    rax_24 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7 + 0x2d0, rbx, *(&var_13c + rax_23));
                    
                    if (rax_24 & 1)
                        goto label_772dd8;
                    
                    rbx = rdx_11;
                    var_130 = 1;
                    
                    if (rdx_11 & 0x8000000)
                        goto label_77281a;
                    
                    var_138 = 0;
                    
                    if (!(rbx & 0x40000000))
                        goto label_772824;
                    
                    goto label_772eb1;
                }
                
                label_772deb:
                int64_t var_108;
                result = alloc::boxed::Box$LT$T$GT$::new::h75a6ccb79f8e3d96(var_108);
                rbx_2 = &data_c77b10;
            }
            
            arg1[1] = result;
            arg1[2] = rbx_2;
            *arg1 = 2;
            break;
        }
        
        r14_2 = arg7;
        rax_16 = var_140;
        r13_1 = var_128;
        label_772ae4:
        int64_t r12_1 = var_138;
        int32_t rax_31;
        rax_31 = var_f8 == arg6;
        int64_t rcx_15;
        rcx_15 = var_118 == arg5;
        rcx_15 &= rax_31;
        rcx_15 |= var_f0_1;
        
        if (rcx_15 & 1)
        {
            char rax_51;
            int32_t rdx_27;
            rax_51 = regex_automata::hybrid::dfa::DFA::next_eoi_state::h2ed661a61e1f79b1(r14_2, 
                arg7 + 0x2d0, rbx);
            
            if (rax_51 & 1)
            {
                result = alloc::boxed::Box$LT$T$GT$::new::h314575a5fb231377();
                arg1[1] = result;
                arg1[2] = &data_c77b88;
                *arg1 = 2;
                break;
            }
            
            var_138 = 1;
            var_140 = var_f8;
            var_128 = var_118;
            
            if (rdx_27 & 0x8000000)
                goto label_772eb1;
            
            if (rdx_27 & 0x40000000)
            {
                var_140 = rax_16;
                var_128 = r13_1;
                var_138 = r12_1;
                
                if (var_130 == 1)
                    var_138 = 0;
                
                goto label_772eb1;
            }
            
            var_140 = rax_16;
            var_128 = r13_1;
            label_772eac:
            var_138 = r12_1;
            label_772eb1:
            result = arg1;
            *result = var_138;
            result[1] = var_128;
            result[2] = var_140;
            break;
        }
        
        rcx(&var_110, &var_c8);
        void* rax_32 = var_110;
        
        if (!rax_32)
        {
            var_c8 = arg2 + 0x28;
            var_c0 = rbp_1 - var_118;
            var_b8 = ~(rax_1 + var_f8) + var_78;
            int64_t var_b0_1 = rbp_1;
            int32_t var_a8_1 = rax_4;
            rax_32 =
                alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8);
        }
        
        void* var_90 = rax_32;
        int32_t rax_38;
        rax_38 = var_b8 == arg6;
        char var_f0_2 = rax_38;
        var_138 = var_c0 == arg5;
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::skip_fullwidth::h604d4a2591bbfa58(arg2, &var_c8, &var_90, *(r14_2 + 0x430));
        int32_t rax_41 = *(var_90 + 0x10);
        int16_t rbp_5 = *(
            alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8)
            + 0x14) & 0x10;
        r14_1 = var_c0;
        rcx_5 = var_b8;
        
        if (((rbp_1 ^ var_118) | r14_1 || var_e8 & 1) && (var_118 || r14_1 != rbp_1 || rbp_5))
            goto label_772717;
        
        char rax_46;
        int32_t rdx_21;
        rax_46 = regex_automata::hybrid::dfa::DFA::next_eoi_state::h2ed661a61e1f79b1(arg7, 
            arg7 + 0x2d0, rbx);
        
        if (rax_46 & 1)
            goto label_772dd8;
        
        int32_t rax_47 = rdx_21;
        
        if (rax_47 & 0x8000000)
            r12_1 = 1;
        
        if (r12_1 & 1)
            rdx_21 = var_130 < 2;
        
        if (r12_1 & 1 && !(rax_47 >> 0x1e & rdx_21) && var_130)
        {
            int32_t temp2_1 = rax_47 & 0x8000000;
            int32_t rax_53 = var_f8;
            
            if (!temp2_1)
                rax_53 = rax_16;
            
            uint64_t rcx_28 = var_118;
            
            if (!temp2_1)
                rcx_28 = r13_1;
            
            var_140 = rax_53;
            var_128 = rcx_28;
            goto label_772eac;
        }
        
        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_110, arg7, 
            arg7 + 0x2d0, &var_60);
        
        if (var_110 & 1)
            goto label_772deb;
        
        var_130 = 0;
        r12_1 = 0;
        rbx = *var_110[4];
        label_772717:
        var_f0_1 = var_f0_2 & var_138;
        var_e8 = rbp_5 >> 4;
        var_140 = rax_16;
        var_128 = r13_1;
        var_138 = r12_1;
        rbp_2 = rax_41;
    }
    
    return result;
}
