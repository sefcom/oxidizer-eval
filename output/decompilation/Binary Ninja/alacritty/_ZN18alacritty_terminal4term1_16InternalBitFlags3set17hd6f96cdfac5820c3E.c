
  int64_t alacritty_terminal::term::_::InternalBitFlags::set::hd6f96cdfac5820c3(int32_t* arg1, int32_t arg2, int32_t arg3)

{
    int32_t rax = *arg1;
    int32_t result = rax | arg2;
    
    if (!arg3)
        result = ~arg2 & rax;
    
    *arg1 = result;
    return result;
}
