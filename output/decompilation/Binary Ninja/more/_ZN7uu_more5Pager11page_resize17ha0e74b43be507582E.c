
  void uu_more::Pager::page_resize::ha0e74b43be507582(void* arg1, int16_t arg2, int16_t arg3)

{
    if (arg3 != 1)
    {
        int16_t temp0_1 = arg2;
        arg2 -= 1;
        
        if (temp0_1 < 1)
            arg2 = 0;
        
        *(arg1 + 0x40) = arg2;
    }
}
