
  int128_t* uu_tail::follow::watch::Observer::start::h087097f796044307(int64_t* arg1, void* arg2)

{
    if (*(arg2 + 0x4c) != 2)
    {
        void* const var_1a8;
        std::sync::mpmc::channel::hb39d292c72ba59f2(&var_1a8);
        void* const rsi = var_1a8;
        void* const var_150 = rsi;
        int128_t var_198;
        int128_t var_140 = var_198;
        int32_t rcx_1 = *(arg2 + 0x38);
        int64_t var_b8 = *(arg2 + 0x30);
        int32_t var_b0_1 = rcx_1;
        char var_a8_1 = 1;
        void** const rbp_1;
        int128_t* r12_1;
        int64_t var_1a0;
        int128_t var_f8;
        int64_t rax_1;
        
        if (!*(arg1 + 0x8d))
        {
            rax_1 = 1;
            int32_t var_1ac_2 = rax_1;
            int64_t rax_3;
            int64_t rdx_3;
            rax_3 = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he3bb8bf0f49d09cb(&var_150);
            int64_t var_160 = rax_3;
            int32_t var_130;
            notify::inotify::INotifyWatcher::from_event_handler::h1b427b953399875e(&var_130, 
                alloc::boxed::Box$LT$T$GT$::new::h9cb43a7e31de0b76(var_150, var_1a0), &data_5bbe60);
            int128_t var_128;
            int64_t rbp;
            
            if (var_130 != 6)
            {
                rbp = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he673bc424d27c3c6(
                    &var_1a8, &var_130);
                int128_t var_110;
                int64_t var_100;
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he6168d552d6f5a75(
                    var_1a0, var_198, "Too many open files:  cannot be …", 0x13))
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(
                        &var_1a8);
                    int64_t var_178_1 = var_100;
                    int128_t var_188_1 = var_110;
                    int128_t var_198_1 = var_128;
                    var_1a8 = var_130;
                    int128_t var_48;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he673bc424d27c3c6(
                        &var_48, &var_1a8);
                    int32_t var_e0_1 = 1;
                    var_f8 = var_48;
                    int64_t var_38;
                    int64_t var_e8_1 = var_38;
                    int128_t* rax_14 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_f8);
                    rbp = 1;
                    int64_t r15_4;
                    r15_4 = 1;
                    core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(
                        &var_1a8);
                    int32_t rax_15;
                    rax_15 = 1;
                    int32_t var_1ac_5 = rax_15;
                    r15_4 = 1;
                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h17a7392371296524(&var_160);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h4b1460b00665841e(&var_140);
                    return rax_14;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_1a8);
                int64_t var_c8_1 = var_100;
                int128_t var_d8_1 = var_110;
                int64_t var_e8;
                var_e8 = var_128;
                var_f8 = var_130;
                rbp = 1;
                char const (** rax_9)[0xee];
                int64_t rdx_4;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                char const (** const var_90)[0xee] = rax_9;
                int64_t var_88_1 = rdx_4;
                int64_t* var_a0 = &var_90;
                int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_1a8 = &data_5bbe20;
                int64_t var_1a0_1 = 2;
                int128_t var_188;
                var_188 = 0;
                var_198 = &var_a0;
                *var_198[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1a8);
                var_90 = &data_5bbeb0;
                int64_t (* var_88_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_1a8 = &data_5bbe40;
                int64_t var_1a0_2 = 2;
                var_188 = 0;
                var_198 = &var_90;
                *var_198[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1a8);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                *(arg1 + 0x8d) = 1;
                notify::poll::PollWatcher::new::h19cc910e27923588(&var_1a8, var_160, rdx_3, 
                    &var_b8);
                core::result::Result$LT$T$C$E$GT$::unwrap::h6aea8ce2b2a2a3ed(&var_90, &var_1a8);
                int128_t* rax_10 = alloc::boxed::Box$LT$T$GT$::new::hf35e8fe7e9b38d9d(&var_90);
                int64_t* r15_5;
                r15_5 = 1;
                int64_t r13_7;
                r13_7 = 1;
                core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(&var_f8);
                rbp_1 = &data_5bbed8;
                r12_1 = rax_10;
            }
            else
            {
                int64_t var_118;
                int64_t var_58_1 = var_118;
                int128_t var_68 = var_128;
                rbp = 1;
                int128_t* rax_6;
                int32_t rcx_3;
                rax_6 = alloc::boxed::Box$LT$T$GT$::new::h627de0d4e117cca4(&var_68);
                rcx_3 = 1;
                int32_t var_1ac_3 = rcx_3;
                rbp_1 = &data_5bbe80;
                r12_1 = rax_6;
                int64_t r13_5;
                r13_5 = 1;
                int64_t r15_2;
                r15_2 = 1;
                core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h17a7392371296524(&var_160);
            }
        }
        else
        {
            *(arg1 + 0x8d) = 1;
            rax_1 = 1;
            int32_t var_1ac_1 = rax_1;
            int64_t r15;
            r15 = 1;
            notify::poll::PollWatcher::new::h19cc910e27923588(&var_1a8, rsi, var_1a0, &var_b8);
            r15 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h6aea8ce2b2a2a3ed(&var_f8, &var_1a8);
            r15 = 1;
            rbp_1 = &data_5bbed8;
            r12_1 = alloc::boxed::Box$LT$T$GT$::new::hf35e8fe7e9b38d9d(&var_f8);
        }
        int64_t r13_8 = var_140;
        int64_t r15_6 = *var_140[8];
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..watch..WatcherRx$GT$$GT$::h3f9e2dcc975b684b(arg1);
        *arg1 = r13_8;
        arg1[1] = r15_6;
        arg1[2] = r12_1;
        arg1[3] = rbp_1;
        r15_6 = 1;
        int32_t var_1ac_4 = 0;
        int128_t* rax_11 = uu_tail::follow::watch::Observer::init_files::ha6088192ed8373cd(arg1, 
            *(arg2 + 0x20), *(arg2 + 0x28));
        
        if (rax_11)
            return rax_11;
    }
    
    return nullptr;
}
