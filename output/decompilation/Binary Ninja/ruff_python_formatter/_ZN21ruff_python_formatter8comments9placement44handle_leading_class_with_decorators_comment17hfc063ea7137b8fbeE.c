
  void ruff_python_formatter::comments::placement::handle_leading_class_with_decorators_comment::hfc063ea7137b8fbe(int64_t* arg1, int128_t* arg2, void* arg3)

{
    if (*(arg2 + 0x48) == 1)
    {
        int32_t rax = arg2[4];
        
        if (rax < *(arg3 + 0x30))
        {
            int64_t rcx_1 = *(arg3 + 0x10);
            
            if (rcx_1 && *(*(arg3 + 8) + rcx_1 * 0x60 - 0xc) < rax)
            {
                int32_t rcx_4 = *(arg2 + 0x44);
                arg1[1] = 3;
                arg1[2] = arg3;
                arg1[3] = rax;
                *(arg1 + 0x1c) = rcx_4;
                arg1[4] = 0x100;
                *arg1 = 0x60;
                return;
            }
        }
    }
    
    *(arg1 + 0x40) = arg2[4];
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    *(arg1 + 0x30) = arg2[3];
    *(arg1 + 0x20) = zmm2;
    *(arg1 + 0x10) = zmm1;
    *arg1 = zmm0;
}
