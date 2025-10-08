
  fn uu_ls::dired::print_positions::h2333ffc8f21f2b3d(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> *mut c_void

{
    let mut r14: i64 = arg3;
    let mut var_40: i64 = arg1;
    let var_38: i64 = arg2;
    let mut var_88: *mut i64 = &var_40;
    let var_80: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
    let mut var_78: *mut c_void = &data_4cf290;
    let var_70: i64 = 1;
    let var_58: i64 = 0;
    let var_68: *mut *mut i64 = &var_88;
    let mut var_60: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    
    if arg4 != 0
    {
        let mut i_1: i64 = arg4 << 4;
        let mut i: i64;
        
        do
        {
            let mut var_48: i64 = r14;
            r14 += 0x10;
            var_88 = &var_48;
            let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7bd7b977de236f2a;
            var_78 = &data_6866f0;
            let var_70_1: i64 = 1;
            let var_58_1: i64 = 0;
            let var_68_1: *mut *mut i64 = &var_88;
            var_60 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_78);
            i = i_1;
            i_1 -= 0x10;
        } while i != 0x10;
    }
    
    var_78 = &data_6866e0;
    let var_70_2: i64 = 1;
    let var_68_2: i64 = 8;
    var_60 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_78)
}
