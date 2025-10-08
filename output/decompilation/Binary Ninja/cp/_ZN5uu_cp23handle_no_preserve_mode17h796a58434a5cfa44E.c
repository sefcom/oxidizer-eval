
  uint64_t uu_cp::handle_no_preserve_mode::h796a58434a5cfa44(char arg1, char arg2, int32_t arg3) __pure

{
    uint64_t result = 0x1b6;
    
    if (!(arg2 & 1))
        result = arg3 & 0x1ff;
    
    if (arg1 & 1)
        return arg3;
    
    return result;
}
