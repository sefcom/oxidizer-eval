
  fn just::error::format_cmd::h32d34e2140cfa6de(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_30: i128;
    core::iter::traits::iterator::Iterator::chain::he0dcf1b9d0f040aa(&var_30, arg2, arg3, arg4);
    let mut var_48: ();
    core::iter::traits::iterator::Iterator::collect::h757b84d929920df5(&var_48, &var_30);
    let var_40: i64;
    let var_38: i64;
    alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_30, var_40, var_38, 
        " [private]\nexport no entry foun…", 1);
    let var_20: i64;
    arg1[1] = var_20;
    *arg1 = var_30;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(
        &var_48)
}
