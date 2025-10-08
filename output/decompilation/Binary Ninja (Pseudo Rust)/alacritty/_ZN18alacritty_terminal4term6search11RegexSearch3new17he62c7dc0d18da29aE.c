
  fn alacritty_terminal::term::search::RegexSearch::new::he62c7dc0d18da29a(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let var_1030: i64 = 0;
    let rax: u64 = arg2 + arg3;
    let mut var_1578: i64 = arg2;
    let mut rax_1: i8;
    let mut rdx: *mut i64;
    rax_1 = core::iter::traits::iterator::Iterator::try_fold::hdefa6ae3da21c884(&var_1578);
    let rax_2: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h136c1d6fa65c5a1c(rax_1) ^ 1;
    let mut var_16f0: i32 = 0xfa;
    let var_16ec: i8 = 0xa;
    let var_16eb: i8 = rax_2;
    let var_16ea: i32 = 0;
    let var_16e6: i8 = 0;
    let var_16e5: i16 = 0x101;
    let var_16e3: i8 = 0;
    let mut var_1698: i128 = {0};
    let var_1668: i64 = 0;
    let mut var_1658: i64;
    __builtin_memcpy(&var_1658, 
        "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00", 0x20);
    let var_1620: i8 = 3;
    let var_1618: i32 = 0x2020202;
    let var_1614: i16 = 0x202;
    let mut var_16e0: i64 = 1;
    let var_16d8: i64 = 0x200000;
    let var_16d0: i8 = 0;
    let var_16ce: i32 = 0x3020202;
    let mut var_cf8: i64;
    let mut var_478: i64;
    _$LT$regex_automata..nfa..thompson..compiler..Config$u20$as$u20$core..clone..Clone$GT$::clone::h8690ea4c360f1c56(&var_478, &var_16e0, 
        _$LT$regex_automata..hybrid..dfa..Config$u20$as$u20$core..clone..Clone$GT$::clone::h9a15dbee266a04f3(&var_cf8, &var_1698, rdx));
    let mut var_1608: i128 = var_16f0;
    alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, arg3, 
        &var_cf8, &var_1608, &var_478, 1, 1);
    let var_1568: i64;
    
    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) != 0xffff
    {
        let r13_1: i64 = var_1578;
        let mut var_1560: ();
        let mut var_8a0: ();
        let rdx_3: *mut i64 = memcpy(&var_8a0, &var_1560, 0x428);
        let var_8b0_1: u64 = rax;
        let mut var_8b8: i64 = r13_1;
        let var_8a8_1: i64 = var_1568;
        let var_608: *mut c_void;
        let mut rbp_2: u64 = *var_608.byte_offset(0x182);
        _$LT$regex_automata..nfa..thompson..compiler..Config$u20$as$u20$core..clone..Clone$GT$::clone::h8690ea4c360f1c56(&var_1608, &var_16e0, 
            _$LT$regex_automata..hybrid..dfa..Config$u20$as$u20$core..clone..Clone$GT$::clone::h9a15dbee266a04f3(&var_cf8, &var_1698, rdx_3));
        let mut var_16c8: i128 = var_16f0;
        alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, arg3, 
            &var_cf8, &var_16c8, &var_1608, 0, rbp_2);
        
        if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) != 0xffff
        {
            let r13_2: i64 = var_1578;
            let var_16b0_1: i8 = rbp_2;
            let mut var_460: ();
            let rdx_6: *mut i64 = memcpy(&var_460, &var_1560, 0x428);
            let var_470_1: u64 = rax;
            var_478 = r13_2;
            let var_468_1: i64 = var_1568;
            _$LT$regex_automata..nfa..thompson..compiler..Config$u20$as$u20$core..clone..Clone$GT$::clone::h8690ea4c360f1c56(&var_16c8, &var_16e0, 
                _$LT$regex_automata..hybrid..dfa..Config$u20$as$u20$core..clone..Clone$GT$::clone::h9a15dbee266a04f3(&var_1608, &var_1698, rdx_6));
            let mut var_16a8: i128 = var_16f0;
            alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, 
                arg3, &var_1608, &var_16a8, &var_16c8, 1, var_16b0_1);
            
            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) == 0xffff
            {
                arg1[2] = var_1568;
                arg1[1] = 0;
                *arg1 = 2;
                rbp_2 = 1;
                core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_478);
                goto 'label_9be1e7;
            }
            
            let rbp_3: i64 = var_1578;
            let mut var_ce0: ();
            memcpy(&var_ce0, &var_1560, 0x428);
            let var_cf0_1: u64 = rax;
            var_cf8 = rbp_3;
            let var_ce8_1: i64 = var_1568;
            memcpy(&var_1608, &var_1698, 0x90);
            let var_16b8_1: i64 = var_16d0;
            var_16c8 = var_16e0;
            alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(&var_1578, arg2, 
                arg3, &var_1608, &var_16f0, &var_16c8, 0, 1);
            
            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_1578, data_4e8640)) == 0xffff
            {
                arg1[2] = var_1568;
                arg1[1] = 0;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_cf8);
                rbp_2 = 0;
                core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_478);
                goto 'label_9be1e7;
            }
            
            let r12_3: i64 = var_1578;
            memcpy(&arg1[0x113], &var_1560, 0x428);
            memcpy(&var_1578, &var_478, 0x440);
            let mut var_1138: ();
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
            'label_9be1e7:
            core::ptr::drop_in_place$LT$alacritty_terminal..term..search..LazyDfa$GT$::h68ae3f07dc860637(&var_8b8);
            
            if rbp_2 != 0
            {
                core::ptr::drop_in_place$LT$regex_automata..hybrid..dfa..Config$GT$::h3c86da7dccd3485a(&var_1698);
            }
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
    arg1
}
