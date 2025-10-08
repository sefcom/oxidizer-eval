
  fn uu_ptx::tex_mapper::hd768aedacd7db151(arg1: *mut i64, arg2: i32) -> *mut i128

{
    let mut var_4c: i32 = arg2;
    let mut var_48: *mut i32;
    let mut var_38: *mut *mut [i8; 0x9f];
    
    if arg2 - 0x23 < 4
    {
        'label_52cd8f:
        var_48 = &var_4c;
        let var_40_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_38 = &data_651a60;
        let var_30_1: i64 = 1;
        'label_52cdb5:
        let var_18: i64 = 0;
        let var_28: *mut *mut i32 = &var_48;
        let var_20: i64 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(arg1, &var_38);
    }
    
    let rax_1: u64 = arg2 - 0x5c;
    
    if rax_1 > 0x21
    {
        'label_52cdf7:
        var_48 = 0;
        let mut rax_6: *mut i8;
        let mut rdx_1: u64;
        rax_6 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(arg2, &var_48);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_38, rax_6, rdx_1);
        let result: i64;
        arg1[2] = result;
        *arg1 = var_38;
        return result;
    }
    
    match rax_1
    {
        0 =>
        {
            /* tailcall */
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(arg1, "\backslash{}\$\$ {}{}"". "" ""Mi…", 0xc)
        }
        1 | 2 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12 |
            0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c | 0x1d | 0x1e | 0x20
            =>
        {
            goto 'label_52cdf7;
        }
        3 =>
        {
            goto 'label_52cd8f;
        }
        0x1f | 0x21 =>
        {
            var_48 = &var_4c;
            let var_40: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_38 = &data_651a70;
            let var_30: i64 = 2;
            goto 'label_52cdb5;
        }
    }
}
