
  fn just::function::append::hd0bba8c67edfdf58(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> *mut i64

{
    let mut var_68: i64 = arg3;
    let var_60: i64 = arg4;
    let mut var_40: ();
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h46590bb9cc81fd74(&var_40, arg5, arg6);
    let var_50: i64 = 0;
    let var_18: i16 = 1;
    let mut var_58: *mut i64 = &var_68;
    let mut var_80: ();
    core::iter::traits::iterator::Iterator::collect::h9594c850819077c3(&var_80, &var_58);
    let var_78: i64;
    let var_70: i64;
    alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_58, var_78, var_70, 
        " [private]\nexport no entry foun…", 1);
    arg1[3] = arg6;
    *arg1.byte_offset(8) = var_58;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(
        &var_80);
    arg1
}
