
  int64_t zoxide::db::stream::Stream::new::hb44baf2d44c3710b(int128_t* arg1, void* arg2, int128_t* arg3)

{
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::sort_by_score::h86f3a64116ac2be7(arg2, *(arg3 + 0x48));
    int64_t result = *(arg2 + 0x10);
    arg1[6] = arg2;
    *(arg1 + 0x68) = 0;
    arg1[7] = result;
    int128_t zmm1 = arg3[1];
    int128_t zmm2 = arg3[2];
    int128_t zmm3 = arg3[3];
    *arg1 = *arg3;
    arg1[1] = zmm1;
    arg1[2] = zmm2;
    arg1[3] = zmm3;
    arg1[4] = arg3[4];
    arg1[5] = arg3[5];
    return result;
}
