
  fn flealib::commandprocessor::CommandProcessor::vec_to_string::h42d265a3d6a77fc9(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 1;
    let result: i64 = 0;
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7ee53d07f29f4608(arg2);
    let mut var_a0: i64 = rax;
    let var_98: i64 = rdx;
    
    for let mut i: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3bfb18f4def3f622(&var_a0); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3bfb18f4def3f622(&var_a0)
    {
        let mut i_1: i64 = i;
        let mut var_58: *mut i64 = &i_1;
        let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
        let mut var_88: *mut c_void = &data_b08608;
        let var_80_1: i64 = 2;
        let var_68_1: i64 = 0;
        let var_78_1: *mut *mut i64 = &var_58;
        let var_70_1: i64 = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_88);
        var_88 = var_48;
        let var_38: u64;
        let var_78_2: u64 = var_38;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_c0, var_80_1, var_38);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_88);
    }
    
    arg1[1] = result;
    *arg1 = var_c0;
    result
}
