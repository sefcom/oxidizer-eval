
  fn uu_tail::follow::watch::Observer::start::he8e1aec2764f4c71(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    if *arg2.byte_offset(0x4c) == 2
    {
        return 0;
    }
    
    let mut var_1c8: *mut c_void;
    std::sync::mpmc::channel::h864b4d4a8958682f(&var_1c8);
    let rbp_1: *mut c_void = var_1c8;
    let mut var_1b8: i64;
    let mut r12_1: i64 = var_1b8;
    let var_b8_1: *mut c_void = rbp_1;
    let var_1c0: *mut c_void;
    let var_b0_1: *mut c_void = var_1c0;
    let mut var_178: i64 = r12_1;
    let rcx_1: i32 = *arg2.byte_offset(0x38);
    let mut var_110: i64 = *arg2.byte_offset(0x30);
    let var_108_1: i32 = rcx_1;
    let var_100_1: i16 = 0x101;
    let mut rbp_2: i64;
    let mut r13_2: u64;
    let mut r15_4: *mut *mut c_void;
    let var_1b0: i64;
    let mut var_f8: i128;
    
    if *arg1.byte_offset(0x8d) == 0
    {
        let mut r15: i64;
        r15 = 1;
        let mut rax_4: i64;
        let mut rdx_3: i64;
        rax_4 = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1cf49cde8d1e9983(rbp_1, var_1c0);
        let mut var_168: i64 = rax_4;
        let var_160_1: i64 = rdx_3;
        let mut var_158: i32;
        _$LT$notify..inotify..INotifyWatcher$u20$as$u20$notify..Watcher$GT$::new::h4c9e11e1092b07a8(
            &var_158, rbp_1, var_1c0, 1);
        let var_150: i128;
        
        if var_158 != 6
        {
            let mut rax_5: i32;
            rax_5 = 1;
            let var_1cc_2: i32 = rax_5;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hac9ec7b82eebf25b(
                &var_1c8, &var_158);
            let rax_8: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4c5f044eca67b541(var_1c0, 
                var_1b8, "Too many open files cannot be us…", 0x13);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_1c8);
            let var_138: i128;
            let var_128: i64;
            
            if rax_8 == 0
            {
                let var_198_1: i64 = var_128;
                let var_1a8_1: i128 = var_138;
                var_1b8 = var_150;
                var_1c8 = var_158;
                let mut var_80: i128;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hac9ec7b82eebf25b(&var_80, &var_1c8);
                let var_e0_1: i32 = 1;
                var_f8 = var_80;
                let var_70: i64;
                let var_e8_1: i64 = var_70;
                let result: u64 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_f8);
                let mut rax_14: u64;
                rax_14 = 1;
                let var_1cc_4: i32 = rax_14;
                core::ptr::drop_in_place$LT$notify..error..Error$GT$::hf2995e16b4f1d266(&var_1c8);
                core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h359f26b60c005f52(&var_168);
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h11c770775c11519a(&var_178);
                return result;
            }
            
            let var_38_1: i64 = var_128;
            let var_48_1: i128 = var_138;
            let var_58_1: i128 = var_150;
            let mut var_68: i128 = var_158;
            let mut rax_10: i64;
            let mut rdx_5: i64;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_f8 = rax_10;
            *var_f8[8] = rdx_5;
            let mut var_a8: *mut i128 = &var_f8;
            let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_1c8 = &data_5734a0;
            let var_1c0_1: i64 = 2;
            let mut var_1a8: i128;
            var_1a8 = 0;
            let var_1b8_1: *mut *mut i128 = &var_a8;
            let var_1b0_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
            var_f8 = &data_573510;
            *var_f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_1c8 = &data_5734c0;
            let var_1c0_2: i64 = 2;
            var_1a8 = 0;
            let var_1b8_2: *mut i128 = &var_f8;
            let var_1b0_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            *arg1.byte_offset(0x8d) = 1;
            notify::poll::PollWatcher::with_opt::h4a3ee0b7f3af5ecc(&var_1c8, rax_4, rdx_3, 
                &var_110);
            core::result::Result$LT$T$C$E$GT$::unwrap::hb047c03065406ba4(&var_f8, &var_1c8);
            let rax_11: u64 = alloc::boxed::Box$LT$T$GT$::new::h21983f8786ab1751(&var_f8);
            let mut rbp_8: i64;
            rbp_8 = 1;
            let var_1cc_3: i32 = 0;
            let mut r15_7: *mut i128;
            r15_7 = 1;
            core::ptr::drop_in_place$LT$notify..error..Error$GT$::hf2995e16b4f1d266(&var_68);
            r12_1 = var_178;
            rbp_2 = var_1b0;
            r15_4 = &data_573538;
            r13_2 = rax_11;
        }
        else
        {
            let var_140: i64;
            let var_88_1: i64 = var_140;
            let mut var_98: i128 = var_150;
            let mut rax_6: i64;
            rax_6 = 1;
            let var_1cc_1: i32 = rax_6;
            r13_2 = alloc::boxed::Box$LT$T$GT$::new::h3002b5d40d9d4b22(&var_98);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h359f26b60c005f52(&var_168);
            r15_4 = &data_5734e0;
            rbp_2 = var_1b0;
        }
    }
    else
    {
        *arg1.byte_offset(0x8d) = 1;
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
    uu_tail::follow::watch::Observer::init_files::h8692031d5a934069(arg1, *arg2.byte_offset(0x20), 
        *arg2.byte_offset(0x28))
}
