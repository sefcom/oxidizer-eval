
  int64_t* just::function::prepend::ha9b5730df85e0431(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_68 = arg3;
    int64_t var_60 = arg4;
    void var_40;
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h46590bb9cc81fd74(&var_40, arg5, arg6);
    int64_t var_50 = 0;
    int16_t var_18 = 1;
    int64_t* var_58 = &var_68;
    void var_80;
    core::iter::traits::iterator::Iterator::collect::hd7f0f7b727827881(&var_80, &var_58);
    int64_t var_78;
    int64_t var_70;
    alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_58, var_78, var_70, 
        " [private]\nexport no entry foun…", 1);
    arg1[3] = arg6;
    *(arg1 + 8) = var_58;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(
        &var_80);
    return arg1;
}
