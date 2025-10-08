
  int64_t uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::he29b1e8f7debbd61(int32_t arg1, char* arg2, int32_t arg3)

{
    int64_t result;
    
    if (arg1 != arg3)
    {
        result = arg1 - 0x3a < 0xfffffff6;
        return result;
    }
    
    result = 1;
    
    if (*arg2 == 1)
        return result;
    
    *arg2 = 1;
    return 0;
}
