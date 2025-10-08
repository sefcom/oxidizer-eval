
  int64_t zoxide::db::stream::StreamOptions::with_base_dir::hdd0087d9881369a3(int128_t* arg1, int128_t* arg2, int128_t* arg3)

{
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::he4fa8c614f7df1fb(&arg2[3]);
    arg2[4] = arg3[1];
    int128_t zmm0 = *arg3;
    arg2[3] = zmm0;
    int128_t zmm1 = *arg2;
    int128_t zmm2 = arg2[1];
    int128_t zmm3 = arg2[2];
    arg1[5] = arg2[5];
    arg1[3] = zmm0;
    arg1[2] = zmm3;
    arg1[1] = zmm2;
    *arg1 = zmm1;
    arg1[4] = arg2[4];
    int64_t result = *(arg2 + 0x48);
    *(arg1 + 0x48) = result;
    return result;
}
