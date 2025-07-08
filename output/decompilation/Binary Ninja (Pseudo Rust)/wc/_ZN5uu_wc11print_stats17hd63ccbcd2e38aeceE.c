
  fn uu_wc::print_stats::hd63ccbcd2e38aece(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_120: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_190: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_120);
    let rcx_1: i64 = arg2[2];
    let rdx: i8 = *arg1.byte_offset(0x1b);
    let rsi: i64 = arg2[3];
    let rdi_1: i8 = *arg1.byte_offset(0x18);
    let r8_1: i8 = *arg1.byte_offset(0x19);
    let r9: i64 = *arg2;
    let r10: i64 = arg2[1];
    let r11: i8 = *arg1.byte_offset(0x1c);
    let rbx_1: i64 = arg2[4];
    let mut var_80: i8 = *arg1.byte_offset(0x1a);
    let var_78: i64 = rcx_1;
    let var_70: i8 = rdx;
    let var_68: i64 = rsi;
    let var_60: i8 = r8_1;
    let var_58: i64 = r10;
    let var_50: i8 = rdi_1;
    let var_48: i64 = r9;
    let var_40: i8 = r11;
    let var_38: i64 = rbx_1;
    let mut var_188: *const i8 = 1;
    let var_180: i64 = 0;
    let mut var_168: *mut i8 = &var_80;
    let mut __saved_rbx: i64;
    let var_160: *mut i64 = &__saved_rbx;
    let mut var_150: *mut i64;
    let mut var_108: i128;
    let mut var_b0: *mut c_void;
    let mut result: i64;
    
    for let mut i: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::ha2c1cf205952523e(&var_168); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::ha2c1cf205952523e(&var_168)
    {
        let mut var_158: *mut c_void = &i[8];
        var_150 = &var_188;
        let var_148_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
        let var_140_1: *mut *mut c_void = &var_158;
        let var_138_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h401438c70327895c;
        let r8: i64;
        let var_130_1: i64 = r8;
        let var_128_1: i64 = 0;
        var_120 = 2;
        let var_110_1: i64 = 2;
        *var_108[8] = 0;
        let var_f8_1: i64 = 0x20;
        let var_f0_1: i8 = 3;
        let var_e8_1: i64 = 2;
        let mut var_d8: i64;
        __builtin_memcpy(&var_d8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x21);
        var_b0 = &data_419ac8;
        let var_a8_1: i64 = 2;
        let var_90_1: *mut *mut i64 = &var_120;
        let var_88_1: i64 = 2;
        let var_a0_1: *mut *mut i64 = &var_150;
        let var_98_1: i64 = 3;
        let result_1: i64 = std::io::Write::write_fmt::h12d662560afab62b(&var_190, &var_b0);
        result = result_1;
        
        if result_1 != 0
        {
            goto 'label_4bdfee;
        }
        
        var_188 = " FilesDisabledextraStdinReprNotA…";
        let var_180_1: i64 = 1;
    }
    
    let mut result_2: i64;
    
    if arg3 == 0
    {
        var_120 = &data_5311f8;
        let var_118_2: i64 = 1;
        let var_110_3: i64 = 8;
        let var_108_1: i128 = {0};
        result_2 = std::io::Write::write_fmt::h12d662560afab62b(&var_190, &var_120);
    }
    else
    {
        var_b0 = arg3;
        let rcx: i64;
        let var_a8_2: i64 = rcx;
        var_150 = &var_188;
        let var_148_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
        let var_140_2: *const *mut c_void = &var_b0;
        let var_138_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
        var_120 = &data_531208;
        let var_118_1: i64 = 3;
        *var_108[8] = 0;
        let var_110_2: *mut *mut i64 = &var_150;
        var_108 = 2;
        result_2 = std::io::Write::write_fmt::h12d662560afab62b(&var_190, &var_120);
    }
    
    result = result_2;
    'label_4bdfee:
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hf5250da0ddf6b680(var_190);
    result
}
