
  int64_t alacritty::clipboard::Clipboard::store::h78a3ae796bb4f159(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    void var_30;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h6e864c30e7322251(&var_30, arg3);
    int64_t result;
    int64_t rdx;
    result = (*(arg2 + 0x20))(arg1, &var_30);
    
    if (!result)
        return result;
    
    /* tailcall */
    return alacritty::clipboard::Clipboard::store::_$u7b$$u7b$closure$u7d$$u7d$::h61e36909b6295ef5(
        result);
}
