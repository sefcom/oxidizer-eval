
  fn uu_tail::follow::watch::Observer::start::h087097f796044307(arg1: *mut i64, arg2: *mut c_void) -> *mut i128

{
    if *arg2.byte_offset(0x4c) != 2
    {
        let mut var_1a8: *mut c_void;
        std::sync::mpmc::channel::hb39d292c72ba59f2(&var_1a8);
        let rsi: *mut c_void = var_1a8;
        let mut var_150: *mut c_void = rsi;
        let mut var_198: i128;
        let mut var_140: i128 = var_198;
        let rcx_1: i32 = *arg2.byte_offset(0x38);
        let mut var_b8: i64 = *arg2.byte_offset(0x30);
        let var_b0_1: i32 = rcx_1;
        let var_a8_1: i8 = 1;
        let mut rbp_1: *mut *mut c_void;
        let mut r12_1: *mut i128;
        let var_1a0: i64;
        let mut var_f8: i128;
        let mut rax_1: i64;
        
        if *arg1.byte_offset(0x8d) == 0
        {
            rax_1 = 1;
            let var_1ac_2: i32 = rax_1;
            let mut rax_3: i64;
            let mut rdx_3: i64;
            rax_3 = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he3bb8bf0f49d09cb(&var_150);
            let mut var_160: i64 = rax_3;
            let mut var_130: i32;
            notify::inotify::INotifyWatcher::from_event_handler::h1b427b953399875e(&var_130, 
                alloc::boxed::Box$LT$T$GT$::new::h9cb43a7e31de0b76(var_150, var_1a0), &data_5bbe60);
            let var_128: i128;
            let mut rbp: i64;
            
            if var_130 != 6
            {
                rbp = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he673bc424d27c3c6(
                    &var_1a8, &var_130);
                let var_110: i128;
                let var_100: i64;
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he6168d552d6f5a75(
                    var_1a0, var_198, "Too many open files:  cannot be …", 0x13) == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(
                        &var_1a8);
                    let var_178_1: i64 = var_100;
                    let var_188_1: i128 = var_110;
                    let var_198_1: i128 = var_128;
                    var_1a8 = var_130;
                    let mut var_48: i128;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he673bc424d27c3c6(
                        &var_48, &var_1a8);
                    let var_e0_1: i32 = 1;
                    var_f8 = var_48;
                    let var_38: i64;
                    let var_e8_1: i64 = var_38;
                    let rax_14: *mut i128 =
                        alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_f8);
                    rbp = 1;
                    let mut r15_4: i64;
                    r15_4 = 1;
                    core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(
                        &var_1a8);
                    let mut rax_15: i32;
                    rax_15 = 1;
                    let var_1ac_5: i32 = rax_15;
                    r15_4 = 1;
                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h17a7392371296524(&var_160);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h4b1460b00665841e(&var_140);
                    return rax_14;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_1a8);
                let var_c8_1: i64 = var_100;
                let var_d8_1: i128 = var_110;
                let mut var_e8: i64;
                var_e8 = var_128;
                var_f8 = var_130;
                rbp = 1;
                let mut rax_9: *mut *mut [i8; 0xee];
                let mut rdx_4: i64;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                let mut var_90: *mut *mut [i8; 0xee] = rax_9;
                let var_88_1: i64 = rdx_4;
                let mut var_a0: *mut i64 = &var_90;
                let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_1a8 = &data_5bbe20;
                let var_1a0_1: i64 = 2;
                let mut var_188: i128;
                var_188 = 0;
                var_198 = &var_a0;
                *var_198[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1a8);
                var_90 = &data_5bbeb0;
                let var_88_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_1a8 = &data_5bbe40;
                let var_1a0_2: i64 = 2;
                var_188 = 0;
                var_198 = &var_90;
                *var_198[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1a8);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                *arg1.byte_offset(0x8d) = 1;
                notify::poll::PollWatcher::new::h19cc910e27923588(&var_1a8, var_160, rdx_3, 
                    &var_b8);
                core::result::Result$LT$T$C$E$GT$::unwrap::h6aea8ce2b2a2a3ed(&var_90, &var_1a8);
                let rax_10: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::hf35e8fe7e9b38d9d(&var_90);
                let mut r15_5: *mut i64;
                r15_5 = 1;
                let mut r13_7: i64;
                r13_7 = 1;
                core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(&var_f8);
                rbp_1 = &data_5bbed8;
                r12_1 = rax_10;
            }
            else
            {
                let var_118: i64;
                let var_58_1: i64 = var_118;
                let mut var_68: i128 = var_128;
                rbp = 1;
                let mut rax_6: *mut i128;
                let mut rcx_3: i32;
                rax_6 = alloc::boxed::Box$LT$T$GT$::new::h627de0d4e117cca4(&var_68);
                rcx_3 = 1;
                let var_1ac_3: i32 = rcx_3;
                rbp_1 = &data_5bbe80;
                r12_1 = rax_6;
                let mut r13_5: i64;
                r13_5 = 1;
                let mut r15_2: i64;
                r15_2 = 1;
                core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h17a7392371296524(&var_160);
            }
        }
        else
        {
            *arg1.byte_offset(0x8d) = 1;
            rax_1 = 1;
            let var_1ac_1: i32 = rax_1;
            let mut r15: i64;
            r15 = 1;
            notify::poll::PollWatcher::new::h19cc910e27923588(&var_1a8, rsi, var_1a0, &var_b8);
            r15 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h6aea8ce2b2a2a3ed(&var_f8, &var_1a8);
            r15 = 1;
            rbp_1 = &data_5bbed8;
            r12_1 = alloc::boxed::Box$LT$T$GT$::new::hf35e8fe7e9b38d9d(&var_f8);
        }
        let r13_8: i64 = var_140;
        let mut r15_6: i64 = *var_140[8];
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..watch..WatcherRx$GT$$GT$::h3f9e2dcc975b684b(arg1);
        *arg1 = r13_8;
        arg1[1] = r15_6;
        arg1[2] = r12_1;
        arg1[3] = rbp_1;
        r15_6 = 1;
        let var_1ac_4: i32 = 0;
        let rax_11: *mut i128 = uu_tail::follow::watch::Observer::init_files::ha6088192ed8373cd(
            arg1, *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
        
        if rax_11 != 0
        {
            return rax_11;
        }
    }
    
    nullptr
}
