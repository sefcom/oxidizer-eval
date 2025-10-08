
  int64_t ruff_python_formatter::comments::placement::handle_leading_function_with_decorators_comment::hd641c7b4e7b2916e(int64_t* arg1, int128_t* arg2)

{
    int64_t rax = arg2[1];
    int64_t rcx;
    
    if (rax != 0x5e)
    {
        rax = rax == 0x56;
        rcx = arg2[2];
        
        if (rcx != 0x5e)
            goto label_702e58;
    }
    else
    {
        rcx = arg2[2];
        
        if (rcx != 0x5e)
        {
            rax = 0;
            label_702e58:
            char rcx_1;
            
            if (rcx != 0x4f)
            {
                rcx_1 = *(arg2 + 0x48);
                rax &= rcx == 0x58 & rcx_1;
                
                if (rax == 1)
                {
                    label_702ea1:
                    *(arg1 + 8) = *arg2;
                    int64_t rax_1 = arg2[4];
                    arg1[3] = rax_1;
                    arg1[4] = 0;
                    *(arg1 + 0x21) = rcx_1;
                    *arg1 = 0x60;
                    return rax_1;
                }
            }
            else
            {
                rcx_1 = *(arg2 + 0x48);
                
                if (rax & rcx_1)
                    goto label_702ea1;
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
    return rax;
}
