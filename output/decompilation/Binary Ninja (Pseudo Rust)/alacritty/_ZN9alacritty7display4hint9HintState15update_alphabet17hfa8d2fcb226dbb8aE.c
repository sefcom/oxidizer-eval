
  fn alacritty::display::hint::HintState::update_alphabet::hfa8d2fcb226dbb8a(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut result: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(arg1[1], arg1[2], arg2, arg3);
    
    if result == 0
    {
        result = alloc::str::_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$str$GT$::clone_into::h29d41bfe54f0b37f(arg2, arg3, arg1);
        arg1[0xb] = 0;
    }
    
    result
}
