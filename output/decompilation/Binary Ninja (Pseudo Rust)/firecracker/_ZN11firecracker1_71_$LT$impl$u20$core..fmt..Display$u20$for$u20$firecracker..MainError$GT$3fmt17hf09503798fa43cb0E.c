
  fn firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..MainError$GT$::fmt::hf09503798fa43cb0(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut var_48: *mut c_void;
    let mut var_40: *mut *mut c_void;
    let mut var_30: *mut *mut [i8; 0xc0];
    let mut var_28: i64;
    let mut var_28_1: i64;
    
    match jump_table_432c58[*arg1]
    {
        0x12a79e =>
        {
            var_48 = &arg1[1];
            var_40 = &var_48;
            let var_38: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h20db9e2528698e96;
            var_30 = &data_7a44e8;
            var_28_1 = 1;
        }
        0x12a7c6 =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hef5350d189b8c06b;
            var_30 = &data_7a4538;
            var_28 = 2;
        }
        0x12a7eb =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf089241faf4d13ea;
            var_30 = &data_7a4598;
            var_28_1 = 1;
        }
        0x12a813 =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7ad42d9de8aa8b3;
            var_30 = &data_7a4508;
            var_28 = 2;
        }
        0x12a849 =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd1abce6647226bcc;
            var_30 = &data_7a4528;
            var_28_1 = 1;
        }
        0x12a871 =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_5: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbe630077d44f2803;
            var_30 = &data_7a4578;
            var_28_1 = 1;
        }
        0x12a899 =>
        {
            var_48 = &arg1[1];
            var_40 = &var_48;
            let var_38_6: fn(arg1: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9aa2b3a9746e0bf6;
            var_30 = &data_7a44f8;
            var_28_1 = 1;
        }
        0x12a8c1 =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_7: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3420d6ae442eb9a;
            var_30 = &data_7a4558;
            var_28_1 = 1;
        }
        0x12a8e6 =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_8: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd757056a640e9748;
            var_30 = &data_7a4568;
            var_28_1 = 1;
        }
        0x12a90b =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_9: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16c4aaa9d1687522;
            var_30 = &data_7a45a8;
            var_28_1 = 1;
        }
        0x12a930 =>
        {
            var_48 = &arg1[2];
            var_40 = &var_48;
            let var_38_10: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc06e60dd1751f749;
            var_30 = &data_7a4588;
            var_28_1 = 1;
        }
    }
    
    let var_10: i64 = 0;
    let var_20: *mut *mut *mut c_void = &var_40;
    let var_18: i64 = 1;
    core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(*arg2, arg2[1], &var_30)
}
