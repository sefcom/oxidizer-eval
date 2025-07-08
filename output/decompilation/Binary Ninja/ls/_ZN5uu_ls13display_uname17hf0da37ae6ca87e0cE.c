
  int64_t uu_ls::display_uname::hf0da37ae6ca87e0c(int128_t* arg1, int32_t arg2, char arg3)

{
    if (!arg3)
        /* tailcall */
        return uu_ls::cached_uid2usr::hb0febf40876d4691(arg1, arg2);
    
    int64_t result_1;
    int64_t result = result_1;
    *result[4] = arg2;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(arg1, &*result[4]);
    return result;
}
