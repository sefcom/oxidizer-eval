
  fn alacritty::clipboard::Clipboard::store::h78a3ae796bb4f159(arg1: i64, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_30: ();
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h6e864c30e7322251(&var_30, arg3);
    let mut result: i64;
    let mut rdx: i64;
    result = (*(arg2 + 0x20))(arg1, &var_30);
    
    if result == 0
    {
        return result;
    }
    
    /* tailcall */
    alacritty::clipboard::Clipboard::store::_$u7b$$u7b$closure$u7d$$u7d$::h61e36909b6295ef5(result)
}
