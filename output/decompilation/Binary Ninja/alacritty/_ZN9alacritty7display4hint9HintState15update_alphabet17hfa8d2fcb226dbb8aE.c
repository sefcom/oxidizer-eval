
  int64_t alacritty::display::hint::HintState::update_alphabet::hfa8d2fcb226dbb8a(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    char result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(arg1[1], arg1[2], arg2, arg3);
    
    if (!result)
    {
        result = alloc::str::_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$str$GT$::clone_into::h29d41bfe54f0b37f(arg2, arg3, arg1);
        arg1[0xb] = 0;
    }
    
    return result;
}
