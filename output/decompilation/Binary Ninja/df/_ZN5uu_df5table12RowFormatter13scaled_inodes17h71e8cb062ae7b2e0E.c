
  int64_t uu_df::table::RowFormatter::scaled_inodes::h71e8cb062ae7b2e0(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_10 = arg4;
    int64_t var_18 = arg3;
    char rax = *(arg2 + 0x54);
    
    if (rax != 2)
        /* tailcall */
        return uu_df::blocks::to_magnitude_and_suffix::hfc39cb976c1a05ed(arg1, arg3, arg4, rax);
    
    return _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1bbf25edea4bff94(arg1, 
        &var_18);
}
