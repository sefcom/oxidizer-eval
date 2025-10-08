
  char alacritty::input::keyboard::_::InternalBitFlags::set::h73b3a8b59dbf5641(char* arg1, char arg2, int32_t arg3)

{
    char result = *arg1;
    char result_2 = ~arg2 & result;
    result |= arg2;
    char result_1 = result_2;
    
    if (arg3)
        result_1 = result;
    
    *arg1 = result_1;
    return result;
}
