
  int64_t bat::vscreen::join::h55e6457a6c5afd34(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_38 = arg3;
    void* const var_30 = &data_aced18;
    void var_20;
    core::iter::traits::iterator::Iterator::collect::h12a8e2223d4ec978(&var_20, &var_38);
    int64_t var_18;
    int64_t var_10;
    alloc::str::join_generic_copy::he2689895b12556fd(&var_38, var_18, var_10, ";\x1b]8;;\x1b\");
    arg1[1] = arg2;
    *arg1 = var_38;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_20);
}
