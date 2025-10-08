
  int64_t bat::assets::assets_metadata::AssetsMetadata::new::h19ae9540b0248af9(int128_t* arg1, int64_t arg2, uint64_t arg3)

{
    int128_t var_20;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_20, arg2, arg3);
    int64_t result;
    int32_t rdx;
    result = std::time::SystemTime::now::h4fbc1302a9c481f4();
    int64_t var_10;
    arg1[1] = var_10;
    *arg1 = var_20;
    *(arg1 + 0x18) = result;
    arg1[2] = rdx;
    return result;
}
