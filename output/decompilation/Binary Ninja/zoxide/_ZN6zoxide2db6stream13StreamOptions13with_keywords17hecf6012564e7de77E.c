
  int64_t zoxide::db::stream::StreamOptions::with_keywords::hecf6012564e7de77(int128_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t rdx;
    rax = core::iter::traits::iterator::Iterator::map::hda1b8e4a70fc589c(arg3);
    int128_t var_28;
    core::iter::traits::iterator::Iterator::collect::h346e69444f2181f7(&var_28, 
        core::iter::traits::iterator::Iterator::map::hda1b8e4a70fc589c(rax));
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hef709365aaceeb89(
        arg2);
    int64_t var_18;
    arg2[2] = var_18;
    *arg2 = var_28;
    arg1[5] = *(arg2 + 0x50);
    arg1[4] = *(arg2 + 0x40);
    int128_t zmm0 = *arg2;
    int64_t result = arg2[2];
    int64_t rcx_1 = arg2[3];
    int128_t zmm1 = *(arg2 + 0x20);
    arg1[3] = *(arg2 + 0x30);
    arg1[2] = zmm1;
    arg1[1] = result;
    *(arg1 + 0x18) = rcx_1;
    *arg1 = zmm0;
    return result;
}
