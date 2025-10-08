
  int64_t zoxide::db::stream::StreamOptions::with_exclude::hd0b349c1432d2065(int128_t* arg1, int128_t* arg2, int128_t* arg3)

{
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::haacfece5fe5473bb(arg2
        + 0x18);
    *(arg2 + 0x28) = arg3[1];
    *(arg2 + 0x18) = *arg3;
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[3];
    int128_t zmm2 = arg2[4];
    arg1[5] = arg2[5];
    arg1[4] = zmm2;
    arg1[3] = zmm1;
    *arg1 = zmm0;
    arg1[2] = arg2[2];
    int64_t result = *(arg2 + 0x28);
    *(arg1 + 0x28) = result;
    arg1[1] = arg2[1];
    return result;
}
