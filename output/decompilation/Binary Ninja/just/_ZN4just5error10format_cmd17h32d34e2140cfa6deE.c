
  int64_t just::error::format_cmd::h32d34e2140cfa6de(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int128_t var_30;
    core::iter::traits::iterator::Iterator::chain::he0dcf1b9d0f040aa(&var_30, arg2, arg3, arg4);
    void var_48;
    core::iter::traits::iterator::Iterator::collect::h757b84d929920df5(&var_48, &var_30);
    int64_t var_40;
    int64_t var_38;
    alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_30, var_40, var_38, 
        " [private]\nexport no entry foun…", 1);
    int64_t var_20;
    arg1[1] = var_20;
    *arg1 = var_30;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_48);
}
