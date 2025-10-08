
  fn uu_stty::print_control_chars::hed7af0204ba7e7a6(arg1: *mut i8, arg2: i8) -> u64

{
    if (arg2 & 1) == 0
    {
        return 0x86;
    }
    
    let mut var_a0: *mut *mut c_void;
    let mut var_78: *mut c_void;
    
    for let mut i: i64 = 0; i != 0x168; 
    {
        let mut var_80: *mut c_void = (&data_4e2e00).byte_offset(i);
        let mut var_48: i64;
        uu_stty::control_char_to_string::hcb31aba3c5c265db(&var_48, arg1[*(i + 0x4e2e10)]);
        let rax_3: i64 = var_48;
        let var_40: i32;
        
        if -(rax_3) == -0x8000000000000000
        {
            return var_40;
        }
        
        let var_34: i32;
        let var_a4_1: i32 = var_34;
        let var_3c: i64;
        let var_ac_1: i64 = var_3c;
        let mut var_b8: i64 = rax_3;
        var_a0 = &var_80;
        let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h73b50bfbd05958df;
        let var_90_1: *mut i64 = &var_b8;
        let var_88_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_78 = &data_4e2da0;
        let var_70_1: i64 = 3;
        let var_58_1: i64 = 0;
        let var_68_1: *mut *mut *mut c_void = &var_a0;
        let var_60_1: i64 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
        i += 0x18;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd804c925e1c3e6cf(var_b8, var_40);
    }
    
    var_a0 = &arg1[6];
    let var_98_2: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
    let var_90_2: *mut c_void = &arg1[5];
    let var_88_2: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
    var_78 = &data_4e2dd0;
    let var_70_2: i64 = 3;
    let var_58_2: i64 = 0;
    let var_68_2: *mut *mut *mut c_void = &var_a0;
    let var_60_2: i64 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    0x86
}
