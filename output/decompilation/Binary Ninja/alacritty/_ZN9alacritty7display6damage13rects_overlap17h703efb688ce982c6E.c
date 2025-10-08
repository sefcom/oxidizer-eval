
  int64_t alacritty::display::damage::rects_overlap::h703efb688ce982c6(int32_t* arg1, int32_t* arg2)

{
    int32_t rax_3 = *arg1;
    int32_t rcx = *arg2;
    
    if (arg1[2] + rax_3 < rcx)
        return 0;
    
    if (rcx + arg2[2] < rax_3)
        return 0;
    
    int32_t result = arg1[1];
    int32_t rcx_2 = arg2[1];
    
    if (arg1[3] + result < rcx_2)
        return 0;
    
    result = rcx_2 + arg2[3] >= result;
    return result;
}
