
  int64_t alacritty::config::monitor::ConfigMonitor::new::h96fda481c32d2708(int64_t* arg1, int64_t* arg2, int128_t* arg3)

{
    int64_t rsi = arg2[2];
    
    if (!rsi)
        *arg1 = 2;
    else
    {
        int64_t rax_1;
        int64_t result;
        rax_1 =
            alacritty::config::monitor::ConfigMonitor::hash_paths::hbd080233d0377b89(arg2[1], rsi);
        alloc::vec::Vec$LT$T$C$A$GT$::retain::h86b2cad77c8bfd24(arg2);
        int64_t r14_1 = arg2[2];
        int64_t var_128;
        
        if (r14_1)
        {
            void* r15_1 = nullptr;
            int64_t rbp_1 = 0;
            
            do
            {
                int64_t rsi_1 = arg2[2];
                
                if (rbp_1 >= rsi_1)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, rsi_1);
                    /* no return */
                }
                
                int64_t rax_2 = arg2[1];
                *(rax_2 + r15_1 + 0x10);
                int64_t var_1c0;
                std::fs::canonicalize::h279041e27d4d2757(&var_1c0, *(rax_2 + r15_1 + 8));
                
                if (0 + -(var_1c0))
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h4f25adca7e67d4af(&var_1c0);
                else
                {
                    int64_t rsi_3 = arg2[2];
                    
                    if (rbp_1 >= rsi_3)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, rsi_3);
                        /* no return */
                    }
                    
                    int64_t rax_3 = arg2[1];
                    *(rax_3 + r15_1 + 0x10);
                    std::fs::symlink_metadata::hadb4ace2feded69c(&var_128, *(rax_3 + r15_1 + 8));
                    int32_t var_f0;
                    
                    if (var_128 == 2 || (var_f0 & 0xf000) != 0xa000)
                    {
                        int64_t rsi_6 = arg2[2];
                        
                        if (rbp_1 >= rsi_6)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, rsi_6);
                            /* no return */
                        }
                        
                        int128_t* r13_1 = arg2[1];
                        core::mem::drop::ha42964a555fb617b(r15_1 + r13_1);
                        int64_t var_1b0;
                        *(r13_1 + r15_1 + 0x10) = var_1b0;
                        *(r13_1 + r15_1) = var_1c0;
                    }
                    else
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h86a2df8af84df241(arg2, &var_1c0);
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h672bb05c96f66e9c(&var_128);
                }
                
                rbp_1 += 1;
                r15_1 += 0x18;
            } while (r14_1 != rbp_1);
        }
        
        std::sync::mpmc::channel::h6d7b3e627ab95b12(&var_128);
        int64_t rdi_9 = var_128;
        int64_t var_1e0 = rdi_9;
        void* var_120;
        void* var_1d8_1 = var_120;
        int128_t var_118;
        int128_t var_1a8 = var_118;
        int64_t rax_7;
        int64_t rdx_3;
        rax_7 = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h054a57b759326448(rdi_9, var_120);
        int32_t var_160;
        _$LT$notify..inotify..INotifyWatcher$u20$as$u20$notify..Watcher$GT$::new::h7fc8a9077e86addc(
            &var_160, rax_7, rdx_3, 1);
        int128_t var_150;
        
        if (var_160 == 6)
        {
            int64_t var_f8_1 = *var_150[8];
            int128_t var_158;
            int128_t var_108_1 = var_158;
            int128_t var_e0_1 = *arg2;
            int64_t var_d0_1 = arg2[2];
            int128_t var_f0_1 = var_1a8;
            var_128 = *arg3;
            int128_t var_118_1 = arg3[1];
            int128_t var_48;
            alacritty_terminal::thread::spawn_named::hdc7b5c4acab1b797(&var_48, &var_128);
            int128_t zmm0_4 = var_1e0;
            *(arg1 + 0x20) = var_48;
            int64_t var_38;
            arg1[6] = var_38;
            *arg1 = rax_1;
            arg1[1] = result;
            *(arg1 + 0x10) = zmm0_4;
            return result;
        }
        
        int64_t var_130;
        int64_t var_f8_2 = var_130;
        int128_t var_140;
        int128_t var_108_2 = var_140;
        int128_t var_118_2 = var_150;
        var_128 = var_160;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
        {
            int64_t* var_198 = &var_128;
            uint64_t (* var_190_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hdd5302eff3d89185;
            void** const var_78 = &data_c81820;
            int64_t var_70_1 = 1;
            int64_t var_58_1 = 0;
            int64_t** var_68_1 = &var_198;
            int64_t var_60_1 = 1;
            int64_t rax_15 = log::__private_api::loc::h250021ea1f26630a(&data_c81830);
            char const* const var_188 = "alacritty::config::monitorUnable…";
            int64_t var_180_1 = 0x1a;
            char const* const var_178_1 = "alacritty::config::monitorUnable…";
            int64_t var_170_1 = 0x1a;
            int64_t var_168_1 = rax_15;
            log::__private_api::log::h0b6680b994d742b1(&var_78, 1, &var_188);
        }
        
        *arg1 = 2;
        core::ptr::drop_in_place$LT$notify..error..Error$GT$::hab2d02a34d5b0d48(&var_128);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::hf8e11df65a81c312(&var_1a8);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h8bc93518eb327d21(&var_1e0);
    }
    
    core::ptr::drop_in_place$LT$winit..event_loop..EventLoopProxy$LT$alacritty..event..Event$GT$$GT$::h24ae1d3a938ce77b(arg3);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h246198f168725160(arg2);
}
