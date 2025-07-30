
  fn flealib::commandprocessor::CommandProcessor::bytes_to_string::hf42e7b3c5214d9fe(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_100: i64 = 0;
    let var_f8: i64 = 1;
    let result: i64 = 0;
    let mut var_e0: i64 = arg2;
    let var_d8: i64 = arg3 + arg2;
    
    for let mut i: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he910cc6333cc22bc(&var_e0); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he910cc6333cc22bc(&var_e0)
    {
        let mut i_1: i64 = i;
        let mut var_88: *mut i64 = &i_1;
        let var_80_1: fn(arg1: *mut i64, arg2: *mut i8) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hef6899d97136f60f;
        let mut var_c8: i64 = 2;
        let var_b8_1: i64 = 0;
        let var_b0_1: i64 = 2;
        let var_a8_1: i64 = 0;
        let var_a0_1: i64 = 0x800000020;
        let var_98_1: i8 = 3;
        let mut var_78: *const i8 = &data_44fb30;
        let var_70_1: i64 = 1;
        let var_58_1: *mut i64 = &var_c8;
        let var_50_1: i64 = 1;
        let var_68_1: *mut *mut i64 = &var_88;
        let var_60_1: i64 = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_78);
        var_c8 = var_48;
        let var_38: u64;
        let var_b8_2: u64 = var_38;
        let var_c0: i64;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_100, var_c0, var_38);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_c8);
    }
    
    arg1[1] = result;
    *arg1 = var_100;
    result
}
