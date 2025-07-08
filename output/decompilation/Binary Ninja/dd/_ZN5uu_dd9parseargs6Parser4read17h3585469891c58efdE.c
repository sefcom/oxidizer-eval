
  int64_t uu_dd::parseargs::Parser::read::h3585469891c58efd(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_50 = arg3;
    int64_t var_48 = (arg4 << 4) + arg3;
    
    for (int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h12a8649b6eb511d9(&var_50); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h12a8649b6eb511d9(&var_50))
    {
        int32_t var_40;
        uu_dd::parseargs::Parser::parse_operand::h4dfdd7ca9dce5d89(&var_40, arg2, *i, i[1]);
        
        if (var_40 != 0xe)
        {
            int128_t zmm0 = var_40;
            int128_t var_30;
            *(arg1 + 0x18) = var_30;
            *(arg1 + 8) = zmm0;
            *arg1 = 2;
            /* tailcall */
            return core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(
                arg2);
        }
    }
    
    /* tailcall */
    return memcpy(arg1, arg2, 0xd8);
}
