
  fn firecracker::api_server_adapter::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..api_server_adapter..ApiServerError$GT$::fmt::h22087e31d924a348(arg1: *mut i8, arg2: i64, arg3: i64) -> i64

{
    let rax: i8 = *arg1 - 0x1c;
    let mut rcx: i8 = 4;
    
    if rax < 4
    {
        rcx = rax;
    }
    
    let mut var_48: *mut c_void;
    let mut var_40: *mut *mut c_void;
    let mut var_30: *mut *mut [i8; 0xca];
    let mut var_28: i64;
    let mut var_28_1: i64;
    
    match rcx
    {
        0 =>
        {
            var_48 = &arg1[8];
            var_40 = &var_48;
            let var_38: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab697a8642e9c9e1;
            var_30 = &data_7a4338;
            var_28 = 2;
        }
        1 =>
        {
            var_48 = &arg1[1];
            var_40 = &var_48;
            let var_38_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h0d8937d31288cb39;
            var_30 = &data_7a4358;
            var_28_1 = 1;
        }
        2 =>
        {
            var_48 = &arg1[8];
            var_40 = &var_48;
            let var_38_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6d91c61c63b782e8;
            var_30 = &data_7a4368;
            var_28 = 2;
        }
        3 =>
        {
            var_48 = &arg1[8];
            var_40 = &var_48;
            let var_38_3: fn(arg1: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h584920b91f85c053;
            var_30 = &data_7a4388;
            var_28_1 = 1;
        }
        4 =>
        {
            var_48 = arg1;
            var_40 = &var_48;
            let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e3a3e8366703feb;
            var_30 = &data_7a4398;
            var_28_1 = 1;
        }
    }
    
    let var_10: i64 = 0;
    let var_20: *mut *mut *mut c_void = &var_40;
    let var_18: i64 = 1;
    core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg2, arg3, &var_30)
}
