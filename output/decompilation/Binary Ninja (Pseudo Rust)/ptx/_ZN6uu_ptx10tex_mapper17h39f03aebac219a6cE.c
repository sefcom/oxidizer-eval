
  fn uu_ptx::tex_mapper::h39f03aebac219a6c(arg1: *mut i64, arg2: i32) -> *mut i128

{
    let mut var_4c: i32 = arg2;
    let mut var_48: *mut i32;
    let mut var_38: *mut *mut [i8; 0x9b];
    
    if arg2 - 0x23 < 4
    {
        'label_5b7d6f:
        var_48 = &var_4c;
        let var_40_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        var_38 = &data_6edf70;
        let var_30_2: i64 = 1;
        'label_5b7d95:
        let var_18_1: i64 = 0;
        let var_28: *mut *mut i32 = &var_48;
        let var_20_1: i64 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(arg1, &var_38);
    }
    
    let rax_1: u64 = arg2 - 0x5c;
    
    if rax_1 > 0x21
    {
        'label_5b7dd7:
        var_48 = 0;
        let rbx_1: *mut i128 = arg1;
        let mut rax_6: i64;
        let mut rdx_2: u64;
        rax_6 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(arg2, &var_48);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_38, 
            rax_6, rdx_2);
        let result: *mut i128;
        rbx_1[1] = result;
        *rbx_1 = var_38;
        return result;
    }
    
    match rax_1
    {
        0 =>
        {
            /* tailcall */
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(arg1, 
                "\backslash{}\$\$ {}{}"". "" ""Mi…", 0xc)
        }
        1 | 2 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12 |
            0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c | 0x1d | 0x1e | 0x20
            =>
        {
            goto 'label_5b7dd7;
        }
        3 =>
        {
            goto 'label_5b7d6f;
        }
        0x1f | 0x21 =>
        {
            var_48 = &var_4c;
            let var_40_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            var_38 = &data_6edf80;
            let var_30_1: i64 = 2;
            goto 'label_5b7d95;
        }
    }
}
