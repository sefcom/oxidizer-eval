
  int64_t uu_paste::remove_trailing_line_ending_byte::hc8c21b920eceaeb3(char arg1, void* arg2)

{
    int64_t result = *(arg2 + 0x10);
    
    if (result && *(*(arg2 + 8) + result - 1) == arg1)
    {
        result -= 1;
        *(arg2 + 0x10) = result;
    }
    
    return result;
}
