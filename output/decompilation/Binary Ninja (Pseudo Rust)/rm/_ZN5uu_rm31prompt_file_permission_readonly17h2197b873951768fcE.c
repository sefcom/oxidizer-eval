
  fn uu_rm::prompt_file_permission_readonly::h2197b873951768fc(arg1: i64) -> u64

{
    let mut var_e0: i32;
    std::fs::metadata::h6df0603967c240bb(&var_e0, arg1);
    let mut rbp: u64;
    let mut var_150: *mut c_void;
    let mut var_120: *mut i64;
    let mut var_108: *mut i64;
    let mut var_e8: *mut c_void;
    let rsi: i64;
    
    if var_e0 != 2
    {
        rbp = 1;
        let var_a8: i8;
        
        if (var_a8 & 0x92) == 0
        {
            let var_90: i64;
            
            if var_90 != 0
            {
                goto 'label_4b8f42;
            }
            
            let mut rax_4: *mut i64;
            let mut rdx_2: i64;
            rax_4 = uucore::util_name::h60d842bf27b05e82();
            var_108 = rax_4;
            let var_100_3: i64 = rdx_2;
            var_120 = &var_108;
            let var_118_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_150 = &data_527970;
            let var_148_4: i64 = 2;
            let var_130_3: i64 = 0;
            let var_140_4: *mut *mut i64 = &var_120;
            let var_138_3: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            var_108 = 1;
            let var_100_4: i64 = arg1;
            let var_f8_2: i64 = rsi;
            let var_f0_2: i8 = 1;
            var_120 = &var_108;
            let var_118_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_150 = &data_527b78;
            let var_148_5: i64 = 2;
            let var_130_4: i64 = 0;
            let var_140_5: *mut *mut i64 = &var_120;
            let mut var_138_4: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            var_150 = &data_527b08;
            let var_148_6: i64 = 1;
            let var_140_6: i64 = 8;
            var_138_4 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            var_e8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                &var_e8);
            rbp = uucore::read_yes::hc350e858ab85cf03();
        }
    }
    else
    {
        'label_4b8f42:
        let mut rax_1: *mut i64;
        let mut rdx_1: i64;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_108 = rax_1;
        let var_100_1: i64 = rdx_1;
        var_120 = &var_108;
        let var_118_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        var_150 = &data_527970;
        let var_148_1: i64 = 2;
        let var_130_1: i64 = 0;
        let var_140_1: *mut *mut i64 = &var_120;
        let var_138_1: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
        var_108 = 1;
        let var_100_2: i64 = arg1;
        let var_f8_1: i64 = rsi;
        let var_f0_1: i8 = 1;
        var_120 = &var_108;
        let var_118_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_150 = &data_527b98;
        let var_148_2: i64 = 2;
        let var_130_2: i64 = 0;
        let var_140_2: *mut *mut i64 = &var_120;
        let mut var_138_2: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
        var_150 = &data_527b08;
        let var_148_3: i64 = 1;
        let var_140_3: i64 = 8;
        var_138_2 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
        var_e8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
            &var_e8);
        rbp = uucore::read_yes::hc350e858ab85cf03();
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
    rbp
}
