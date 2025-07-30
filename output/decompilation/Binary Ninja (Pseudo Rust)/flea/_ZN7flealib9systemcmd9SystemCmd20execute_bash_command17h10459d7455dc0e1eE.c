
  fn flealib::systemcmd::SystemCmd::execute_bash_command::h10459d7455dc0e1e(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> *mut i128

{
    let mut r14: i64 = arg4;
    let mut r15: i64 = arg3;
    let mut var_2c8: i64 = arg3;
    let mut var_318: *mut i64;
    let mut var_288: *const i8;
    let mut var_280: i64;
    let mut var_278: *const i8;
    let mut var_268: i64;
    let mut var_1e0: *mut *mut i64;
    let mut var_1d8: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
    let mut var_178: *mut *mut [i8; 0x41];
    let mut var_168: *mut *mut *mut i64;
    
    if core::sync::atomic::atomic_load::h8980141092664382() >= 4
    {
        var_318 = &var_2c8;
        var_1e0 = &var_318;
        var_1d8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h12cd30248a4f3866;
        var_178 = &data_b08f50;
        let var_170_1: i64 = 1;
        let var_158_1: i64 = 0;
        var_168 = &var_1e0;
        let var_160_1: i64 = 1;
        let rax_1: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b08fb0);
        var_288 = "flealib::systemcmd/root/.rustup/…";
        var_280 = 0x12;
        var_278 = "flealib::systemcmd/root/.rustup/…";
        let var_270_1: i64 = 0x12;
        var_268 = rax_1;
        log::__private_api::log::hd2d1d5843cf283e9(&var_178, 4, &var_288);
        r15 = var_2c8;
        r14 = arg4;
    }
    
    let mut var_a8: ();
    core::str::pattern::StrSearcher::new::haa0b969b3b6bc6fa(&var_a8, r15, r14, 
        "cd Use 'cd' command to change a …", 3);
    let var_40: i64 = 0;
    let var_38: i64 = r14;
    let var_30: i16 = 1;
    let mut var_220: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf1f22c0a078c0456(&var_220, &var_a8);
    let var_210: i64;
    
    if var_210 <= 1
    {
        std::process::Command::new::h9aa1e52e6d375bda(&var_178, var_2c8);
        let r13: i64;
        let rdx_4: i64 = std::process::Command::output::h4740011ae85f8c25(&var_1e0, r13);
        
        if !(0 + -(var_1e0))
        {
            let var_1b0: i64;
            let mut var_258: i64 = var_1b0;
            let var_1c0: i128;
            var_268 = var_1c0;
            let var_1d0: i128;
            var_278 = var_1d0;
            var_288 = var_1e0;
            let mut var_2b8: *mut i64 = &var_258;
            let var_2b0_1: fn() -> i64 = _$LT$std..process..ExitStatus$u20$as$u20$core..fmt..Display$GT$::fmt::h67b55ee36be5463b;
            var_318 = &data_b08f60;
            let var_310_1: i64 = 2;
            let var_2f8_1: i64 = 0;
            let var_308_1: *mut *mut i64 = &var_2b8;
            let var_300_1: i64 = 1;
            let mut var_1a8: i128;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_1a8, &var_318);
            let mut var_208: i128 = var_1a8;
            let var_198: i64;
            let var_1f8_1: i64 = var_198;
            let var_260: u64;
            alloc::string::String::from_utf8_lossy::h44ed577670f061c9(&var_2b8, var_268, var_260);
            let var_2a8: u64;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_318, var_2b0_1, var_2a8);
            let var_2d8_1: *mut *mut i64 = var_308_1;
            let mut var_2e8: i128 = var_318;
            let mut var_238: *mut i128 = &var_2e8;
            let var_230_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_318 = &data_b08f80;
            let var_310_2: i64 = 2;
            let var_2f8_2: i64 = 0;
            let var_308_2: *mut *mut i128 = &var_238;
            let var_300_2: i64 = 1;
            let mut var_250: i128;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_250, &var_318);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_2e8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb29927c53dd8f325(
                &var_2b8);
            var_238 = var_250;
            let var_240: i64;
            let var_228_1: i64 = var_240;
            alloc::string::String::from_utf8_lossy::h44ed577670f061c9(&var_2b8, var_280, var_278);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_318, var_2b0_1, var_2a8);
            let var_2d8_2: *mut *mut i128 = var_308_2;
            var_2e8 = var_318;
            let mut var_1f0: *mut i128 = &var_2e8;
            let var_1e8_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_318 = &data_b08fa0;
            let var_310_3: i64 = 1;
            let var_2f8_3: i64 = 0;
            let var_308_3: *mut *mut i128 = &var_1f0;
            let var_300_3: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_250, &var_318);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_2e8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb29927c53dd8f325(
                &var_2b8);
            var_2e8 = var_250;
            let var_2d8_3: i64 = var_240;
            var_318 = &var_208;
            let var_310_4: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            let var_308_4: *mut *mut i128 = &var_238;
            let var_300_4: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            let var_2f8_4: *mut i128 = &var_2e8;
            let var_2f0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_2b8 = &data_46a830;
            let var_2b0_2: i64 = 3;
            let var_298_1: i64 = 0;
            let var_2a8_1: *mut *mut i64 = &var_318;
            let var_2a0_1: i64 = 3;
            let mut var_190: i128;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_190, &var_2b8);
            let var_180: i64;
            arg1[1] = var_180;
            *arg1 = var_190;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_2e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_238);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::hfbac92b66ab59709(&var_288);
        }
        else
        {
            var_288 = var_1d8;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
                arg1, &var_288, rdx_4);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(var_1d8);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb30d824733ae43be(&var_220);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h9f27e060e11473c7(&var_178);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_178, 
            "Use 'cd' command to change a dir…", 0x26);
        arg1[1] = var_168;
        *arg1 = var_178;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb30d824733ae43be(&var_220);
    }
    
    arg1
}
