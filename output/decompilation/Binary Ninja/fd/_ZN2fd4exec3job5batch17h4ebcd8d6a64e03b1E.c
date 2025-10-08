
  uint64_t fd::exec::job::batch::h4ebcd8d6a64e03b1(int128_t* arg1, int64_t** arg2, int64_t arg3, void* arg4)

{
    void var_d0;
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he05ad75fcea55ffb(
        &var_d0, arg1);
    void var_80;
    core::iter::traits::iterator::Iterator::filter_map::hbc857f8ae2340044(&var_80, &var_d0, arg4);
    int64_t r8 = 0;
    
    if (!(0 + -(*(arg4 + 0x168))))
        r8 = *(arg4 + 0x170);
    
    return fd::exec::CommandSet::execute_batch::h9ec3434f1d6afbca(arg2, arg3, &var_80, 
        *(arg4 + 0x1d0), r8, *(arg4 + 0x178));
}
