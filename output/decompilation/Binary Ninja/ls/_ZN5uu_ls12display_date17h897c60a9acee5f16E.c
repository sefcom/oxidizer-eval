
  int64_t uu_ls::display_date::h897c60a9acee5f16(int128_t* arg1, int32_t* arg2, char arg3, void* arg4)

{
    int32_t var_20;
    uu_ls::get_time::h9a507b9721b0487b(&var_20, arg2, arg3);
    
    if (!var_20)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(arg1, &data_4d4206[0x12], 3);
    
    return uu_ls::TimeStyler::format::hbbf46b74a2bc22e6(arg1, arg4 + 0x28, &var_20);
}
