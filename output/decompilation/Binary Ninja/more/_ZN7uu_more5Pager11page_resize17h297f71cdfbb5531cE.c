
  void uu_more::Pager::page_resize::h297f71cdfbb5531c(void* arg1, int64_t, int16_t arg3, int16_t arg4)

{
    if (arg4)
        return;
    
    int16_t temp0 = arg3;
    arg3 -= 1;
    
    if (temp0 < 1)
        arg3 = 0;
    
    *(arg1 + 0x58) = arg3;
}
