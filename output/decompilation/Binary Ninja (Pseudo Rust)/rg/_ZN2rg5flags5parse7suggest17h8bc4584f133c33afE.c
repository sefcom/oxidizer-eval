
  fn rg::flags::parse::suggest::h8bc4584f133c33af(arg1: *mut i128) -> i64

{
    let mut var_70: i64;
    rg::flags::parse::find_similar_names::hae5f1ed6e0368f47(&var_70);
    let var_60: i64;
    
    if var_60 == 0
    {
        *arg1 = -0x8000000000000000;
        let var_68: i64;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hc0c276afa06f1591(
            var_70, var_68);
    }
    
    let mut var_58: i128;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h63de973468f81233(&var_58, &var_70);
    let mut var_a0: *mut i128;
    core::iter::traits::iterator::Iterator::collect::h3297feb4f9d7756d(&var_a0, &var_58);
    let var_98: i64;
    let var_90: i64;
    alloc::str::join_generic_copy::h51bc700a0c907f5e(&var_58, var_98, var_90, 
        ", invalid hyperlink formatiglobI…", 2);
    let var_48: i64;
    let var_78: i64 = var_48;
    let mut var_88: i128 = var_58;
    let rdx_1: u64 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(&var_a0);
    var_a0 = &var_88;
    let var_98_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_58 = &data_7eb640;
    *var_58[8] = 1;
    let var_38: i64 = 0;
    let var_48_1: *mut *mut i128 = &var_a0;
    let var_40: i64 = 1;
    let mut var_28: i128;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_28, 0, rdx_1, &var_58);
    let var_18: i64;
    arg1[1] = var_18;
    *arg1 = var_28;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88)
}
