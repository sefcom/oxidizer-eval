
  int64_t uu_sort::custom_str_cmp::filter_char::h2fb7b900db3aad8a(int32_t arg1, char arg2, int32_t arg3) __pure

{
    int32_t result;
    
    if (!arg3 || arg1 - 0x30 < 0xa || (arg1 & 0x1fffdf) - 0x41 < 0x1a)
    {
        label_4c3574:
        result = 1;
        
        if (arg2)
        {
            result = arg1 >= 0x20;
            uint64_t rcx;
            rcx = arg1 != 0x7f;
            rcx &= result;
            result = arg1 < 0x80;
            result &= rcx;
        }
    }
    else
    {
        result = 0;
        
        if (arg1 <= 0x20 && TEST_BITQ(0x100003600, arg1))
            goto label_4c3574;
    }
    
    return result;
}
