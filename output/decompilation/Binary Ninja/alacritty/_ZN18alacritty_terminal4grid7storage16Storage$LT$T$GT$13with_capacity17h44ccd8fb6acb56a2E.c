
  int64_t alacritty_terminal::grid::storage::Storage$LT$T$GT$::with_capacity::h44ccd8fb6acb56a2(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_18 = arg3;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(arg2, 8, 0x20);
    int64_t var_30 = rax;
    int64_t var_28 = rdx;
    int64_t result = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::resize_with::h6e7572d4385195e4(&var_30, arg2, &var_18);
    arg1[1] = result;
    *arg1 = var_30;
    *(arg1 + 0x18) = 0;
    arg1[2] = arg2;
    *(arg1 + 0x28) = arg2;
    return result;
}
