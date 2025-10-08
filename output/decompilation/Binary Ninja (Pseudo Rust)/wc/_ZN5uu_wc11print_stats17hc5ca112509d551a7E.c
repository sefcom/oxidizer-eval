
  fn uu_wc::print_stats::hc5ca112509d551a7(arg1: *mut c_void, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i64) -> ssize_t

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_b0: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_150: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b0);
    var_b0 = *arg1.byte_offset(0x1a);
    let var_a8: i64 = arg2[2];
    let var_a0: i8 = *arg1.byte_offset(0x1b);
    let var_98: i64 = arg2[3];
    let var_90: i8 = *arg1.byte_offset(0x19);
    let var_88: i64 = arg2[1];
    let var_80: i8 = *arg1.byte_offset(0x18);
    let var_78: i64 = *arg2;
    let var_70: i8 = *arg1.byte_offset(0x1c);
    let var_68: i64 = arg2[4];
    let mut var_148: *const i8 = 1;
    let var_140: i64 = 0;
    let mut var_f0: *mut *mut i64 = &var_b0;
    let mut var_60: *mut c_void;
    let var_e8: *mut i64 = &var_60;
    let mut i: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hb5039a33fc84877e(&var_f0);
    let mut var_130: *mut c_void;
    let mut var_e0: *mut i64;
    let mut result_1: ssize_t;
    
    if i != 0
    {
        let mut var_138: *mut c_void;
        
        if arg5 > 0xffff
        {
            var_138 = &i[8];
            var_130 = &data_4f9348;
            let var_128_3: i64 = 1;
            let var_120_3: i64 = 8;
            let var_118_2: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_130);
            /* no return */
        }
        
        do
        {
            var_138 = &i[8];
            var_e0 = &var_148;
            let var_d8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
            let var_d0_1: *mut *mut c_void = &var_138;
            let var_c8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2d159e5c1bc14aca;
            let var_c0_1: i64 = 0;
            let var_b8_1: i16 = arg5;
            var_60 = &data_41a470;
            let var_58_1: i64 = 2;
            let var_40_1: *const i8 = &data_41a5b0;
            let var_38_1: i64 = 2;
            let var_50_1: *mut *mut i64 = &var_e0;
            let var_48_1: i64 = 3;
            result_1 = std::io::Write::write_fmt::h441ee91dd5daaf10(&var_150, &var_60);
            
            if result_1 != 0
            {
                goto 'label_46a55e_1;
            }
            
            var_148 = " FilesDisabledextraStdinReprNotA…";
            let var_140_1: i64 = 1;
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hb5039a33fc84877e(&var_f0);
        } while i != 0;
    }
    
    let mut result: ssize_t;
    
    if arg3 == 0
    {
        'label_46a530:
        var_130 = &data_4f9358;
        let var_128_2: i64 = 1;
        let var_120_2: i64 = 8;
        let var_118_1: i128 = {0};
        result_1 = std::io::Write::write_fmt::h441ee91dd5daaf10(&var_150, &var_130);
        'label_46a55e:
        result = result_1;
    }
    else
    {
        var_e0 = &var_148;
        let var_d8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
        var_130 = &data_4187e0;
        let var_128_1: i64 = 1;
        let mut var_118: i128;
        *var_118[8] = 0;
        let var_120_1: *mut *mut i64 = &var_e0;
        var_118 = 1;
        result_1 = std::io::Write::write_fmt::h441ee91dd5daaf10(&var_150, &var_130);
        
        if result_1 != 0
        {
            'label_46a55e_1:
            result = result_1;
        }
        else
        {
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_150, arg3, arg4);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hb3c9186f2dd9bd85(-0x8000000000000000, arg3);
            
            if result == 0
            {
                goto 'label_46a530;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5259c003b4f186df(var_150);
    result
}
