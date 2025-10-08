
  fn alacritty::config::monitor::ConfigMonitor::new::h96fda481c32d2708(arg1: *mut i64, arg2: *mut i64, arg3: *mut i128) -> i64

{
    let rsi: i64 = arg2[2];
    
    if rsi == 0
    {
        *arg1 = 2;
    }
    else
    {
        let mut rax_1: i64;
        let mut result: i64;
        rax_1 =
            alacritty::config::monitor::ConfigMonitor::hash_paths::hbd080233d0377b89(arg2[1], rsi);
        alloc::vec::Vec$LT$T$C$A$GT$::retain::h86b2cad77c8bfd24(arg2);
        let r14_1: i64 = arg2[2];
        let mut var_128: i64;
        
        if r14_1 != 0
        {
            let mut r15_1: *mut c_void = nullptr;
            let mut rbp_1: i64 = 0;
            
            do
            {
                let rsi_1: i64 = arg2[2];
                
                if rbp_1 >= rsi_1
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, rsi_1);
                    /* no return */
                }
                
                let rax_2: i64 = arg2[1];
                *(rax_2 + r15_1).byte_offset(0x10);
                let mut var_1c0: i64;
                std::fs::canonicalize::h279041e27d4d2757(&var_1c0, *(rax_2 + r15_1).byte_offset(8));
                
                if 0 + -(var_1c0)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h4f25adca7e67d4af(&var_1c0);
                }
                else
                {
                    let rsi_3: i64 = arg2[2];
                    
                    if rbp_1 >= rsi_3
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, rsi_3);
                        /* no return */
                    }
                    
                    let rax_3: i64 = arg2[1];
                    *(rax_3 + r15_1).byte_offset(0x10);
                    std::fs::symlink_metadata::hadb4ace2feded69c(&var_128, 
                        *(rax_3 + r15_1).byte_offset(8));
                    let var_f0: i32;
                    
                    if var_128 == 2 || (var_f0 & 0xf000) != 0xa000
                    {
                        let rsi_6: i64 = arg2[2];
                        
                        if rbp_1 >= rsi_6
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, rsi_6);
                            /* no return */
                        }
                        
                        let r13_1: *mut i128 = arg2[1];
                        core::mem::drop::ha42964a555fb617b(r15_1.byte_offset(r13_1));
                        let var_1b0: i64;
                        *r13_1.byte_offset(r15_1).byte_offset(0x10) = var_1b0;
                        *r13_1.byte_offset(r15_1) = var_1c0;
                    }
                    else
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h86a2df8af84df241(arg2, &var_1c0);
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h672bb05c96f66e9c(&var_128);
                }
                
                rbp_1 += 1;
                r15_1 += 0x18;
            } while r14_1 != rbp_1;
        }
        
        std::sync::mpmc::channel::h6d7b3e627ab95b12(&var_128);
        let rdi_9: i64 = var_128;
        let mut var_1e0: i64 = rdi_9;
        let var_120: *mut c_void;
        let var_1d8_1: *mut c_void = var_120;
        let var_118: i128;
        let mut var_1a8: i128 = var_118;
        let mut rax_7: i64;
        let mut rdx_3: i64;
        rax_7 = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h054a57b759326448(rdi_9, var_120);
        let mut var_160: i32;
        _$LT$notify..inotify..INotifyWatcher$u20$as$u20$notify..Watcher$GT$::new::h7fc8a9077e86addc(
            &var_160, rax_7, rdx_3, 1);
        let var_150: i128;
        
        if var_160 == 6
        {
            let var_f8_1: i64 = *var_150[8];
            let var_158: i128;
            let var_108_1: i128 = var_158;
            let var_e0_1: i128 = *arg2;
            let var_d0_1: i64 = arg2[2];
            let var_f0_1: i128 = var_1a8;
            var_128 = *arg3;
            let var_118_1: i128 = arg3[1];
            let mut var_48: i128;
            alacritty_terminal::thread::spawn_named::hdc7b5c4acab1b797(&var_48, &var_128);
            let zmm0_4: i128 = var_1e0;
            *arg1.byte_offset(0x20) = var_48;
            let var_38: i64;
            arg1[6] = var_38;
            *arg1 = rax_1;
            arg1[1] = result;
            *arg1.byte_offset(0x10) = zmm0_4;
            return result;
        }
        
        let var_130: i64;
        let var_f8_2: i64 = var_130;
        let var_140: i128;
        let var_108_2: i128 = var_140;
        let var_118_2: i128 = var_150;
        var_128 = var_160;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
        {
            let mut var_198: *mut i64 = &var_128;
            let var_190_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 =
                _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hdd5302eff3d89185;
            let mut var_78: *mut *mut c_void = &data_c81820;
            let var_70_1: i64 = 1;
            let var_58_1: i64 = 0;
            let var_68_1: *mut *mut i64 = &var_198;
            let var_60_1: i64 = 1;
            let rax_15: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81830);
            let mut var_188: *const i8 = "alacritty::config::monitorUnable…";
            let var_180_1: i64 = 0x1a;
            let var_178_1: *const i8 = "alacritty::config::monitorUnable…";
            let var_170_1: i64 = 0x1a;
            let var_168_1: i64 = rax_15;
            log::__private_api::log::h0b6680b994d742b1(&var_78, 1, &var_188);
        }
        
        *arg1 = 2;
        core::ptr::drop_in_place$LT$notify..error..Error$GT$::hab2d02a34d5b0d48(&var_128);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::hf8e11df65a81c312(&var_1a8);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h8bc93518eb327d21(&var_1e0);
    }
    
    core::ptr::drop_in_place$LT$winit..event_loop..EventLoopProxy$LT$alacritty..event..Event$GT$$GT$::h24ae1d3a938ce77b(arg3);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h246198f168725160(
        arg2)
}
