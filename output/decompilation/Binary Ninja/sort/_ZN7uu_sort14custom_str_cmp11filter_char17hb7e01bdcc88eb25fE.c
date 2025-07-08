
  int64_t uu_sort::custom_str_cmp::filter_char::hb7e01bdcc88eb25f(int32_t arg1, char arg2, int32_t arg3) __pure

{
    int32_t result;
    
    if (!arg3 || arg1 - 0x30 < 0xa || (arg1 & 0xffffffdf) - 0x41 < 0x1a)
    {
        label_5706f2:
        result = 1;
        
        if (arg2)
            result = arg1 - 0x20 < 0x5f;
    }
    else
    {
        result = 0;
        
        if (arg1 <= 0x20 && TEST_BITQ(0x100003600, arg1))
            goto label_5706f2;
    }
    
    return result;
}
