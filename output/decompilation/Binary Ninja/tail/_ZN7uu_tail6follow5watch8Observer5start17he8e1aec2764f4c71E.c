
  uint64_t uu_tail::follow::watch::Observer::start::he8e1aec2764f4c71(int64_t* arg1, void* arg2)

{
    if (*(arg2 + 0x4c) == 2)
        return 0;
    
    void* const var_1c8;
    std::sync::mpmc::channel::h864b4d4a8958682f(&var_1c8);
    void* const rbp_1 = var_1c8;
    int64_t var_1b8;
    int64_t r12_1 = var_1b8;
    void* const var_b8_1 = rbp_1;
    void* var_1c0;
    void* var_b0_1 = var_1c0;
    int64_t var_178 = r12_1;
    int32_t rcx_1 = *(arg2 + 0x38);
    int64_t var_110 = *(arg2 + 0x30);
    int32_t var_108_1 = rcx_1;
    int16_t var_100_1 = 0x101;
    int64_t rbp_2;
    uint64_t r13_2;
    void** const r15_4;
    int64_t var_1b0;
    int128_t var_f8;
    
    if (!*(arg1 + 0x8d))
    {
        int64_t r15;
        r15 = 1;
        int64_t rax_4;
        int64_t rdx_3;
        rax_4 = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1cf49cde8d1e9983(rbp_1, var_1c0);
        int64_t var_168 = rax_4;
        int64_t var_160_1 = rdx_3;
        int32_t var_158;
        _$LT$notify..inotify..INotifyWatcher$u20$as$u20$notify..Watcher$GT$::new::h4c9e11e1092b07a8(
            &var_158, rbp_1, var_1c0, 1);
        int128_t var_150;
        
        if (var_158 != 6)
        {
            int32_t rax_5;
            rax_5 = 1;
            int32_t var_1cc_2 = rax_5;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hac9ec7b82eebf25b(
                &var_1c8, &var_158);
            char rax_8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4c5f044eca67b541(
                var_1c0, var_1b8, "Too many open files cannot be us…", 0x13);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_1c8);
            int128_t var_138;
            int64_t var_128;
            
            if (!rax_8)
            {
                int64_t var_198_1 = var_128;
                int128_t var_1a8_1 = var_138;
                var_1b8 = var_150;
                var_1c8 = var_158;
                int128_t var_80;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hac9ec7b82eebf25b(&var_80, &var_1c8);
                int32_t var_e0_1 = 1;
                var_f8 = var_80;
                int64_t var_70;
                int64_t var_e8_1 = var_70;
                uint64_t result = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_f8);
                uint64_t rax_14;
                rax_14 = 1;
                int32_t var_1cc_4 = rax_14;
                core::ptr::drop_in_place$LT$notify..error..Error$GT$::hf2995e16b4f1d266(&var_1c8);
                core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h359f26b60c005f52(&var_168);
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h11c770775c11519a(&var_178);
                return result;
            }
            
            int64_t var_38_1 = var_128;
            int128_t var_48_1 = var_138;
            int128_t var_58_1 = var_150;
            int128_t var_68 = var_158;
            int64_t rax_10;
            int64_t rdx_5;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_f8 = rax_10;
            *var_f8[8] = rdx_5;
            int128_t* var_a8 = &var_f8;
            int64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_1c8 = &data_5734a0;
            int64_t var_1c0_1 = 2;
            int128_t var_1a8;
            var_1a8 = 0;
            int128_t** var_1b8_1 = &var_a8;
            int64_t var_1b0_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
            var_f8 = &data_573510;
            *var_f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_1c8 = &data_5734c0;
            int64_t var_1c0_2 = 2;
            var_1a8 = 0;
            int128_t* var_1b8_2 = &var_f8;
            int64_t var_1b0_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            *(arg1 + 0x8d) = 1;
            notify::poll::PollWatcher::with_opt::h4a3ee0b7f3af5ecc(&var_1c8, rax_4, rdx_3, 
                &var_110);
            core::result::Result$LT$T$C$E$GT$::unwrap::hb047c03065406ba4(&var_f8, &var_1c8);
            uint64_t rax_11 = alloc::boxed::Box$LT$T$GT$::new::h21983f8786ab1751(&var_f8);
            int64_t rbp_8;
            rbp_8 = 1;
            int32_t var_1cc_3 = 0;
            int128_t* r15_7;
            r15_7 = 1;
            core::ptr::drop_in_place$LT$notify..error..Error$GT$::hf2995e16b4f1d266(&var_68);
            r12_1 = var_178;
            rbp_2 = var_1b0;
            r15_4 = &data_573538;
            r13_2 = rax_11;
        }
        else
        {
            int64_t var_140;
            int64_t var_88_1 = var_140;
            int128_t var_98 = var_150;
            int64_t rax_6;
            rax_6 = 1;
            int32_t var_1cc_1 = rax_6;
            r13_2 = alloc::boxed::Box$LT$T$GT$::new::h3002b5d40d9d4b22(&var_98);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h359f26b60c005f52(&var_168);
            r15_4 = &data_5734e0;
            rbp_2 = var_1b0;
        }
    }
    else
    {
        *(arg1 + 0x8d) = 1;
        notify::poll::PollWatcher::with_opt::h4a3ee0b7f3af5ecc(&var_1c8, rbp_1, var_1c0, &var_110);
        core::result::Result$LT$T$C$E$GT$::unwrap::hb047c03065406ba4(&var_f8, &var_1c8);
        r13_2 = alloc::boxed::Box$LT$T$GT$::new::h21983f8786ab1751(&var_f8);
        r15_4 = &data_573538;
        rbp_2 = var_1b0;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..watch..WatcherRx$GT$$GT$::hbe95e8c1645b997f(arg1);
    *arg1 = r12_1;
    arg1[1] = rbp_2;
    arg1[2] = r13_2;
    arg1[3] = r15_4;
    return uu_tail::follow::watch::Observer::init_files::h8692031d5a934069(arg1, *(arg2 + 0x20), 
        *(arg2 + 0x28));
}
