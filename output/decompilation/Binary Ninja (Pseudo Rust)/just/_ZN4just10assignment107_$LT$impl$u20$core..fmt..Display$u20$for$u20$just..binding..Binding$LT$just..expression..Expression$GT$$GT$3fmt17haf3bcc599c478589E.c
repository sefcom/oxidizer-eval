
  fn just::assignment::_$LT$impl$u20$core..fmt..Display$u20$for$u20$just..binding..Binding$LT$just..expression..Expression$GT$$GT$::fmt::haf3bcc599c478589(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let rbx: i64 = *arg2;
    let mut var_68: *mut *mut [i8; 0x8f];
    let mut var_50: i128;
    let mut result: i8;
    let mut rcx_1: i8;
    
    if *arg1.byte_offset(0xce) != 0
    {
        var_68 = &data_82db30;
        let var_60_1: i64 = 1;
        let var_58_1: i64 = 8;
        var_50 = {0};
        rcx_1 = core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(rbx, arg2[1], &var_68);
        result = 1;
    }
    
    if *arg1.byte_offset(0xce) == 0 || rcx_1 == 0
    {
        let mut r15_1: i64;
        
        if *arg1.byte_offset(0xcd) == 0
        {
            r15_1 = arg2[1];
            'label_656f91:
            let mut var_38: *mut c_void = arg1.byte_offset(0x80);
            let var_30_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
                _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
            let var_28_1: *mut c_void = arg1;
            let var_20_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$just..expression..Expression$u20$as$u20$core..fmt..Display$GT$::fmt::h422026afbfafb456;
            var_68 = &data_82db50;
            let var_60_3: i64 = 2;
            *var_50[8] = 0;
            let var_58_3: *mut *mut c_void = &var_38;
            var_50 = 2;
            return core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(rbx, r15_1, &var_68);
        }
        
        var_68 = &data_82db40;
        let var_60_2: i64 = 1;
        let var_58_2: i64 = 8;
        var_50 = {0};
        r15_1 = arg2[1];
        result = 1;
        
        if core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(rbx, r15_1, &var_68) == 0
        {
            goto 'label_656f91;
        }
    }
    
    result
}
