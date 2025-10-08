
  int64_t* alacritty_terminal::term::search::RegexSearch::new::he62c7dc0d18da29a(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_1030 = 0;
    uint64_t rax = arg2 + arg3;
    int64_t var_1578 = arg2;
    char rax_1;
    int64_t* rdx;
    rax_1 = core::iter::traits::iterator::Iterator::try_fold::hdefa6ae3da21c884(&var_1578);
    char rax_2 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h136c1d6fa65c5a1c(rax_1) ^ 1;
    int32_t var_16f0 = 0xfa;
    char var_16ec = 0xa;
    char var_16eb = rax_2;
    int32_t var_16ea = 0;
    char var_16e6 = 0;
    int16_t var_16e5 = 0x101;
    char var_16e3 = 0;
    int128_t var_1698 = {0};
    int64_t var_1668 = 0;
    int64_t var_1658;
    __builtin_memcpy(&var_1658, 
        "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00", 0x20);
    char var_1620 = 3;
    int32_t var_1618 = 0x2020202;
    int16_t var_1614 = 0x202;
    int64_t var_16e0 = 1;
    int64_t var_16d8 = 0x200000;
    char var_16d0 = 0;
    int32_t var_16ce = 0x3020202;
    int64_t var_cf8;
    int64_t var_478;
    _$LT$regex_automata..nfa..thompson..compiler..Config$u20$as$u20$core..clone..Clone$GT$::clone::h8690ea4c360f1c56(&var_478, &var_16e0, 
        _$LT$regex_automata..hybrid..dfa..Config$u20$as$u20$core..clone..Clone$GT$::clone::h9a15dbee266a04f3(&var_cf8, &var_1698, rdx));
    int128_t var_1608 = var_16f0;
    alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, arg3, 
        &var_cf8, &var_1608, &var_478, 1, 1);
    int64_t var_1568;
    
    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) != 0xffff)
    {
        int64_t r13_1 = var_1578;
        void var_1560;
        void var_8a0;
        int64_t* rdx_3 = memcpy(&var_8a0, &var_1560, 0x428);
        uint64_t var_8b0_1 = rax;
        int64_t var_8b8 = r13_1;
        int64_t var_8a8_1 = var_1568;
        void* var_608;
        uint64_t rbp_2 = *(var_608 + 0x182);
        _$LT$regex_automata..nfa..thompson..compiler..Config$u20$as$u20$core..clone..Clone$GT$::clone::h8690ea4c360f1c56(&var_1608, &var_16e0, 
            _$LT$regex_automata..hybrid..dfa..Config$u20$as$u20$core..clone..Clone$GT$::clone::h9a15dbee266a04f3(&var_cf8, &var_1698, rdx_3));
        int128_t var_16c8 = var_16f0;
        alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, arg3, 
            &var_cf8, &var_16c8, &var_1608, 0, rbp_2);
        
        if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) != 0xffff)
        {
            int64_t r13_2 = var_1578;
            char var_16b0_1 = rbp_2;
            void var_460;
            int64_t* rdx_6 = memcpy(&var_460, &var_1560, 0x428);
            uint64_t var_470_1 = rax;
            var_478 = r13_2;
            int64_t var_468_1 = var_1568;
            _$LT$regex_automata..nfa..thompson..compiler..Config$u20$as$u20$core..clone..Clone$GT$::clone::h8690ea4c360f1c56(&var_16c8, &var_16e0, 
                _$LT$regex_automata..hybrid..dfa..Config$u20$as$u20$core..clone..Clone$GT$::clone::h9a15dbee266a04f3(&var_1608, &var_1698, rdx_6));
            int128_t var_16a8 = var_16f0;
            alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, 
                arg3, &var_1608, &var_16a8, &var_16c8, 1, var_16b0_1);
            
            if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) == 0xffff)
            {
                arg1[2] = var_1568;
                arg1[1] = 0;
                *arg1 = 2;
                rbp_2 = 1;
                core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_478);
                goto label_9be1e7;
            }
            
            int64_t rbp_3 = var_1578;
            void var_ce0;
            memcpy(&var_ce0, &var_1560, 0x428);
            uint64_t var_cf0_1 = rax;
            var_cf8 = rbp_3;
            int64_t var_ce8_1 = var_1568;
            memcpy(&var_1608, &var_1698, 0x90);
            int64_t var_16b8_1 = var_16d0;
            var_16c8 = var_16e0;
            alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, 
                arg3, &var_1608, &var_16f0, &var_16c8, 0, 1);
            
            if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) == 0xffff)
            {
                arg1[2] = var_1568;
                arg1[1] = 0;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_cf8);
                rbp_2 = 0;
                core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_478);
                goto label_9be1e7;
            }
            
            int64_t r12_3 = var_1578;
            memcpy(&arg1[0x113], &var_1560, 0x428);
            memcpy(&var_1578, &var_478, 0x440);
            void var_1138;
            memcpy(&var_1138, &var_8b8, 0x440);
            memcpy(&arg1[0x198], &var_cf8, 0x440);
            memcpy(arg1, &var_1578, 0x880);
            arg1[0x111] = rax;
            arg1[0x110] = r12_3;
            arg1[0x112] = var_1568;
        }
        else
        {
            arg1[2] = var_1568;
            arg1[1] = 0;
            *arg1 = 2;
            rbp_2 = 1;
            label_9be1e7:
            core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_8b8);
            
            if (rbp_2)
                core::ptr::drop_in_place$LT$regex_automata..hybrid..dfa..Config$GT$::h3c86da7dccd3485a(&var_1698);
        }
    }
    else
    {
        arg1[2] = var_1568;
        arg1[1] = 0;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$regex_automata..hybrid..dfa..Config$GT$::h3c86da7dccd3485a(
            &var_1698);
    }
    return arg1;
}
